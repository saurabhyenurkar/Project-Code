import math

# Given Data
phase = int(input("Enter the phase supply : "))
p = int(input("Enter the number of poles : "))
flux = float(input("Enter the flux : "));
cps = int(input("The number of conductor per slot : "));
slots = int(input("Enter the number of slots : "))
Ns = 375;

# Ns= (120*f)/p
# Now , f = (Ns*p)/120
value = 0;
f = (Ns * p) / 120;

Tph = (cps * slots) / 6;

B = (180 * p) / slots;
m = slots / (p * phase);
Kd = math.sin(math.radians(m * B / 2)) / (m * (math.sin(math.radians(B / 2))));

coilspan = int(input("Enter the coil span / if not given put zero : "));
if coilspan == 0:
    x = int(input("Enter the value shorten no. slots : "))
    alpha = x * B;
else:
    coilspan = int(input("Enter the coil span : "))
    alpha = 180 - coilspan;

Kc = math.cos(alpha / 2);
print("-----------------------------------------------------------")
print("The frequency is", f);
print("The value of Tph is : ", Tph);
print("The value of Kc is : ", Kc);
print("The value of Kd is : ", Kd)
print("------------------------------------------------------------")
Eph = 4.44 * Kc * Kd * flux * f * Tph;
print("The value of the phase voltage is : ", Eph);
print("------------------------------------------------------------")
El = math.sqrt(3) * Eph;
print("The value of the line voltage is : ", El);
print("")
print("""Submitted by : Vaibhav Burkul
Roll no : EE20020
Creative Assignment Question 1""")
