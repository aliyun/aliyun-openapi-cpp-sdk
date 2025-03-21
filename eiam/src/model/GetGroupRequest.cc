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

#include <alibabacloud/eiam/model/GetGroupRequest.h>

using AlibabaCloud::Eiam::Model::GetGroupRequest;

GetGroupRequest::GetGroupRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "GetGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetGroupRequest::~GetGroupRequest() {}

std::string GetGroupRequest::getGroupId() const {
  return groupId_;
}

void GetGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string GetGroupRequest::getInstanceId() const {
  return instanceId_;
}

void GetGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

