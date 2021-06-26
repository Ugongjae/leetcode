package com.solving;

import java.util.ArrayList;
import java.util.Arrays;

public class RedundantConnection {
    static class Solution {
        public ArrayList<Integer> arr;
        public int[] findRedundantConnection(int[][] edges) {
            arr = new ArrayList<Integer>();
            for(int i=0;i<edges.length+1;i++){
                arr.add(i);
            }
            for(int i=0;i<edges.length;i++){
                int A=edges[i][0];
                int B=edges[i][1];

                int rA=findroot(A);
                int rB=findroot(B);

                if(rA!=rB){
                    if(rA<rB){
                        arr.set(rB,rA);
                    }else{
                        arr.set(rA,rB);
                    }
                }else{
                    return new int[]{A,B};
                }
            }

            return new int[]{0,0};
        }

        public int findroot(int idx){
            while(arr.get(idx)!=idx){
                idx=arr.get(idx);
            }

            return idx;
        }
    }
}
