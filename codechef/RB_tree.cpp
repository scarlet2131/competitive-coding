#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
}node;


int height(node *current)
{
    if(current==NULL)
        return 0;

    else
    {
        int ld=height(current->left);
        int rd=height(current->right);

        if(ld>rd)
        {
            return ld+1;
        }
        else
        {
            return rd+1;
        }
    }
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data   = data;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;               //height is assumed to be 1 of every new node (added at leaf)
    return(node);
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *Temp = x->right;


    x->right = y;
    y->left = Temp;

    y->height = max(height(y->left), height(y->right))+1;       //updated height
    x->height = max(height(x->left), height(x->right))+1;


    return x;
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *Temp = y->left;


    y->left = x;
    x->right = Temp;


    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;


    return y;
}


int getBalance(struct Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

struct Node* insert(struct Node* node, int data)
{

    if (node == NULL)
        return(newNode(data));

    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    else
        return node;


    node->height = 1 + max(height(node->left),
                           height(node->right));

    int bal = getBalance(node);                 //after a new insert check the balance factoe
    if (bal > 1 && data < node->left->data)
        return rightRotate(node);

    if (bal < -1 && data > node->right->data)
        return leftRotate(node);

    if (bal > 1 && data> node->left->data)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
    if (bal < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

struct Node * minValueNode(struct Node* node)
{
    struct Node* current = node;


    while (current->left != NULL)
        current = current->left;

    return current;
}

struct Node* deleteNode(struct Node* root, int key)
{


    if (root == NULL)
        return root;


    if ( key < root->data )
        root->left = deleteNode(root->left, key);

    else if( key > root->data )
        root->right = deleteNode(root->right, key);


    else
    {

        if( (root->left == NULL) || (root->right == NULL) )
        {
            struct Node *temp = root->left ? root->left : root->right;


            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
             *root = *temp;

            free(temp);
        }
        else
        {

            struct Node* temp = minValueNode(root->right);


            root->data = temp->data;


            root->right = deleteNode(root->right, temp->data);
        }
    }


if (root == NULL)
      return root;


    root->height = 1 + max(height(root->left),height(root->right));


    int balance = getBalance(root);



    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left =  leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

int search(struct Node *temp,int target)
{
        if(temp==NULL)
        {
                return 0;
        }
        else
        {
                if(target==temp->data)
                        return 1;
                else if(target>temp->data)
                        search(temp->right,target);
                else
                        search(temp->left,target);
        }
}


void level(node *current,int l)
{
    if(current==NULL)
    {
        return;
    }
    if(l==1)
    {
        cout<<current->data<<" ";
    }
    if(l>1)
    {
        level(current->left,l-1);
        level(current->right,l-1);
    }
}
void order(node *current)               //level order traversal
{
    int h;
    h=height(current);
    int i;
    for(i=1;i<=h;i++)
    {
        level(current,i);
        //cout<<endl;
    }
}

void level2(node *temp,int l,int lev,int key)
{
        if(temp==NULL)
                return;
        if(l==1)
        {
            //printf("%d ",temp->data);
            if(temp->data==key)
            {
                cout<<lev-1<<endl;
                return;
            }
        }

        else if(l>1)
        {
                level2(temp->left,l-1,lev,key);
                level2(temp->right,l-1,lev,key);
        }
}

void order2(node *temp,int key)
{
        int h;
        h=height(temp);
        int i;
        for(i=1;i<=h;i++)
        {
                        level2(temp,i,i,key);
                        //printf("\n");
        }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *root = NULL;
        int ch;
        int f=0;
        while(1)
        {
             cin>>ch;
             if(ch==1)
             {
                   int in;
                   cin>>in;
                   root = insert(root,in);
             }
             else if(ch==2)
             {
                   int in;
                   cin>>in;
                   root = deleteNode(root, in);

             }
             else if(ch==3)
             {
                   int x;
                   cin>>x;
                   int res =0;
                   res= search(root,x);
                   if(res==1)
                   {
                        order2(root,x);
                        
                  }
                  else
                        cout<<"-1"<<endl;

             }
             else if(ch==4)
             {
                   order(root);
                   cout<<endl;
             }
             else if(ch==5)
             {
                   break;
             }
             else
             {
                   f=1;
                   break;
             }

       }
       if(f==1)
          {
            break;
          }
    }
}
