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

#include <alibabacloud/live/model/StopLivePullToPushRequest.h>

using AlibabaCloud::Live::Model::StopLivePullToPushRequest;

StopLivePullToPushRequest::StopLivePullToPushRequest()
    : RpcServiceRequest("live", "2016-11-01", "StopLivePullToPush") {
  setMethod(HttpRequest::Method::Get);
}

StopLivePullToPushRequest::~StopLivePullToPushRequest() {}

std::string StopLivePullToPushRequest::getRegionId() const {
  return regionId_;
}

void StopLivePullToPushRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopLivePullToPushRequest::getTaskId() const {
  return taskId_;
}

void StopLivePullToPushRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

long StopLivePullToPushRequest::getOwnerId() const {
  return ownerId_;
}

void StopLivePullToPushRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StopLivePullToPushRequest::getRegion() const {
  return region_;
}

void StopLivePullToPushRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

