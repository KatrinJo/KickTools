
// 将二进制最右边的1变为0
int reverseTheLastOneToZero(int x) {
    return x & (x - 1);
}

// 将右边第一个1后的几位全置为1，和上面这个有点像
int setOne(int x) {
    return x | (x - 1);
}

// 找到最右边的1
int findTheLastOne(int x) {
    return x & (-x);
} 
