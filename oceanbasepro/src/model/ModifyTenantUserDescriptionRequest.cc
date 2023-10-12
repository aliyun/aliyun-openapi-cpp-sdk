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

#include <alibabacloud/oceanbasepro/model/ModifyTenantUserDescriptionRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantUserDescriptionRequest;

ModifyTenantUserDescriptionRequest::ModifyTenantUserDescriptionRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantUserDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantUserDescriptionRequest::~ModifyTenantUserDescriptionRequest() {}

std::string ModifyTenantUserDescriptionRequest::getDescription() const {
  return description_;
}

void ModifyTenantUserDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string ModifyTenantUserDescriptionRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantUserDescriptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantUserDescriptionRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantUserDescriptionRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantUserDescriptionRequest::getUserName() const {
  return userName_;
}

void ModifyTenantUserDescriptionRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

