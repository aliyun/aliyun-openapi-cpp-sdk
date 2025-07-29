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

#include <alibabacloud/live/model/DeleteLiveStreamBlockRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveStreamBlockRequest;

DeleteLiveStreamBlockRequest::DeleteLiveStreamBlockRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveStreamBlock") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveStreamBlockRequest::~DeleteLiveStreamBlockRequest() {}

std::string DeleteLiveStreamBlockRequest::getAppName() const {
  return appName_;
}

void DeleteLiveStreamBlockRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteLiveStreamBlockRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveStreamBlockRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLiveStreamBlockRequest::getStreamName() const {
  return streamName_;
}

void DeleteLiveStreamBlockRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DeleteLiveStreamBlockRequest::getDomainName() const {
  return domainName_;
}

void DeleteLiveStreamBlockRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteLiveStreamBlockRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveStreamBlockRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

