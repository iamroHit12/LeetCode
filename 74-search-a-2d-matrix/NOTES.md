for(int i=0;i<matrix.size();i++){
for(int j=0;j<matrix[i].size();j++){
if(matrix[i][j]==target)
return true;
}
}
return false;