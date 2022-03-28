/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/rtc/model/UpdateMPUTaskRequest.h>

using AlibabaCloud::Rtc::Model::UpdateMPUTaskRequest;

UpdateMPUTaskRequest::UpdateMPUTaskRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "UpdateMPUTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMPUTaskRequest::~UpdateMPUTaskRequest() {}

std::vector<UpdateMPUTaskRequest::UserPanes> UpdateMPUTaskRequest::getUserPanes() const {
  return userPanes_;
}

void UpdateMPUTaskRequest::setUserPanes(const std::vector<UpdateMPUTaskRequest::UserPanes> &userPanes) {
  userPanes_ = userPanes;
  for(int dep1 = 0; dep1 != userPanes.size(); dep1++) {
  auto userPanesObj = userPanes.at(dep1);
  std::string userPanesObjStr = std::string("UserPanes") + "." + std::to_string(dep1 + 1);
    for(int dep2 = 0; dep2 != userPanesObj.images.size(); dep2++) {
    auto imagesObj = userPanesObj.images.at(dep2);
    std::string imagesObjStr = userPanesObjStr + ".Images" + "." + std::to_string(dep2 + 1);
      setParameter(imagesObjStr + ".Width", std::to_string(imagesObj.width));
      setParameter(imagesObjStr + ".Height", std::to_string(imagesObj.height));
      setParameter(imagesObjStr + ".Y", std::to_string(imagesObj.y));
      setParameter(imagesObjStr + ".Url", imagesObj.url);
      setParameter(imagesObjStr + ".Display", std::to_string(imagesObj.display));
      setParameter(imagesObjStr + ".ZOrder", std::to_string(imagesObj.zOrder));
      setParameter(imagesObjStr + ".X", std::to_string(imagesObj.x));
    }
    setParameter(userPanesObjStr + ".SegmentType", std::to_string(userPanesObj.segmentType));
    setParameter(userPanesObjStr + ".UserId", userPanesObj.userId);
    for(int dep2 = 0; dep2 != userPanesObj.texts.size(); dep2++) {
    auto textsObj = userPanesObj.texts.at(dep2);
    std::string textsObjStr = userPanesObjStr + ".Texts" + "." + std::to_string(dep2 + 1);
      setParameter(textsObjStr + ".FontType", std::to_string(textsObj.fontType));
      setParameter(textsObjStr + ".FontColor", std::to_string(textsObj.fontColor));
      setParameter(textsObjStr + ".Y", std::to_string(textsObj.y));
      setParameter(textsObjStr + ".Text", textsObj.text);
      setParameter(textsObjStr + ".ZOrder", std::to_string(textsObj.zOrder));
      setParameter(textsObjStr + ".X", std::to_string(textsObj.x));
      setParameter(textsObjStr + ".FontSize", std::to_string(textsObj.fontSize));
      setParameter(textsObjStr + ".BorderWidth", std::to_string(textsObj.borderWidth));
      setParameter(textsObjStr + ".BorderColor", std::to_string(textsObj.borderColor));
      setParameter(textsObjStr + ".Box", textsObj.box ? "true" : "false");
      setParameter(textsObjStr + ".BoxColor", std::to_string(textsObj.boxColor));
      setParameter(textsObjStr + ".BoxBorderWidth", std::to_string(textsObj.boxBorderWidth));
      setParameter(textsObjStr + ".Alpha", std::to_string(textsObj.alpha));
    }
    setParameter(userPanesObjStr + ".SourceType", userPanesObj.sourceType);
    setParameter(userPanesObjStr + ".PaneId", std::to_string(userPanesObj.paneId));
  }
}

int UpdateMPUTaskRequest::getBackgroundColor() const {
  return backgroundColor_;
}

void UpdateMPUTaskRequest::setBackgroundColor(int backgroundColor) {
  backgroundColor_ = backgroundColor;
  setParameter(std::string("BackgroundColor"), std::to_string(backgroundColor));
}

std::string UpdateMPUTaskRequest::getSourceType() const {
  return sourceType_;
}

void UpdateMPUTaskRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string UpdateMPUTaskRequest::getTaskId() const {
  return taskId_;
}

void UpdateMPUTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::vector<UpdateMPUTaskRequest::ClockWidgets> UpdateMPUTaskRequest::getClockWidgets() const {
  return clockWidgets_;
}

void UpdateMPUTaskRequest::setClockWidgets(const std::vector<UpdateMPUTaskRequest::ClockWidgets> &clockWidgets) {
  clockWidgets_ = clockWidgets;
  for(int dep1 = 0; dep1 != clockWidgets.size(); dep1++) {
  auto clockWidgetsObj = clockWidgets.at(dep1);
  std::string clockWidgetsObjStr = std::string("ClockWidgets") + "." + std::to_string(dep1 + 1);
    setParameter(clockWidgetsObjStr + ".FontType", std::to_string(clockWidgetsObj.fontType));
    setParameter(clockWidgetsObjStr + ".FontColor", std::to_string(clockWidgetsObj.fontColor));
    setParameter(clockWidgetsObjStr + ".Y", std::to_string(clockWidgetsObj.y));
    setParameter(clockWidgetsObjStr + ".ZOrder", std::to_string(clockWidgetsObj.zOrder));
    setParameter(clockWidgetsObjStr + ".X", std::to_string(clockWidgetsObj.x));
    setParameter(clockWidgetsObjStr + ".FontSize", std::to_string(clockWidgetsObj.fontSize));
    setParameter(clockWidgetsObjStr + ".BorderWidth", std::to_string(clockWidgetsObj.borderWidth));
    setParameter(clockWidgetsObjStr + ".BorderColor", std::to_string(clockWidgetsObj.borderColor));
    setParameter(clockWidgetsObjStr + ".Box", clockWidgetsObj.box ? "true" : "false");
    setParameter(clockWidgetsObjStr + ".BoxColor", std::to_string(clockWidgetsObj.boxColor));
    setParameter(clockWidgetsObjStr + ".BoxBorderWidth", std::to_string(clockWidgetsObj.boxBorderWidth));
    setParameter(clockWidgetsObjStr + ".Alpha", std::to_string(clockWidgetsObj.alpha));
  }
}

std::string UpdateMPUTaskRequest::getShowLog() const {
  return showLog_;
}

void UpdateMPUTaskRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::vector<std::string> UpdateMPUTaskRequest::getUnsubSpecCameraUsers() const {
  return unsubSpecCameraUsers_;
}

void UpdateMPUTaskRequest::setUnsubSpecCameraUsers(const std::vector<std::string> &unsubSpecCameraUsers) {
  unsubSpecCameraUsers_ = unsubSpecCameraUsers;
}

std::vector<std::string> UpdateMPUTaskRequest::getUnsubSpecAudioUsers() const {
  return unsubSpecAudioUsers_;
}

void UpdateMPUTaskRequest::setUnsubSpecAudioUsers(const std::vector<std::string> &unsubSpecAudioUsers) {
  unsubSpecAudioUsers_ = unsubSpecAudioUsers;
}

std::vector<UpdateMPUTaskRequest::Watermarks> UpdateMPUTaskRequest::getWatermarks() const {
  return watermarks_;
}

void UpdateMPUTaskRequest::setWatermarks(const std::vector<UpdateMPUTaskRequest::Watermarks> &watermarks) {
  watermarks_ = watermarks;
  for(int dep1 = 0; dep1 != watermarks.size(); dep1++) {
  auto watermarksObj = watermarks.at(dep1);
  std::string watermarksObjStr = std::string("Watermarks") + "." + std::to_string(dep1 + 1);
    setParameter(watermarksObjStr + ".Alpha", std::to_string(watermarksObj.alpha));
    setParameter(watermarksObjStr + ".Width", std::to_string(watermarksObj.width));
    setParameter(watermarksObjStr + ".Height", std::to_string(watermarksObj.height));
    setParameter(watermarksObjStr + ".Y", std::to_string(watermarksObj.y));
    setParameter(watermarksObjStr + ".Url", watermarksObj.url);
    setParameter(watermarksObjStr + ".Display", std::to_string(watermarksObj.display));
    setParameter(watermarksObjStr + ".ZOrder", std::to_string(watermarksObj.zOrder));
    setParameter(watermarksObjStr + ".X", std::to_string(watermarksObj.x));
  }
}

long UpdateMPUTaskRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMPUTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> UpdateMPUTaskRequest::getSubSpecAudioUsers() const {
  return subSpecAudioUsers_;
}

void UpdateMPUTaskRequest::setSubSpecAudioUsers(const std::vector<std::string> &subSpecAudioUsers) {
  subSpecAudioUsers_ = subSpecAudioUsers;
}

int UpdateMPUTaskRequest::getMediaEncode() const {
  return mediaEncode_;
}

void UpdateMPUTaskRequest::setMediaEncode(int mediaEncode) {
  mediaEncode_ = mediaEncode;
  setParameter(std::string("MediaEncode"), std::to_string(mediaEncode));
}

UpdateMPUTaskRequest::EnhancedParam UpdateMPUTaskRequest::getEnhancedParam() const {
  return enhancedParam_;
}

void UpdateMPUTaskRequest::setEnhancedParam(const UpdateMPUTaskRequest::EnhancedParam &enhancedParam) {
  enhancedParam_ = enhancedParam;
  setBodyParameter(std::string("EnhancedParam") + ".EnablePortraitSegmentation", enhancedParam.enablePortraitSegmentation ? "true" : "false");
  setBodyParameter(std::string("EnhancedParam") + ".EnableVirtualConference", enhancedParam.enableVirtualConference ? "true" : "false");
  setBodyParameter(std::string("EnhancedParam") + ".EnableCartoonPortrait", enhancedParam.enableCartoonPortrait ? "true" : "false");
  setBodyParameter(std::string("EnhancedParam") + ".EnableVoiceChanger", enhancedParam.enableVoiceChanger ? "true" : "false");
  setBodyParameter(std::string("EnhancedParam") + ".EnableUserPaneBackground", enhancedParam.enableUserPaneBackground ? "true" : "false");
  setBodyParameter(std::string("EnhancedParam") + ".BackgroundPath", enhancedParam.backgroundPath);
}

int UpdateMPUTaskRequest::getCropMode() const {
  return cropMode_;
}

void UpdateMPUTaskRequest::setCropMode(int cropMode) {
  cropMode_ = cropMode;
  setParameter(std::string("CropMode"), std::to_string(cropMode));
}

std::vector<std::string> UpdateMPUTaskRequest::getSubSpecCameraUsers() const {
  return subSpecCameraUsers_;
}

void UpdateMPUTaskRequest::setSubSpecCameraUsers(const std::vector<std::string> &subSpecCameraUsers) {
  subSpecCameraUsers_ = subSpecCameraUsers;
}

std::string UpdateMPUTaskRequest::getTaskProfile() const {
  return taskProfile_;
}

void UpdateMPUTaskRequest::setTaskProfile(const std::string &taskProfile) {
  taskProfile_ = taskProfile;
  setParameter(std::string("TaskProfile"), taskProfile);
}

std::vector<long> UpdateMPUTaskRequest::getLayoutIds() const {
  return layoutIds_;
}

void UpdateMPUTaskRequest::setLayoutIds(const std::vector<long> &layoutIds) {
  layoutIds_ = layoutIds;
}

int UpdateMPUTaskRequest::getStreamType() const {
  return streamType_;
}

void UpdateMPUTaskRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::vector<std::string> UpdateMPUTaskRequest::getUnsubSpecShareScreenUsers() const {
  return unsubSpecShareScreenUsers_;
}

void UpdateMPUTaskRequest::setUnsubSpecShareScreenUsers(const std::vector<std::string> &unsubSpecShareScreenUsers) {
  unsubSpecShareScreenUsers_ = unsubSpecShareScreenUsers;
}

std::vector<std::string> UpdateMPUTaskRequest::getSubSpecShareScreenUsers() const {
  return subSpecShareScreenUsers_;
}

void UpdateMPUTaskRequest::setSubSpecShareScreenUsers(const std::vector<std::string> &subSpecShareScreenUsers) {
  subSpecShareScreenUsers_ = subSpecShareScreenUsers;
}

std::vector<std::string> UpdateMPUTaskRequest::getSubSpecUsers() const {
  return subSpecUsers_;
}

void UpdateMPUTaskRequest::setSubSpecUsers(const std::vector<std::string> &subSpecUsers) {
  subSpecUsers_ = subSpecUsers;
}

std::string UpdateMPUTaskRequest::getAppId() const {
  return appId_;
}

void UpdateMPUTaskRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::vector<UpdateMPUTaskRequest::Backgrounds> UpdateMPUTaskRequest::getBackgrounds() const {
  return backgrounds_;
}

void UpdateMPUTaskRequest::setBackgrounds(const std::vector<UpdateMPUTaskRequest::Backgrounds> &backgrounds) {
  backgrounds_ = backgrounds;
  for(int dep1 = 0; dep1 != backgrounds.size(); dep1++) {
  auto backgroundsObj = backgrounds.at(dep1);
  std::string backgroundsObjStr = std::string("Backgrounds") + "." + std::to_string(dep1 + 1);
    setParameter(backgroundsObjStr + ".Width", std::to_string(backgroundsObj.width));
    setParameter(backgroundsObjStr + ".Height", std::to_string(backgroundsObj.height));
    setParameter(backgroundsObjStr + ".Y", std::to_string(backgroundsObj.y));
    setParameter(backgroundsObjStr + ".Url", backgroundsObj.url);
    setParameter(backgroundsObjStr + ".Display", std::to_string(backgroundsObj.display));
    setParameter(backgroundsObjStr + ".ZOrder", std::to_string(backgroundsObj.zOrder));
    setParameter(backgroundsObjStr + ".X", std::to_string(backgroundsObj.x));
  }
}

int UpdateMPUTaskRequest::getMixMode() const {
  return mixMode_;
}

void UpdateMPUTaskRequest::setMixMode(int mixMode) {
  mixMode_ = mixMode;
  setParameter(std::string("MixMode"), std::to_string(mixMode));
}

