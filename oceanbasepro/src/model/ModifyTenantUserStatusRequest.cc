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

#include <alibabacloud/oceanbasepro/model/ModifyTenantUserStatusRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantUserStatusRequest;

ModifyTenantUserStatusRequest::ModifyTenantUserStatusRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantUserStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantUserStatusRequest::~ModifyTenantUserStatusRequest() {}

std::string ModifyTenantUserStatusRequest::getUserStatus() const {
  return userStatus_;
}

void ModifyTenantUserStatusRequest::setUserStatus(const std::string &userStatus) {
  userStatus_ = userStatus;
  setBodyParameter(std::string("UserStatus"), userStatus);
}

std::string ModifyTenantUserStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantUserStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantUserStatusRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantUserStatusRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantUserStatusRequest::getUserName() const {
  return userName_;
}

void ModifyTenantUserStatusRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

