int sum =0;
for(int i=0;i<s.length()-1;i++){
    for(int j=i+1;j<s.length();j++){
        sum+=abs(s[i]-s[j]);
    }
}
return sum;