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

#include <alibabacloud/rtc/model/CreateRecordIndexFileRequest.h>

using AlibabaCloud::Rtc::Model::CreateRecordIndexFileRequest;

CreateRecordIndexFileRequest::CreateRecordIndexFileRequest()
    : RpcServiceRequest("rtc", "2018-01-11", "CreateRecordIndexFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateRecordIndexFileRequest::~CreateRecordIndexFileRequest() {}

std::string CreateRecordIndexFileRequest::getOssEndpoint() const {
  return ossEndpoint_;
}

void CreateRecordIndexFileRequest::setOssEndpoint(const std::string &ossEndpoint) {
  ossEndpoint_ = ossEndpoint;
  setParameter(std::string("OssEndpoint"), ossEndpoint);
}

std::string CreateRecordIndexFileRequest::getStartTime() const {
  return startTime_;
}

void CreateRecordIndexFileRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateRecordIndexFileRequest::getOssObject() const {
  return ossObject_;
}

void CreateRecordIndexFileRequest::setOssObject(const std::string &ossObject) {
  ossObject_ = ossObject;
  setParameter(std::string("OssObject"), ossObject);
}

std::string CreateRecordIndexFileRequest::getTaskId() const {
  return taskId_;
}

void CreateRecordIndexFileRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string CreateRecordIndexFileRequest::getShowLog() const {
  return showLog_;
}

void CreateRecordIndexFileRequest::setShowLog(const std::string &showLog) {
  showLog_ = showLog;
  setParameter(std::string("ShowLog"), showLog);
}

std::string CreateRecordIndexFileRequest::getOssBucket() const {
  return ossBucket_;
}

void CreateRecordIndexFileRequest::setOssBucket(const std::string &ossBucket) {
  ossBucket_ = ossBucket;
  setParameter(std::string("OssBucket"), ossBucket);
}

std::string CreateRecordIndexFileRequest::getEndTime() const {
  return endTime_;
}

void CreateRecordIndexFileRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateRecordIndexFileRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRecordIndexFileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateRecordIndexFileRequest::getAppId() const {
  return appId_;
}

void CreateRecordIndexFileRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateRecordIndexFileRequest::getChannelId() const {
  return channelId_;
}

void CreateRecordIndexFileRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

