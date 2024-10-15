from queue import Queue

class LiftManagement:
    def _init_(self):
        self.floor_queue = Queue()
        self.current_floor = 0  # Assuming the lift starts at the ground floor (0)

    # Add a floor request to the queue
    def request_floor(self, floor):
        if floor != self.current_floor:
            print(f"Floor {floor} requested.")
            self.floor_queue.put(floor)
        else:
            print(f"Lift is already on floor {floor}")

    # Process the next floor request in the queue
    def move_lift(self):
        if not self.floor_queue.empty():
            next_floor = self.floor_queue.get()  # Remove the next floor from the queue
            print(f"Moving lift from floor {self.current_floor} to floor {next_floor}")
            self.current_floor = next_floor
        else:
            print("No more floor requests.")

    # Get the current floor of the lift
    def get_current_floor(self):
        return self.current_floor

    def has_pending_requests(self):
        return not self.floor_queue.empty()

def main():
    lift = LiftManagement()
    running = True

    while running:
        print(f"\nCurrent Floor: {lift.get_current_floor()}")
        print("1. Request a floor")
        print("2. Move lift")
        print("3. Exit")
        option = int(input("Choose an option: "))

        if option == 1:
            floor = int(input("Enter floor number to request: "))
            lift.request_floor(floor)
        elif option == 2:
            lift.move_lift()
        elif option == 3:
            running = False
            print("Exiting lift management system.")
        else:
            print("Invalid option. Please try again.")

        # Automatically process pending requests
        while lift.has_pending_requests():
            lift.move_lift()

if _name_ == "_main_":
    main()