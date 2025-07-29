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

#include <alibabacloud/live/model/UpdateLivePackageConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLivePackageConfigRequest;

UpdateLivePackageConfigRequest::UpdateLivePackageConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLivePackageConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLivePackageConfigRequest::~UpdateLivePackageConfigRequest() {}

int UpdateLivePackageConfigRequest::getSegmentNum() const {
  return segmentNum_;
}

void UpdateLivePackageConfigRequest::setSegmentNum(int segmentNum) {
  segmentNum_ = segmentNum;
  setParameter(std::string("SegmentNum"), std::to_string(segmentNum));
}

std::string UpdateLivePackageConfigRequest::getProtocol() const {
  return protocol_;
}

void UpdateLivePackageConfigRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string UpdateLivePackageConfigRequest::getAppName() const {
  return appName_;
}

void UpdateLivePackageConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string UpdateLivePackageConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateLivePackageConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdateLivePackageConfigRequest::getPartDuration() const {
  return partDuration_;
}

void UpdateLivePackageConfigRequest::setPartDuration(int partDuration) {
  partDuration_ = partDuration;
  setParameter(std::string("PartDuration"), std::to_string(partDuration));
}

std::string UpdateLivePackageConfigRequest::getStreamName() const {
  return streamName_;
}

void UpdateLivePackageConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

bool UpdateLivePackageConfigRequest::getIgnoreTranscode() const {
  return ignoreTranscode_;
}

void UpdateLivePackageConfigRequest::setIgnoreTranscode(bool ignoreTranscode) {
  ignoreTranscode_ = ignoreTranscode;
  setParameter(std::string("IgnoreTranscode"), ignoreTranscode ? "true" : "false");
}

std::string UpdateLivePackageConfigRequest::getDomainName() const {
  return domainName_;
}

void UpdateLivePackageConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long UpdateLivePackageConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLivePackageConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int UpdateLivePackageConfigRequest::getSegmentDuration() const {
  return segmentDuration_;
}

void UpdateLivePackageConfigRequest::setSegmentDuration(int segmentDuration) {
  segmentDuration_ = segmentDuration;
  setParameter(std::string("SegmentDuration"), std::to_string(segmentDuration));
}

