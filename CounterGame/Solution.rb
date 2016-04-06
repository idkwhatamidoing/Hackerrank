T=gets.to_i

def winner(pturn)
    if a%2==0 
        puts "Richard\n"
    else 
        puts "Louise\n"
    end
end            

while T != 0
    turn=1
    N=gets.to_i
    n=N.to_s(2)
    while N!=1
        one="1"
        zero="0"
        if n.count(1)>1
            zero*=(n.length-2)
            one.concat(zero)
            N-=one.to_i
        else
            N/=2
        end
    turn+=1
    end 
    winner(turn)
    T-=1
end
