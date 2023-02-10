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

#include <alibabacloud/live/model/CreateLiveStreamRecordIndexFilesRequest.h>

using AlibabaCloud::Live::Model::CreateLiveStreamRecordIndexFilesRequest;

CreateLiveStreamRecordIndexFilesRequest::CreateLiveStreamRecordIndexFilesRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLiveStreamRecordIndexFiles") {
  setMethod(HttpRequest::Method::Post);
}

CreateLiveStreamRecordIndexFilesRequest::~CreateLiveStreamRecordIndexFilesRequest() {}

std::string CreateLiveStreamRecordIndexFilesRequest::getOssEndpoint() const {
  return ossEndpoint_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOssEndpoint(const std::string &ossEndpoint) {
  ossEndpoint_ = ossEndpoint;
  setParameter(std::string("OssEndpoint"), ossEndpoint);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getStartTime() const {
  return startTime_;
}

void CreateLiveStreamRecordIndexFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getOssObject() const {
  return ossObject_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOssObject(const std::string &ossObject) {
  ossObject_ = ossObject;
  setParameter(std::string("OssObject"), ossObject);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getAppName() const {
  return appName_;
}

void CreateLiveStreamRecordIndexFilesRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateLiveStreamRecordIndexFilesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool CreateLiveStreamRecordIndexFilesRequest::getEndTimeIncluded() const {
  return endTimeIncluded_;
}

void CreateLiveStreamRecordIndexFilesRequest::setEndTimeIncluded(bool endTimeIncluded) {
  endTimeIncluded_ = endTimeIncluded;
  setParameter(std::string("EndTimeIncluded"), endTimeIncluded ? "true" : "false");
}

std::string CreateLiveStreamRecordIndexFilesRequest::getStreamName() const {
  return streamName_;
}

void CreateLiveStreamRecordIndexFilesRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getOssBucket() const {
  return ossBucket_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOssBucket(const std::string &ossBucket) {
  ossBucket_ = ossBucket;
  setParameter(std::string("OssBucket"), ossBucket);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getDomainName() const {
  return domainName_;
}

void CreateLiveStreamRecordIndexFilesRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getEndTime() const {
  return endTime_;
}

void CreateLiveStreamRecordIndexFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateLiveStreamRecordIndexFilesRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

