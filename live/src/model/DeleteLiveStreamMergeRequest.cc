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

#include <alibabacloud/live/model/DeleteLiveStreamMergeRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveStreamMergeRequest;

DeleteLiveStreamMergeRequest::DeleteLiveStreamMergeRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveStreamMerge") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveStreamMergeRequest::~DeleteLiveStreamMergeRequest() {}

std::string DeleteLiveStreamMergeRequest::getAppName() const {
  return appName_;
}

void DeleteLiveStreamMergeRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DeleteLiveStreamMergeRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveStreamMergeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLiveStreamMergeRequest::getStreamName() const {
  return streamName_;
}

void DeleteLiveStreamMergeRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DeleteLiveStreamMergeRequest::getDomainName() const {
  return domainName_;
}

void DeleteLiveStreamMergeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteLiveStreamMergeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveStreamMergeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

