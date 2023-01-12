#include "getRawIMU.h"

// getting raw data function
// get accelerator raw data
t_accVal getAccRawContinue(){
  t_accVal ret;
  ret.accX = (Wire.read() << 8 | Wire.read()) / LSB_Sensitivity_R4_2;
  ret.accY = (Wire.read() << 8 | Wire.read()) / LSB_Sensitivity_R4_2;
  ret.accZ = (Wire.read() << 8 | Wire.read()) / LSB_Sensitivity_R4_2;

  return ret;
} // ret에 채워 넣은 걸 반환하겠다

// get raw gyroscope data
t_gyroVal getGyroRawContinue(){
  t_gyroVal ret;
  ret.gyroX = (Wire.read() << 8 | Wire.read()) / 131.0;
  ret.gyroY = (Wire.read() << 8 | Wire.read()) / 131.0;
  ret.gyroZ = (Wire.read() << 8 | Wire.read()) / 131.0;

  return ret;
} // t_gyroVal는 반환 형태임
