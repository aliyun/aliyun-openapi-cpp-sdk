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

#include <alibabacloud/eiam/model/UpdateOrganizationalUnitDescriptionRequest.h>

using AlibabaCloud::Eiam::Model::UpdateOrganizationalUnitDescriptionRequest;

UpdateOrganizationalUnitDescriptionRequest::UpdateOrganizationalUnitDescriptionRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateOrganizationalUnitDescription") {
  setMethod(HttpRequest::Method::Post);
}

UpdateOrganizationalUnitDescriptionRequest::~UpdateOrganizationalUnitDescriptionRequest() {}

std::string UpdateOrganizationalUnitDescriptionRequest::getDescription() const {
  return description_;
}

void UpdateOrganizationalUnitDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateOrganizationalUnitDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateOrganizationalUnitDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UpdateOrganizationalUnitDescriptionRequest::getOrganizationalUnitId() const {
  return organizationalUnitId_;
}

void UpdateOrganizationalUnitDescriptionRequest::setOrganizationalUnitId(const std::string &organizationalUnitId) {
  organizationalUnitId_ = organizationalUnitId;
  setParameter(std::string("OrganizationalUnitId"), organizationalUnitId);
}

