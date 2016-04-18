t=gets.to_i

while t!= 0
    n=gets.to_i
    x=(1-(Math.sqrt(1-8*n)))/2
    if(x.is_a?Integer==true) 
        puts "Go On Bob\n"
    else
        puts "Better Luck Next Time\n"
    t-=1
    end
end
