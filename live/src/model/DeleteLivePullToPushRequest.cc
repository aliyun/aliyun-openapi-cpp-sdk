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

#include <alibabacloud/live/model/DeleteLivePullToPushRequest.h>

using AlibabaCloud::Live::Model::DeleteLivePullToPushRequest;

DeleteLivePullToPushRequest::DeleteLivePullToPushRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLivePullToPush") {
  setMethod(HttpRequest::Method::Get);
}

DeleteLivePullToPushRequest::~DeleteLivePullToPushRequest() {}

std::string DeleteLivePullToPushRequest::getRegionId() const {
  return regionId_;
}

void DeleteLivePullToPushRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLivePullToPushRequest::getTaskId() const {
  return taskId_;
}

void DeleteLivePullToPushRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

long DeleteLivePullToPushRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLivePullToPushRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLivePullToPushRequest::getRegion() const {
  return region_;
}

void DeleteLivePullToPushRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

