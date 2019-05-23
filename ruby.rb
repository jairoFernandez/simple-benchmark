years = 1000000
perc = 1 + (0.001 / 100)
start = 0.00001

for i in 0..years do
  puts "Years #{i} \n #{start * (perc**i)}\n"
end