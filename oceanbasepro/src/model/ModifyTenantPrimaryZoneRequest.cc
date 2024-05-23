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

#include <alibabacloud/oceanbasepro/model/ModifyTenantPrimaryZoneRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantPrimaryZoneRequest;

ModifyTenantPrimaryZoneRequest::ModifyTenantPrimaryZoneRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantPrimaryZone") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantPrimaryZoneRequest::~ModifyTenantPrimaryZoneRequest() {}

std::string ModifyTenantPrimaryZoneRequest::getTenantEndpointDirectId() const {
  return tenantEndpointDirectId_;
}

void ModifyTenantPrimaryZoneRequest::setTenantEndpointDirectId(const std::string &tenantEndpointDirectId) {
  tenantEndpointDirectId_ = tenantEndpointDirectId;
  setBodyParameter(std::string("TenantEndpointDirectId"), tenantEndpointDirectId);
}

std::string ModifyTenantPrimaryZoneRequest::getUserVSwitchId() const {
  return userVSwitchId_;
}

void ModifyTenantPrimaryZoneRequest::setUserVSwitchId(const std::string &userVSwitchId) {
  userVSwitchId_ = userVSwitchId;
  setBodyParameter(std::string("UserVSwitchId"), userVSwitchId);
}

std::string ModifyTenantPrimaryZoneRequest::getMasterIntranetAddressZone() const {
  return masterIntranetAddressZone_;
}

void ModifyTenantPrimaryZoneRequest::setMasterIntranetAddressZone(const std::string &masterIntranetAddressZone) {
  masterIntranetAddressZone_ = masterIntranetAddressZone;
  setBodyParameter(std::string("MasterIntranetAddressZone"), masterIntranetAddressZone);
}

std::string ModifyTenantPrimaryZoneRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantPrimaryZoneRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantPrimaryZoneRequest::getTenantEndpointId() const {
  return tenantEndpointId_;
}

void ModifyTenantPrimaryZoneRequest::setTenantEndpointId(const std::string &tenantEndpointId) {
  tenantEndpointId_ = tenantEndpointId;
  setBodyParameter(std::string("TenantEndpointId"), tenantEndpointId);
}

std::string ModifyTenantPrimaryZoneRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantPrimaryZoneRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantPrimaryZoneRequest::getPrimaryZone() const {
  return primaryZone_;
}

void ModifyTenantPrimaryZoneRequest::setPrimaryZone(const std::string &primaryZone) {
  primaryZone_ = primaryZone;
  setBodyParameter(std::string("PrimaryZone"), primaryZone);
}

std::string ModifyTenantPrimaryZoneRequest::getVpcId() const {
  return vpcId_;
}

void ModifyTenantPrimaryZoneRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

std::string ModifyTenantPrimaryZoneRequest::getUserVpcOwnerId() const {
  return userVpcOwnerId_;
}

void ModifyTenantPrimaryZoneRequest::setUserVpcOwnerId(const std::string &userVpcOwnerId) {
  userVpcOwnerId_ = userVpcOwnerId;
  setBodyParameter(std::string("UserVpcOwnerId"), userVpcOwnerId);
}

std::string ModifyTenantPrimaryZoneRequest::getUserDirectVSwitchId() const {
  return userDirectVSwitchId_;
}

void ModifyTenantPrimaryZoneRequest::setUserDirectVSwitchId(const std::string &userDirectVSwitchId) {
  userDirectVSwitchId_ = userDirectVSwitchId;
  setBodyParameter(std::string("UserDirectVSwitchId"), userDirectVSwitchId);
}

