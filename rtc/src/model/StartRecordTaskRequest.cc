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

#include <alibabacloud/rtc/model/StartRecordTaskRequest.h>

using AlibabaCloud::Rtc::Model::StartRecordTaskRequest;

StartRecordTaskRequest::StartRecordTaskRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "StartRecordTask") {
  setMethod(HttpRequest::Method::Post);
}

StartRecordTaskRequest::~StartRecordTaskRequest() {}

std::vector<StartRecordTaskRequest::UserPanes> StartRecordTaskRequest::getUserPanes() const {
  return userPanes_;
}

void StartRecordTaskRequest::setUserPanes(const std::vector<StartRecordTaskRequest::UserPanes> &userPanes) {
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
    }
    setParameter(userPanesObjStr + ".SourceType", userPanesObj.sourceType);
    setParameter(userPanesObjStr + ".PaneId", std::to_string(userPanesObj.paneId));
  }
}

long StartRecordTaskRequest::getCropMode() const {
  return cropMode_;
}

void StartRecordTaskRequest::setCropMode(long cropMode) {
  cropMode_ = cropMode;
  setParameter(std::string("CropMode"), std::to_string(cropMode));
}

std::vector<std::string> StartRecordTaskRequest::getSubSpecCameraUsers() const {
  return subSpecCameraUsers_;
}

void StartRecordTaskRequest::setSubSpecCameraUsers(const std::vector<std::string> &subSpecCameraUsers) {
  subSpecCameraUsers_ = subSpecCameraUsers;
}

std::string StartRecordTaskRequest::getSourceType() const {
  return sourceType_;
}

void StartRecordTaskRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string StartRecordTaskRequest::getTaskProfile() const {
  return taskProfile_;
}

void StartRecordTaskRequest::setTaskProfile(const std::string &taskProfile) {
  taskProfile_ = taskProfile;
  setParameter(std::string("TaskProfile"), taskProfile);
}

std::vector<long> StartRecordTaskRequest::getLayoutIds() const {
  return layoutIds_;
}

void StartRecordTaskRequest::setLayoutIds(const std::vector<long> &layoutIds) {
  layoutIds_ = layoutIds;
}

std::string StartRecordTaskRequest::getTaskId() const {
  return taskId_;
}

void StartRecordTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string StartRecordTaskRequest::getShowLog() const {
  return showLog_;
}

void StartRecordTaskRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::vector<std::string> StartRecordTaskRequest::getUnsubSpecCameraUsers() const {
  return unsubSpecCameraUsers_;
}

void StartRecordTaskRequest::setUnsubSpecCameraUsers(const std::vector<std::string> &unsubSpecCameraUsers) {
  unsubSpecCameraUsers_ = unsubSpecCameraUsers;
}

int StartRecordTaskRequest::getStreamType() const {
  return streamType_;
}

void StartRecordTaskRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::vector<std::string> StartRecordTaskRequest::getUnsubSpecAudioUsers() const {
  return unsubSpecAudioUsers_;
}

void StartRecordTaskRequest::setUnsubSpecAudioUsers(const std::vector<std::string> &unsubSpecAudioUsers) {
  unsubSpecAudioUsers_ = unsubSpecAudioUsers;
}

std::vector<std::string> StartRecordTaskRequest::getUnsubSpecShareScreenUsers() const {
  return unsubSpecShareScreenUsers_;
}

void StartRecordTaskRequest::setUnsubSpecShareScreenUsers(const std::vector<std::string> &unsubSpecShareScreenUsers) {
  unsubSpecShareScreenUsers_ = unsubSpecShareScreenUsers;
}

long StartRecordTaskRequest::getOwnerId() const {
  return ownerId_;
}

void StartRecordTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StartRecordTaskRequest::getTemplateId() const {
  return templateId_;
}

void StartRecordTaskRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::vector<std::string> StartRecordTaskRequest::getSubSpecAudioUsers() const {
  return subSpecAudioUsers_;
}

void StartRecordTaskRequest::setSubSpecAudioUsers(const std::vector<std::string> &subSpecAudioUsers) {
  subSpecAudioUsers_ = subSpecAudioUsers;
}

std::vector<std::string> StartRecordTaskRequest::getSubSpecShareScreenUsers() const {
  return subSpecShareScreenUsers_;
}

void StartRecordTaskRequest::setSubSpecShareScreenUsers(const std::vector<std::string> &subSpecShareScreenUsers) {
  subSpecShareScreenUsers_ = subSpecShareScreenUsers;
}

std::vector<std::string> StartRecordTaskRequest::getSubSpecUsers() const {
  return subSpecUsers_;
}

void StartRecordTaskRequest::setSubSpecUsers(const std::vector<std::string> &subSpecUsers) {
  subSpecUsers_ = subSpecUsers;
}

std::string StartRecordTaskRequest::getAppId() const {
  return appId_;
}

void StartRecordTaskRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int StartRecordTaskRequest::getMediaEncode() const {
  return mediaEncode_;
}

void StartRecordTaskRequest::setMediaEncode(int mediaEncode) {
  mediaEncode_ = mediaEncode;
  setParameter(std::string("MediaEncode"), std::to_string(mediaEncode));
}

int StartRecordTaskRequest::getMixMode() const {
  return mixMode_;
}

void StartRecordTaskRequest::setMixMode(int mixMode) {
  mixMode_ = mixMode;
  setParameter(std::string("MixMode"), std::to_string(mixMode));
}

std::string StartRecordTaskRequest::getChannelId() const {
  return channelId_;
}

void StartRecordTaskRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

