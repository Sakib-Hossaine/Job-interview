multiset<int> multisetInsert(int arr[],int n)
{
    multiset<int>s;
    for (int i = 0;i<n;i++)
    s.insert(arr[i]);
   
    
    
    return s;
    
}


void multisetDisplay(multiset<int>s)
{
    //Multiset display print elements
    for(auto u : s)
    cout<< u<< " ";
    cout<<endl;
}


void multisetErase(multiset<int>&s,int x)
{
    //If and else condition to erase x from multiset
    if( s.count (x )>=1)
    {s.erase( x);
    cout<<"erased "<<x<<endl;
}
else{
    cout<<"not found"<<endl;;
}
    
    
}