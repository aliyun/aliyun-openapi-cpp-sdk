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

#include <alibabacloud/eiam/model/UpdateOrganizationalUnitRequest.h>

using AlibabaCloud::Eiam::Model::UpdateOrganizationalUnitRequest;

UpdateOrganizationalUnitRequest::UpdateOrganizationalUnitRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateOrganizationalUnit") {
  setMethod(HttpRequest::Method::Post);
}

UpdateOrganizationalUnitRequest::~UpdateOrganizationalUnitRequest() {}

std::string UpdateOrganizationalUnitRequest::getOrganizationalUnitName() const {
  return organizationalUnitName_;
}

void UpdateOrganizationalUnitRequest::setOrganizationalUnitName(const std::string &organizationalUnitName) {
  organizationalUnitName_ = organizationalUnitName;
  setParameter(std::string("OrganizationalUnitName"), organizationalUnitName);
}

std::string UpdateOrganizationalUnitRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateOrganizationalUnitRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateOrganizationalUnitRequest::getOrganizationalUnitId() const {
  return organizationalUnitId_;
}

void UpdateOrganizationalUnitRequest::setOrganizationalUnitId(const std::string &organizationalUnitId) {
  organizationalUnitId_ = organizationalUnitId;
  setParameter(std::string("OrganizationalUnitId"), organizationalUnitId);
}

