# Programming paradigms. Assignment 3. Caesar Encryption/Decryption using dynamic/static library.  
  
This Caesar encryption program can operate with:  
- negative keys  
- uppercase  
- lowercase  
  
## Dynamic library compilation and usage with terminal  
<img width="734" alt="Знімок екрана 2024-06-18 о 10 17 29" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/86b886e8-b89e-4f59-957e-282b17c30829">  
  
<img width="743" alt="Знімок екрана 2024-06-18 о 10 17 37" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/ada068e3-ed00-4187-9ab1-f3341158c0e1">  

After the execution of those commands in terminal, the directory now looks like this:  

<img width="565" alt="Знімок екрана 2024-06-18 о 10 19 00" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/aa47b731-a98d-49bd-974e-f96a8586bb5e">  
  
  
## Console execution  
<img width="549" alt="Знімок екрана 2024-06-18 о 10 20 05" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/689385c6-b265-4a0d-a11e-f24ed210b40f">  
  
<img width="634" alt="Знімок екрана 2024-06-18 о 10 21 02" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/5ef95778-50c2-4a90-812b-8d12022a376f">  

The program can successfully operate with negative keys without returning "@" or "?" instead of the letter.  
  
  
## Additional: static library execution  
  
<img width="615" alt="Знімок екрана 2024-06-18 о 13 31 26" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/20bb6631-8621-479f-9074-6c21926bcaaa">  
  
<img width="442" alt="Знімок екрана 2024-06-18 о 13 39 56" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/b6c71856-0ab9-4561-9d70-7061108462bb">  
  
By using **ar rcs** we create a static library from object file and now the *libcaesar.a* (archive) is created in the directory.
  
<img width="576" alt="Знімок екрана 2024-06-18 о 13 32 15" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/70e22af0-1f6a-48cd-8eb8-3f7344392155">  
  
We can now execute main and check whether it works correctly:  
<img width="464" alt="Знімок екрана 2024-06-18 о 13 32 02" src="https://github.com/kseniiahanziuk/caesar-encryption-algorithm/assets/151023627/9d6bc1c4-a31f-4e95-888e-4642cc14e3d4">  
It does!
