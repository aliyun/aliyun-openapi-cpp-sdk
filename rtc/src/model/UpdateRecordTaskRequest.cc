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

#include <alibabacloud/rtc/model/UpdateRecordTaskRequest.h>

using AlibabaCloud::Rtc::Model::UpdateRecordTaskRequest;

UpdateRecordTaskRequest::UpdateRecordTaskRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "UpdateRecordTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRecordTaskRequest::~UpdateRecordTaskRequest() {}

std::vector<UpdateRecordTaskRequest::UserPanes> UpdateRecordTaskRequest::getUserPanes() const {
  return userPanes_;
}

void UpdateRecordTaskRequest::setUserPanes(const std::vector<UpdateRecordTaskRequest::UserPanes> &userPanes) {
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

std::vector<std::string> UpdateRecordTaskRequest::getSubSpecCameraUsers() const {
  return subSpecCameraUsers_;
}

void UpdateRecordTaskRequest::setSubSpecCameraUsers(const std::vector<std::string> &subSpecCameraUsers) {
  subSpecCameraUsers_ = subSpecCameraUsers;
}

std::vector<long> UpdateRecordTaskRequest::getLayoutIds() const {
  return layoutIds_;
}

void UpdateRecordTaskRequest::setLayoutIds(const std::vector<long> &layoutIds) {
  layoutIds_ = layoutIds;
}

std::string UpdateRecordTaskRequest::getTaskId() const {
  return taskId_;
}

void UpdateRecordTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string UpdateRecordTaskRequest::getShowLog() const {
  return showLog_;
}

void UpdateRecordTaskRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::vector<std::string> UpdateRecordTaskRequest::getUnsubSpecCameraUsers() const {
  return unsubSpecCameraUsers_;
}

void UpdateRecordTaskRequest::setUnsubSpecCameraUsers(const std::vector<std::string> &unsubSpecCameraUsers) {
  unsubSpecCameraUsers_ = unsubSpecCameraUsers;
}

std::vector<std::string> UpdateRecordTaskRequest::getUnsubSpecAudioUsers() const {
  return unsubSpecAudioUsers_;
}

void UpdateRecordTaskRequest::setUnsubSpecAudioUsers(const std::vector<std::string> &unsubSpecAudioUsers) {
  unsubSpecAudioUsers_ = unsubSpecAudioUsers;
}

std::vector<std::string> UpdateRecordTaskRequest::getUnsubSpecShareScreenUsers() const {
  return unsubSpecShareScreenUsers_;
}

void UpdateRecordTaskRequest::setUnsubSpecShareScreenUsers(const std::vector<std::string> &unsubSpecShareScreenUsers) {
  unsubSpecShareScreenUsers_ = unsubSpecShareScreenUsers;
}

long UpdateRecordTaskRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateRecordTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateRecordTaskRequest::getTemplateId() const {
  return templateId_;
}

void UpdateRecordTaskRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::vector<std::string> UpdateRecordTaskRequest::getSubSpecAudioUsers() const {
  return subSpecAudioUsers_;
}

void UpdateRecordTaskRequest::setSubSpecAudioUsers(const std::vector<std::string> &subSpecAudioUsers) {
  subSpecAudioUsers_ = subSpecAudioUsers;
}

std::vector<std::string> UpdateRecordTaskRequest::getSubSpecShareScreenUsers() const {
  return subSpecShareScreenUsers_;
}

void UpdateRecordTaskRequest::setSubSpecShareScreenUsers(const std::vector<std::string> &subSpecShareScreenUsers) {
  subSpecShareScreenUsers_ = subSpecShareScreenUsers;
}

std::vector<std::string> UpdateRecordTaskRequest::getSubSpecUsers() const {
  return subSpecUsers_;
}

void UpdateRecordTaskRequest::setSubSpecUsers(const std::vector<std::string> &subSpecUsers) {
  subSpecUsers_ = subSpecUsers;
}

std::string UpdateRecordTaskRequest::getAppId() const {
  return appId_;
}

void UpdateRecordTaskRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string UpdateRecordTaskRequest::getChannelId() const {
  return channelId_;
}

void UpdateRecordTaskRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

