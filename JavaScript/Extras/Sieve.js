let vector = [];
let i=0;
let n = 100;
while(vector.length<=n){
    vector.push(i);
    i++;
}
i=0;
vector[0]=0;
vector[1]=0;
function sieve(){
    for(i=2;i*i<=n;i++){
        for(let j = i*2;j<=n;j+=i){
            vector[j]=0;
        }
    }
    vector.filter(a=>a!=0).forEach(a=>console.log(a));
}
sieve();