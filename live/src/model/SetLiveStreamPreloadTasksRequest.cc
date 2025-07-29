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

#include <alibabacloud/live/model/SetLiveStreamPreloadTasksRequest.h>

using AlibabaCloud::Live::Model::SetLiveStreamPreloadTasksRequest;

SetLiveStreamPreloadTasksRequest::SetLiveStreamPreloadTasksRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveStreamPreloadTasks") {
  setMethod(HttpRequest::Method::Post);
}

SetLiveStreamPreloadTasksRequest::~SetLiveStreamPreloadTasksRequest() {}

std::string SetLiveStreamPreloadTasksRequest::getRegionId() const {
  return regionId_;
}

void SetLiveStreamPreloadTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLiveStreamPreloadTasksRequest::getPreloadedStartTime() const {
  return preloadedStartTime_;
}

void SetLiveStreamPreloadTasksRequest::setPreloadedStartTime(const std::string &preloadedStartTime) {
  preloadedStartTime_ = preloadedStartTime;
  setParameter(std::string("PreloadedStartTime"), preloadedStartTime);
}

std::string SetLiveStreamPreloadTasksRequest::getArea() const {
  return area_;
}

void SetLiveStreamPreloadTasksRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string SetLiveStreamPreloadTasksRequest::getPreloadedEndTime() const {
  return preloadedEndTime_;
}

void SetLiveStreamPreloadTasksRequest::setPreloadedEndTime(const std::string &preloadedEndTime) {
  preloadedEndTime_ = preloadedEndTime;
  setParameter(std::string("PreloadedEndTime"), preloadedEndTime);
}

std::string SetLiveStreamPreloadTasksRequest::getDomainName() const {
  return domainName_;
}

void SetLiveStreamPreloadTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetLiveStreamPreloadTasksRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveStreamPreloadTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLiveStreamPreloadTasksRequest::getPlayUrl() const {
  return playUrl_;
}

void SetLiveStreamPreloadTasksRequest::setPlayUrl(const std::string &playUrl) {
  playUrl_ = playUrl;
  setParameter(std::string("PlayUrl"), playUrl);
}

