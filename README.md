# firstprogram
In my opinion, this is not what you should write as your first program in Ruby, or any language:
```ruby
puts "Hello world!"
```
It should look more like this:
```ruby
print "Snoopizzler: "
user_input = gets.chomp;
 
user_input.downcase!
if user_input.include? "i"
    user_input.gsub!(/(i)\w+/, "izzle")
    user_input.gsub!(/(or|our)/g, "o'")
    print user_input;
end
 
gets.chomp;
```

This repo is a collection of silly, stupid programs I write when I begin a programming language. Please enjoy, and feel free to add more examples.

More nostalgia at [sargeant45/oldcode](https://github.com/sargeant45/oldcode).
