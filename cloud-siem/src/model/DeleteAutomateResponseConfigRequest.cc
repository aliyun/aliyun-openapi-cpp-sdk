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

#include <alibabacloud/cloud-siem/model/DeleteAutomateResponseConfigRequest.h>

using AlibabaCloud::Cloud_siem::Model::DeleteAutomateResponseConfigRequest;

DeleteAutomateResponseConfigRequest::DeleteAutomateResponseConfigRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DeleteAutomateResponseConfig") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAutomateResponseConfigRequest::~DeleteAutomateResponseConfigRequest() {}

long DeleteAutomateResponseConfigRequest::getRoleFor() const {
  return roleFor_;
}

void DeleteAutomateResponseConfigRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DeleteAutomateResponseConfigRequest::getRegionId() const {
  return regionId_;
}

void DeleteAutomateResponseConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DeleteAutomateResponseConfigRequest::getRoleType() const {
  return roleType_;
}

void DeleteAutomateResponseConfigRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long DeleteAutomateResponseConfigRequest::getId() const {
  return id_;
}

void DeleteAutomateResponseConfigRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

