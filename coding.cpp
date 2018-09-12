#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
using namespace std;



class TreeNode {
private:
    vector<TreeNode*> children;
    char* timestamp;
    string data;
   
    int nodeNumber;
    string nodeId;
    string owner_id;
   
    string referenceNodeId;
    string childReferenceNodeId;
    string genesisReferenceNodeId;
    string HashValue;
    int value;

    
    public:
    string getData(){
    	string owner_name;
    	cout<<"Enter the data"<<endl;
    	cin>>owner_name;
    	string data=owner_name;
     	static int id=0;
     	data=data+to_string(id++);
     	return data;
    	
    }    	
    
    bool checkpassword(string p)
    {
        return p==upassword;
    }
    void dun()
    {
        cout<<uname<<" ";
    }
    string urname()
    {
        return uname;
    }
    int uid()
    {
        return userid;
    }

};
    char* getTime(){
    	
    	 // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

  

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   return dt;
    }
   void print(){
   	cout<<data;
   }
    TreeNode() {
        timestamp=getTime();//getting the time and date using getTime function
        this->data = getData();
        
    }
    
    
    
    
};



// void printLevelWise(TreeNode<int>* root) {//printing the tree in level wise
    
//     queue<TreeNode<int>*> pendingNodes;//using queue to print level wise
// 	pendingNodes.push(root);
// 	while(pendingNodes.size()!=0){
// 		TreeNode<int>* front=pendingNodes.front();
// 		pendingNodes.pop();
// 		cout<<front->data<<":";
// 		for(int i=0;i<front->children.size();i++){
// 			cout<<front->children[i]->data;
//           if((front->children.size()-1)!=i){
//             cout<<",";
//           }
// 			pendingNodes.push(front->children[i]);
// 		}
// 		cout<<endl;
		
// 	}
// }



int main() {
	// your code goes here
	TreeNode node;
	
user su;
  	su.adduser();
    cout<<"Enter Super User Password";
    string cp;
    cin>>cp;
    vector<user> userlist;
    user u;
    if(su.checkpassword(cp))
    {
        static user currentuser=su;
while(1)
{
    int ch;
    cout<<"1_________Add User"<<endl;
    cout<<"2_________Show List"<<endl;
    cout<<"3_________Login User"<<endl;
    cout<<"4_________MAIN Work MENU"<<endl;
    cout<<"5_________Current User"<<endl;
    cout<<"Enter choice";
    cin>>ch;
     vector<user> ::iterator it;
     int loginflag=0;
    switch(ch)
    {


        case 1:
		{
		    cout << "Enter Details:  ";
			u.adduser();
			userlist.push_back(u);
			break;

		}
        case 2:

{
    		cout << "Showing list:  ";
            cout<<"super User "<<"***";su.dun();
            cout<<endl;
			for( it=userlist.begin();it!=userlist.end();it++)
           {
               user temp=*it;
                 temp.dun();
                 cout<<" ";
           }
			break;

}
        case 3:
{
                    cout<<"Change user privelege ";
            string cun;
            string cup;
            cout<<"Enter username: ";
            cin>>cun;
            cout<<"Enter userpassword: ";
            cin>>cup;
                loginflag=0;
                for( it=userlist.begin();it!=userlist.end();it++)
                    {
                        user i=*it;
                        if(i.urname()==cun &&  i.checkpassword(cup) )
                        {
                            loginflag=1;
                            currentuser=i;
                            break;
                        }
                    }
                if(loginflag==0)
                    break;


}

        case 4:
        {
            if(loginflag==1)
         cout<<"black zeref"<<endl;
         cout<<"Tree Operations"<<endl;
         break;

        }
        case 5:
          {
             currentuser.dun();

          }
}

    char choice;
    cout<<"Do you Want to quit (Y/N) "<<endl;

    cin>>choice;
    if(choice=='Y')
        exit(0);
    else
        continue;
}
    }
    else
    {
        cout<<"Permission Denied "<<endl;
    }
    return 0;
}
