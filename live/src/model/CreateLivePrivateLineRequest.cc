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

#include <alibabacloud/live/model/CreateLivePrivateLineRequest.h>

using AlibabaCloud::Live::Model::CreateLivePrivateLineRequest;

CreateLivePrivateLineRequest::CreateLivePrivateLineRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateLivePrivateLine") {
  setMethod(HttpRequest::Method::Post);
}

CreateLivePrivateLineRequest::~CreateLivePrivateLineRequest() {}

std::string CreateLivePrivateLineRequest::getMaxBandwidth() const {
  return maxBandwidth_;
}

void CreateLivePrivateLineRequest::setMaxBandwidth(const std::string &maxBandwidth) {
  maxBandwidth_ = maxBandwidth;
  setParameter(std::string("MaxBandwidth"), maxBandwidth);
}

std::string CreateLivePrivateLineRequest::getReuse() const {
  return reuse_;
}

void CreateLivePrivateLineRequest::setReuse(const std::string &reuse) {
  reuse_ = reuse;
  setParameter(std::string("Reuse"), reuse);
}

std::string CreateLivePrivateLineRequest::getAccelerationArea() const {
  return accelerationArea_;
}

void CreateLivePrivateLineRequest::setAccelerationArea(const std::string &accelerationArea) {
  accelerationArea_ = accelerationArea;
  setParameter(std::string("AccelerationArea"), accelerationArea);
}

std::string CreateLivePrivateLineRequest::getAppName() const {
  return appName_;
}

void CreateLivePrivateLineRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateLivePrivateLineRequest::getRegionId() const {
  return regionId_;
}

void CreateLivePrivateLineRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLivePrivateLineRequest::getStreamName() const {
  return streamName_;
}

void CreateLivePrivateLineRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string CreateLivePrivateLineRequest::getDomainName() const {
  return domainName_;
}

void CreateLivePrivateLineRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long CreateLivePrivateLineRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLivePrivateLineRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLivePrivateLineRequest::getVideoCenter() const {
  return videoCenter_;
}

void CreateLivePrivateLineRequest::setVideoCenter(const std::string &videoCenter) {
  videoCenter_ = videoCenter;
  setParameter(std::string("VideoCenter"), videoCenter);
}

std::string CreateLivePrivateLineRequest::getAccelerationType() const {
  return accelerationType_;
}

void CreateLivePrivateLineRequest::setAccelerationType(const std::string &accelerationType) {
  accelerationType_ = accelerationType;
  setParameter(std::string("AccelerationType"), accelerationType);
}

std::string CreateLivePrivateLineRequest::getInstanceId() const {
  return instanceId_;
}

void CreateLivePrivateLineRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

