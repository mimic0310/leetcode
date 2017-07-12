int hammingDistance(int x, int y) {
    
    int z = x ^ y;
    int cnt = 0, ret = 0;
    while(z>0)
    {
        ret += (z & 1);
        z = z >> 1;
    }
    return ret;
}
