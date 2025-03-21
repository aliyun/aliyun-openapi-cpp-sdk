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

#include <alibabacloud/eiam/model/CreateOrganizationalUnitRequest.h>

using AlibabaCloud::Eiam::Model::CreateOrganizationalUnitRequest;

CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateOrganizationalUnit") {
  setMethod(HttpRequest::Method::Post);
}

CreateOrganizationalUnitRequest::~CreateOrganizationalUnitRequest() {}

std::string CreateOrganizationalUnitRequest::getOrganizationalUnitExternalId() const {
  return organizationalUnitExternalId_;
}

void CreateOrganizationalUnitRequest::setOrganizationalUnitExternalId(const std::string &organizationalUnitExternalId) {
  organizationalUnitExternalId_ = organizationalUnitExternalId;
  setParameter(std::string("OrganizationalUnitExternalId"), organizationalUnitExternalId);
}

std::string CreateOrganizationalUnitRequest::getDescription() const {
  return description_;
}

void CreateOrganizationalUnitRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateOrganizationalUnitRequest::getParentId() const {
  return parentId_;
}

void CreateOrganizationalUnitRequest::setParentId(const std::string &parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), parentId);
}

std::string CreateOrganizationalUnitRequest::getOrganizationalUnitName() const {
  return organizationalUnitName_;
}

void CreateOrganizationalUnitRequest::setOrganizationalUnitName(const std::string &organizationalUnitName) {
  organizationalUnitName_ = organizationalUnitName;
  setParameter(std::string("OrganizationalUnitName"), organizationalUnitName);
}

std::string CreateOrganizationalUnitRequest::getInstanceId() const {
  return instanceId_;
}

void CreateOrganizationalUnitRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

