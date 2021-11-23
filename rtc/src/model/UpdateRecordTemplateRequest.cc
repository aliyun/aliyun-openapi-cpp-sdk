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

#include <alibabacloud/rtc/model/UpdateRecordTemplateRequest.h>

using AlibabaCloud::Rtc::Model::UpdateRecordTemplateRequest;

UpdateRecordTemplateRequest::UpdateRecordTemplateRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "UpdateRecordTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRecordTemplateRequest::~UpdateRecordTemplateRequest() {}

std::vector<std::string> UpdateRecordTemplateRequest::getFormats() const {
  return formats_;
}

void UpdateRecordTemplateRequest::setFormats(const std::vector<std::string> &formats) {
  formats_ = formats;
}

std::string UpdateRecordTemplateRequest::getOssFilePrefix() const {
  return ossFilePrefix_;
}

void UpdateRecordTemplateRequest::setOssFilePrefix(const std::string &ossFilePrefix) {
  ossFilePrefix_ = ossFilePrefix;
  setParameter(std::string("OssFilePrefix"), ossFilePrefix);
}

int UpdateRecordTemplateRequest::getBackgroundColor() const {
  return backgroundColor_;
}

void UpdateRecordTemplateRequest::setBackgroundColor(int backgroundColor) {
  backgroundColor_ = backgroundColor;
  setParameter(std::string("BackgroundColor"), std::to_string(backgroundColor));
}

std::string UpdateRecordTemplateRequest::getTaskProfile() const {
  return taskProfile_;
}

void UpdateRecordTemplateRequest::setTaskProfile(const std::string &taskProfile) {
  taskProfile_ = taskProfile;
  setParameter(std::string("TaskProfile"), taskProfile);
}

std::vector<long> UpdateRecordTemplateRequest::getLayoutIds() const {
  return layoutIds_;
}

void UpdateRecordTemplateRequest::setLayoutIds(const std::vector<long> &layoutIds) {
  layoutIds_ = layoutIds;
}

std::vector<UpdateRecordTemplateRequest::ClockWidgets> UpdateRecordTemplateRequest::getClockWidgets() const {
  return clockWidgets_;
}

void UpdateRecordTemplateRequest::setClockWidgets(const std::vector<UpdateRecordTemplateRequest::ClockWidgets> &clockWidgets) {
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
  }
}

std::string UpdateRecordTemplateRequest::getShowLog() const {
  return showLog_;
}

void UpdateRecordTemplateRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::string UpdateRecordTemplateRequest::getOssBucket() const {
  return ossBucket_;
}

void UpdateRecordTemplateRequest::setOssBucket(const std::string &ossBucket) {
  ossBucket_ = ossBucket;
  setParameter(std::string("OssBucket"), ossBucket);
}

int UpdateRecordTemplateRequest::getDelayStopTime() const {
  return delayStopTime_;
}

void UpdateRecordTemplateRequest::setDelayStopTime(int delayStopTime) {
  delayStopTime_ = delayStopTime;
  setParameter(std::string("DelayStopTime"), std::to_string(delayStopTime));
}

std::string UpdateRecordTemplateRequest::getMnsQueue() const {
  return mnsQueue_;
}

void UpdateRecordTemplateRequest::setMnsQueue(const std::string &mnsQueue) {
  mnsQueue_ = mnsQueue;
  setParameter(std::string("MnsQueue"), mnsQueue);
}

int UpdateRecordTemplateRequest::getFileSplitInterval() const {
  return fileSplitInterval_;
}

void UpdateRecordTemplateRequest::setFileSplitInterval(int fileSplitInterval) {
  fileSplitInterval_ = fileSplitInterval;
  setParameter(std::string("FileSplitInterval"), std::to_string(fileSplitInterval));
}

std::string UpdateRecordTemplateRequest::getHttpCallbackUrl() const {
  return httpCallbackUrl_;
}

void UpdateRecordTemplateRequest::setHttpCallbackUrl(const std::string &httpCallbackUrl) {
  httpCallbackUrl_ = httpCallbackUrl;
  setParameter(std::string("HttpCallbackUrl"), httpCallbackUrl);
}

std::vector<UpdateRecordTemplateRequest::Watermarks> UpdateRecordTemplateRequest::getWatermarks() const {
  return watermarks_;
}

void UpdateRecordTemplateRequest::setWatermarks(const std::vector<UpdateRecordTemplateRequest::Watermarks> &watermarks) {
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

long UpdateRecordTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateRecordTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateRecordTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateRecordTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

bool UpdateRecordTemplateRequest::getEnableM3u8DateTime() const {
  return enableM3u8DateTime_;
}

void UpdateRecordTemplateRequest::setEnableM3u8DateTime(bool enableM3u8DateTime) {
  enableM3u8DateTime_ = enableM3u8DateTime;
  setParameter(std::string("EnableM3u8DateTime"), enableM3u8DateTime ? "true" : "false");
}

std::string UpdateRecordTemplateRequest::getAppId() const {
  return appId_;
}

void UpdateRecordTemplateRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::vector<UpdateRecordTemplateRequest::Backgrounds> UpdateRecordTemplateRequest::getBackgrounds() const {
  return backgrounds_;
}

void UpdateRecordTemplateRequest::setBackgrounds(const std::vector<UpdateRecordTemplateRequest::Backgrounds> &backgrounds) {
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

std::string UpdateRecordTemplateRequest::getName() const {
  return name_;
}

void UpdateRecordTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int UpdateRecordTemplateRequest::getMediaEncode() const {
  return mediaEncode_;
}

void UpdateRecordTemplateRequest::setMediaEncode(int mediaEncode) {
  mediaEncode_ = mediaEncode;
  setParameter(std::string("MediaEncode"), std::to_string(mediaEncode));
}

