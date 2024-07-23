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

#include <alibabacloud/rds/model/ModifyDBInstanceSecurityGroupRuleRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceSecurityGroupRuleRequest;

ModifyDBInstanceSecurityGroupRuleRequest::ModifyDBInstanceSecurityGroupRuleRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceSecurityGroupRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceSecurityGroupRuleRequest::~ModifyDBInstanceSecurityGroupRuleRequest() {}

long ModifyDBInstanceSecurityGroupRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getDescription() const {
  return description_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getPortRange() const {
  return portRange_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyDBInstanceSecurityGroupRuleRequest::getSecurityGroupRuleId() const {
  return securityGroupRuleId_;
}

void ModifyDBInstanceSecurityGroupRuleRequest::setSecurityGroupRuleId(const std::string &securityGroupRuleId) {
  securityGroupRuleId_ = securityGroupRuleId;
  setParameter(std::string("SecurityGroupRuleId"), securityGroupRuleId);
}

