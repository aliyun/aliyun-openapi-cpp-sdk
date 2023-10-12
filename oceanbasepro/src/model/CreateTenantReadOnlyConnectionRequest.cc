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

#include <alibabacloud/oceanbasepro/model/CreateTenantReadOnlyConnectionRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateTenantReadOnlyConnectionRequest;

CreateTenantReadOnlyConnectionRequest::CreateTenantReadOnlyConnectionRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateTenantReadOnlyConnection") {
  setMethod(HttpRequest::Method::Post);
}

CreateTenantReadOnlyConnectionRequest::~CreateTenantReadOnlyConnectionRequest() {}

std::string CreateTenantReadOnlyConnectionRequest::getTenantId() const {
  return tenantId_;
}

void CreateTenantReadOnlyConnectionRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string CreateTenantReadOnlyConnectionRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateTenantReadOnlyConnectionRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setBodyParameter(std::string("VSwitchId"), vSwitchId);
}

std::string CreateTenantReadOnlyConnectionRequest::getInstanceId() const {
  return instanceId_;
}

void CreateTenantReadOnlyConnectionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateTenantReadOnlyConnectionRequest::getVpcId() const {
  return vpcId_;
}

void CreateTenantReadOnlyConnectionRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string CreateTenantReadOnlyConnectionRequest::getZoneId() const {
  return zoneId_;
}

void CreateTenantReadOnlyConnectionRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setBodyParameter(std::string("ZoneId"), zoneId);
}

