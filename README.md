
# Space Travel Simulation

## Description

This project simulates space travel between different planets in our solar system. It allows users to create a spaceship, provide initial fuel, and travel to various planets, ensuring enough fuel is available for each journey. The simulation demonstrates basic object-oriented programming concepts using C++.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)
- [Contact Information](#contact-information)

## Installation

To compile and run this project, follow these steps:

1. **Clone the repository:**
    ```bash
    git clone https://github.com/Elveng/Space_Project.git
    cd Space_Project
    ```

2. **Compile the project:**
    ```bash
    g++ main.cpp SpaceShip.cpp Planet.cpp -o Space_Project
    ```

3. **Run the executable:**
    ```bash
    ./Space_Project
    ```

## Usage

After running the executable, follow the prompts to:

1. **Enter the spaceship's name:**
    - The name should be a single word.
2. **Enter the initial fuel for the spaceship.**
3. **Select a starting planet from the list provided.**
4. **Travel to different planets by selecting their corresponding number.**
5. **Ensure you have enough fuel for the trip; otherwise, you need to refuel.**

### Example

```sh
Enter the spaceship's name (one word only): Enterprise
Enter the spaceship's initial fuel (in units): 500000
...
Select the planet number you want to travel to (1-9) or enter 0 to exit: 3
Successfully traveled to Earth
Current Fuel: 499999.8
```

## Features

- **Planet Class:** Represents a planet with attributes such as name, distance from the sun, and diameter.
- **Spaceship Class:** Represents a spaceship with attributes such as name, fuel, and current location.
- **Travel Mechanism:** Calculates the distance between planets and the required fuel for travel, updates the spaceship's fuel, and changes its current location.

## Contributing

1. **Fork the repository**
2. **Create your feature branch (`git checkout -b feature/fooBar`)**
3. **Commit your changes (`git commit -am 'Add some fooBar'`)**
4. **Push to the branch (`git push origin feature/fooBar`)**
5. **Create a new Pull Request**

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

This project was completed as part of object oriented lecture's lab assignment by Tahsin Berk Oztekin.

## Contact Information

For any questions or suggestions, feel free to contact:

- **Name:** Tahsin Berk Oztekin
- **Email:** tahsinberkoztekin@gmail.com

