print "Snoopizzler: "
user_input = gets.chomp;
 
user_input.downcase!
if user_input.include? "i"
    user_input.gsub!(/(i)\w+/, "izzle")
    user_input.gsub!(/(or|our)/g, "o'")
    print user_input;
end
 
gets.chomp;
