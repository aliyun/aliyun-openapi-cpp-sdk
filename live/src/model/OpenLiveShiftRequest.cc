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

#include <alibabacloud/live/model/OpenLiveShiftRequest.h>

using AlibabaCloud::Live::Model::OpenLiveShiftRequest;

OpenLiveShiftRequest::OpenLiveShiftRequest()
    : RpcServiceRequest("live", "2016-11-01", "OpenLiveShift") {
  setMethod(HttpRequest::Method::Post);
}

OpenLiveShiftRequest::~OpenLiveShiftRequest() {}

int OpenLiveShiftRequest::getDuration() const {
  return duration_;
}

void OpenLiveShiftRequest::setDuration(int duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), std::to_string(duration));
}

std::string OpenLiveShiftRequest::getAppName() const {
  return appName_;
}

void OpenLiveShiftRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string OpenLiveShiftRequest::getRegionId() const {
  return regionId_;
}

void OpenLiveShiftRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string OpenLiveShiftRequest::getStreamName() const {
  return streamName_;
}

void OpenLiveShiftRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

bool OpenLiveShiftRequest::getIgnoreTranscode() const {
  return ignoreTranscode_;
}

void OpenLiveShiftRequest::setIgnoreTranscode(bool ignoreTranscode) {
  ignoreTranscode_ = ignoreTranscode;
  setParameter(std::string("IgnoreTranscode"), ignoreTranscode ? "true" : "false");
}

std::string OpenLiveShiftRequest::getDomainName() const {
  return domainName_;
}

void OpenLiveShiftRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long OpenLiveShiftRequest::getOwnerId() const {
  return ownerId_;
}

void OpenLiveShiftRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int OpenLiveShiftRequest::getVision() const {
  return vision_;
}

void OpenLiveShiftRequest::setVision(int vision) {
  vision_ = vision;
  setParameter(std::string("Vision"), std::to_string(vision));
}

