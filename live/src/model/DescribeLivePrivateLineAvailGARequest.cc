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

#include <alibabacloud/live/model/DescribeLivePrivateLineAvailGARequest.h>

using AlibabaCloud::Live::Model::DescribeLivePrivateLineAvailGARequest;

DescribeLivePrivateLineAvailGARequest::DescribeLivePrivateLineAvailGARequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLivePrivateLineAvailGA") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLivePrivateLineAvailGARequest::~DescribeLivePrivateLineAvailGARequest() {}

std::string DescribeLivePrivateLineAvailGARequest::getAccelerationArea() const {
  return accelerationArea_;
}

void DescribeLivePrivateLineAvailGARequest::setAccelerationArea(const std::string &accelerationArea) {
  accelerationArea_ = accelerationArea;
  setParameter(std::string("AccelerationArea"), accelerationArea);
}

std::string DescribeLivePrivateLineAvailGARequest::getAppName() const {
  return appName_;
}

void DescribeLivePrivateLineAvailGARequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLivePrivateLineAvailGARequest::getRegionId() const {
  return regionId_;
}

void DescribeLivePrivateLineAvailGARequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLivePrivateLineAvailGARequest::getStreamName() const {
  return streamName_;
}

void DescribeLivePrivateLineAvailGARequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLivePrivateLineAvailGARequest::getDomainName() const {
  return domainName_;
}

void DescribeLivePrivateLineAvailGARequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeLivePrivateLineAvailGARequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLivePrivateLineAvailGARequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLivePrivateLineAvailGARequest::getVideoCenter() const {
  return videoCenter_;
}

void DescribeLivePrivateLineAvailGARequest::setVideoCenter(const std::string &videoCenter) {
  videoCenter_ = videoCenter;
  setParameter(std::string("VideoCenter"), videoCenter);
}

std::string DescribeLivePrivateLineAvailGARequest::getIsGaInstance() const {
  return isGaInstance_;
}

void DescribeLivePrivateLineAvailGARequest::setIsGaInstance(const std::string &isGaInstance) {
  isGaInstance_ = isGaInstance;
  setParameter(std::string("IsGaInstance"), isGaInstance);
}

