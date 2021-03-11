package ro.ase.acs.classes;

public abstract class Vehicle implements Cloneable {
	private String nameVehicle = " ";
	private int speedVehicle=0;
	
	public Vehicle() {
		nameVehicle = "";
		speedVehicle = 1;
	}
	
	public Vehicle(String name, int speed) {
		this.nameVehicle = name;
		this.speedVehicle = speed;
	}

	public String getName() {
		return nameVehicle;
	}

	public int getSpeed() {
		return speedVehicle;
	}
	
	@Override
	public Object clone() throws CloneNotSupportedException {
		Vehicle copyVehicle = (Vehicle)super.clone();
		copyVehicle.nameVehicle = nameVehicle;
		copyVehicle.speedVehicle = speedVehicle;
		return copyVehicle;
	}

	public abstract void move();
}
