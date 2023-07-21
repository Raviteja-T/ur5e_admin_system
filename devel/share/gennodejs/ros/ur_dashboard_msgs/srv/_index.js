
"use strict";

let Popup = require('./Popup.js')
let IsProgramSaved = require('./IsProgramSaved.js')
let AddToLog = require('./AddToLog.js')
let RawRequest = require('./RawRequest.js')
let GetLoadedProgram = require('./GetLoadedProgram.js')
let IsProgramRunning = require('./IsProgramRunning.js')
let Load = require('./Load.js')
let GetSafetyMode = require('./GetSafetyMode.js')
let GetProgramState = require('./GetProgramState.js')
let IsInRemoteControl = require('./IsInRemoteControl.js')
let GetRobotMode = require('./GetRobotMode.js')

module.exports = {
  Popup: Popup,
  IsProgramSaved: IsProgramSaved,
  AddToLog: AddToLog,
  RawRequest: RawRequest,
  GetLoadedProgram: GetLoadedProgram,
  IsProgramRunning: IsProgramRunning,
  Load: Load,
  GetSafetyMode: GetSafetyMode,
  GetProgramState: GetProgramState,
  IsInRemoteControl: IsInRemoteControl,
  GetRobotMode: GetRobotMode,
};
