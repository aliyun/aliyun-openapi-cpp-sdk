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

#include <alibabacloud/oceanbasepro/model/DeleteTenantSecurityIpGroupRequest.h>

using AlibabaCloud::OceanBasePro::Model::DeleteTenantSecurityIpGroupRequest;

DeleteTenantSecurityIpGroupRequest::DeleteTenantSecurityIpGroupRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DeleteTenantSecurityIpGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTenantSecurityIpGroupRequest::~DeleteTenantSecurityIpGroupRequest() {}

std::string DeleteTenantSecurityIpGroupRequest::getSecurityIpGroupName() const {
  return securityIpGroupName_;
}

void DeleteTenantSecurityIpGroupRequest::setSecurityIpGroupName(const std::string &securityIpGroupName) {
  securityIpGroupName_ = securityIpGroupName;
  setBodyParameter(std::string("SecurityIpGroupName"), securityIpGroupName);
}

std::string DeleteTenantSecurityIpGroupRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteTenantSecurityIpGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteTenantSecurityIpGroupRequest::getTenantId() const {
  return tenantId_;
}

void DeleteTenantSecurityIpGroupRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

