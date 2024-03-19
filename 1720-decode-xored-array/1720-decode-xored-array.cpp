class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>decode(encoded.size()+1);
       decode[0] = first; 
     for(int i=1;i<(encoded.size()+1);i++){
         decode[i]=encoded[i-1]^decode[i-1];
     }   
        return decode;
    }
};