package com.solving;

import java.util.ArrayList;
import java.util.List;

public class GraCode {
    private boolean[] arr;
    class Solution {
        public List<Integer> grayCode(int n) {
            List<Integer> res=new ArrayList<>();
            for(int i=0;i<(1<<n);i++){
                res.add((i/2)^i);
            }
            return res;
        }
    }
}