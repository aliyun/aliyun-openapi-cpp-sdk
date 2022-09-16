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

#include <alibabacloud/ecd/model/UpdateFotaTaskRequest.h>

using AlibabaCloud::Ecd::Model::UpdateFotaTaskRequest;

UpdateFotaTaskRequest::UpdateFotaTaskRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "UpdateFotaTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFotaTaskRequest::~UpdateFotaTaskRequest() {}

std::string UpdateFotaTaskRequest::getUserStatus() const {
  return userStatus_;
}

void UpdateFotaTaskRequest::setUserStatus(const std::string &userStatus) {
  userStatus_ = userStatus;
  setParameter(std::string("UserStatus"), userStatus);
}

std::string UpdateFotaTaskRequest::getTaskUid() const {
  return taskUid_;
}

void UpdateFotaTaskRequest::setTaskUid(const std::string &taskUid) {
  taskUid_ = taskUid;
  setParameter(std::string("TaskUid"), taskUid);
}

std::string UpdateFotaTaskRequest::getRegionId() const {
  return regionId_;
}

void UpdateFotaTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

