package ro.ase.acs.classes;

import ro.ase.acs.interfaces.Taxable;

public final class Car extends Vehicle implements Taxable {
	private String colorVehicle = "white";
	private int capacityVehicle = 49;
	
	public Car() {
		super();
		colorVehicle = "white";
		capacityVehicle = 49;
	}
	
	public Car(String name, int speed, String color, int capacity) {
		super(name, speed);
		this.colorVehicle = color;
		this.capacityVehicle = capacity;
	}
	
	public String getColor() {
		return colorVehicle;
	}

	public void setColor(String color) {
		this.colorVehicle = color;
	}

	public int getCapacity() {
		return capacityVehicle;
	}

	public void setCapacity(int capacity) {
		this.capacityVehicle = capacity;
	}

	@Override
	public double computeTax() {
		
		float tax = 0;
		if(capacityVehicle < 2000) {
			tax = (float)capacityVehicle / 1000 * 50;
		}
		else {
			tax = (float)capacityVehicle / 1000 * 100;
		}
		return tax < MIN_TAX ? MIN_TAX : tax;
	}

	@Override
	public final void move() {
		System.out.println("The car is moving");
	}

	@Override
	public Object clone() throws CloneNotSupportedException {
		Car copyCar =  (Car)super.clone();
		copyCar.colorVehicle = colorVehicle;
		copyCar.capacityVehicle = capacityVehicle;
		return copyCar;
	}
}
