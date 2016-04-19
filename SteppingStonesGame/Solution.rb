t=gets.to_i

while t!= 0
    n=gets.to_i
    x=(1-(Math.sqrt(1+8*n)))/2 
    if(x.floor==x)
        puts "Go On Bob #{x.abs.floor}\n"
        break
    else
        puts "Better Luck Next Time\n"
        break
    t-=1
    end
end
