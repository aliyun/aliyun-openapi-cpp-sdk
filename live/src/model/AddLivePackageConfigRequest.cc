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

#include <alibabacloud/live/model/AddLivePackageConfigRequest.h>

using AlibabaCloud::Live::Model::AddLivePackageConfigRequest;

AddLivePackageConfigRequest::AddLivePackageConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLivePackageConfig") {
  setMethod(HttpRequest::Method::Post);
}

AddLivePackageConfigRequest::~AddLivePackageConfigRequest() {}

int AddLivePackageConfigRequest::getSegmentNum() const {
  return segmentNum_;
}

void AddLivePackageConfigRequest::setSegmentNum(int segmentNum) {
  segmentNum_ = segmentNum;
  setParameter(std::string("SegmentNum"), std::to_string(segmentNum));
}

std::string AddLivePackageConfigRequest::getProtocol() const {
  return protocol_;
}

void AddLivePackageConfigRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string AddLivePackageConfigRequest::getAppName() const {
  return appName_;
}

void AddLivePackageConfigRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string AddLivePackageConfigRequest::getRegionId() const {
  return regionId_;
}

void AddLivePackageConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int AddLivePackageConfigRequest::getPartDuration() const {
  return partDuration_;
}

void AddLivePackageConfigRequest::setPartDuration(int partDuration) {
  partDuration_ = partDuration;
  setParameter(std::string("PartDuration"), std::to_string(partDuration));
}

std::string AddLivePackageConfigRequest::getStreamName() const {
  return streamName_;
}

void AddLivePackageConfigRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

bool AddLivePackageConfigRequest::getIgnoreTranscode() const {
  return ignoreTranscode_;
}

void AddLivePackageConfigRequest::setIgnoreTranscode(bool ignoreTranscode) {
  ignoreTranscode_ = ignoreTranscode;
  setParameter(std::string("IgnoreTranscode"), ignoreTranscode ? "true" : "false");
}

std::string AddLivePackageConfigRequest::getDomainName() const {
  return domainName_;
}

void AddLivePackageConfigRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddLivePackageConfigRequest::getOwnerId() const {
  return ownerId_;
}

void AddLivePackageConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddLivePackageConfigRequest::getSegmentDuration() const {
  return segmentDuration_;
}

void AddLivePackageConfigRequest::setSegmentDuration(int segmentDuration) {
  segmentDuration_ = segmentDuration;
  setParameter(std::string("SegmentDuration"), std::to_string(segmentDuration));
}

