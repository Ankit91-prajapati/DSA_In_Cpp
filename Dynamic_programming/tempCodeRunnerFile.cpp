int main(){
    int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    int curr, next =1, next2 =0;
    for(int i= n-1; i>=0; i--){
        curr = next+next2;
        next2 =next;
        next =curr;

    }
    cout<<"there is a different ways to climb stairs "<<curr;
    return 0;
}