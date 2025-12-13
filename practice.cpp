
            if(left1 <= right2 && left2 <= right1){
                if((n + m) % 2 == 0)
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
                else
                    return max(left1, left2);
            }
            else if(left1 > right2) high = cut1 - 1;
            else low = cut1 + 1;
        }
        return 0.0;
    }
};

