class Car: 
    def __init__(self, make, model ,year,odometer_reading):
        self.make=make
        self.model=model
        self.year=year
        self.odometer_reading=0
    
    def get_descriptive_name(self):
        long_name=str(self.year)+' '+self.make+' '+self.model
        return long_name.title()
    
    def read_odometer(self):
        print("This car has "+str(self.odometer_reading)+" miles on it.")
    
    def update_odometer(self,mileage):
        if mileage>=self.odometer_reading:
            self.odometer_reading=mileage
        else:
            print("You can't roll back an odometer!")
    
    def increment_odometer(self,miles):
        self.odometer_reading+=miles
        
    def drive(self):
        print(str(self.make) + "Car is being driven")
        
    def stop(self):
        print(str(self.make) + "Car has stopped")
    
    def sell(self):
        print(str(self.make) + "Car has been sold after driving" + str(self.odometer_reading) + "miles.)")
        
my_new_car=Car('audi','a4',2016,0)
print(my_new_car.get_descriptive_name())
my_new_car.read_odometer()
my_new_car.drive()
my_new_car.increment_odometer(100)
my_new_car.read_odometer()
my_new_car.update_odometer(150)
my_new_car.read_odometer()
my_new_car.stop()
my_new_car.sell()


        