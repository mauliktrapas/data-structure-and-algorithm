#include <iostream>

using namespace std;

class TreapNode{
	int value,priority;
	TreapNode left;
	TreapNode right;
	TreapNode(){
		this.value=0;
		this.left=this;
		this.right=this;
		priority=Integer.MAX_VALUE;
	}
	TreapNode(int e){
		this(e,null,null);
	}
	TreapNode(int e,TreapNode i,TreapNode j){
		this.value=e;
		this.left=i;
		this.right=j;
		this.priority=new Random().nextInt();
	}
}

class TreapTree{
	TreapNode root;
	TreapNode nill=new TreapNode();
	public : TreapTree(){
		root=nill;
	}
	public : void Insert(int x){
		root=Insert(x,root);
	}
	public : TreapNode Insert(int x,TreapNode t){
		if(t==nill)
			return new TreapNode(x,nill,nill);
		else if(x<t.value){
			t.left=Insert(x,t.left);
			if(t.left.priority<t.priority){
				TreapNode L=t.left;
				t.left=L.right;
				L.right=t;
				return L;
			}
		}
		else if(x>t.value){
			t.right=Insert(x,t.right);
			if(t.right.priority<t.priority){
				TreapNode R=t.right;
				t.right=R.left;
				R.left=t;
				return R;
			}
		}
		return t;
	}
	public : void inorder(){
		inorder(root);
	}
	public : void inorder(TreapNode r){

		if(r!=nill){
			inorder(r.left);
			System.out.println(r.value+" ");
			inorder(r.right);
			//System.out.println(r.value+" ");
		}
	}
    public : void makeEmpty()

    {

        root = nill;

    }
}

int main()
{
    	int n,x;
		TreapTree as=new TreapTree();
		cout << "How many elements do you want to enter" << endl;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			as.Insert(x);

		}
		as.inorder();
    return 0;
}

//import java.util.Random;


