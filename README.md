
## x86-to-C Interface Programming Project Specifications
<p float="left">
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/331dc6ac-0f0d-4464-9495-09b440773ea5" width="100%" />
</p>

## The Code
All the variables in the specification were pre-initialized with set values. Scalar variables `n` and `A` were initialized
at _2^20_ and _2.0_, respectively. while  Vector `X` was initialized with values _{1.0, 2.0, 3.0...`n`}_ with increments 
of _1.0_ until `n`. Vector `Y` was initialized with values _{11.0, 12.0, 13.0...`n`}_ with the same increment. The sanity
check that was done included comparing the results between the C and Assembly kernels every run.
<p float="left">
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/1dece165-5dab-43aa-8133-6a7aa7339c26" width="39%" />
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/f96e3a0a-9147-4ac6-a02d-a1682e0bd577" width="39%" /> 
</p>

## The Analysis
The following image is a comparison between the results of the timed outputs. The program was run on a Windows emulator
on a MacbookPro M1 Pro (2021). While the results on the _Debug mode_ mostly follow the expected output of ASM running faster,
the difference, if it exists, is marginal. This is most likely due to a hardware-level problem because when the same program
was run on a borrowed Windows laptop, the Assembly kernel was usually more than 2x faster than the C kernel. On the other 
hand, the results on the _Release mode_ consistently show that the Assembly kernel is slower in execution than the C kernel.
However, release mode does make the code more efficient in that it takes less time overall to run all simulations.
<p float="left">
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/800b2bd7-ca85-4b33-97b7-7d30ff8a0402" width="50%" />
</p>

## Sample Runs
## 2^20
<p float="left">
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/e297ea36-87fb-4d77-9b0e-916d9691cc16" width="29%" />
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/c7335538-8ada-48b2-ba72-564c2669a4eb" width="29%" />
</p>

## 2^24
<p float="left">
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/ffdf2504-b9a3-4e9d-b7c2-7e4103d575f3" width="29%" />
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/c1935962-6922-4b9f-ae2e-dc26b220ac27" width="29%" />
</p>

## 2^28
<p float="left">
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/e6d82c88-0ca2-4976-89b4-e72a204cd59a" width="29%" />
  <img src="https://github.com/Milkz03/LBYARCH-x86toC/assets/105696813/09f1e6c3-b2ca-41f6-a8cb-d9009576526c" width="29%" />
</p>
