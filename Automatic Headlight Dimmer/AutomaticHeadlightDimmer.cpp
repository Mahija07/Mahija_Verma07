class LightSensor:
    def detect_oncoming_traffic(self):
        # Simulated light sensor logic
        return True  # or False, depending on detection

class HeadlightController:
    def __init__(self):
        self.high_beam_active = False

    def switch_to_high_beam(self):
        self.high_beam_active = True
        print("Switched to high beam")

    def switch_to_low_beam(self):
        self.high_beam_active = False
        print("Switched to low beam")

class AutomaticHeadlightDimmer:
    def __init__(self):
        self.sensor = LightSensor()
        self.controller = HeadlightController()

    def update(self):
        if self.sensor.detect_oncoming_traffic():
            self.controller.switch_to_low_beam()
        else:
            self.controller.switch_to_high_beam()

# Usage
dimmer = AutomaticHeadlightDimmer()

# Simulate system running
for _ in range(5):
    dimmer.update()