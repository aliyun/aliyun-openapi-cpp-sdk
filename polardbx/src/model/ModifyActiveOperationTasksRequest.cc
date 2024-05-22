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

#include <alibabacloud/polardbx/model/ModifyActiveOperationTasksRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyActiveOperationTasksRequest;

ModifyActiveOperationTasksRequest::ModifyActiveOperationTasksRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyActiveOperationTasks") {
  setMethod(HttpRequest::Method::Post);
}

ModifyActiveOperationTasksRequest::~ModifyActiveOperationTasksRequest() {}

std::string ModifyActiveOperationTasksRequest::getRegionId() const {
  return regionId_;
}

void ModifyActiveOperationTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyActiveOperationTasksRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyActiveOperationTasksRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyActiveOperationTasksRequest::getIds() const {
  return ids_;
}

void ModifyActiveOperationTasksRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

long ModifyActiveOperationTasksRequest::getImmediateStart() const {
  return immediateStart_;
}

void ModifyActiveOperationTasksRequest::setImmediateStart(long immediateStart) {
  immediateStart_ = immediateStart;
  setParameter(std::string("ImmediateStart"), std::to_string(immediateStart));
}

