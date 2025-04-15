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

#include <alibabacloud/ecs/model/ModifySecurityGroupRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupRuleRequest;

ModifySecurityGroupRuleRequest::ModifySecurityGroupRuleRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupRuleRequest::~ModifySecurityGroupRuleRequest() {}

std::string ModifySecurityGroupRuleRequest::getNicType() const {
  return nicType_;
}

void ModifySecurityGroupRuleRequest::setNicType(const std::string &nicType) {
  nicType_ = nicType;
  setParameter(std::string("NicType"), nicType);
}

long ModifySecurityGroupRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupRuleRequest::getSourcePrefixListId() const {
  return sourcePrefixListId_;
}

void ModifySecurityGroupRuleRequest::setSourcePrefixListId(const std::string &sourcePrefixListId) {
  sourcePrefixListId_ = sourcePrefixListId;
  setParameter(std::string("SourcePrefixListId"), sourcePrefixListId);
}

std::string ModifySecurityGroupRuleRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void ModifySecurityGroupRuleRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string ModifySecurityGroupRuleRequest::getSourceGroupOwnerAccount() const {
  return sourceGroupOwnerAccount_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupOwnerAccount(const std::string &sourceGroupOwnerAccount) {
  sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
  setParameter(std::string("SourceGroupOwnerAccount"), sourceGroupOwnerAccount);
}

std::string ModifySecurityGroupRuleRequest::getIpv6DestCidrIp() const {
  return ipv6DestCidrIp_;
}

void ModifySecurityGroupRuleRequest::setIpv6DestCidrIp(const std::string &ipv6DestCidrIp) {
  ipv6DestCidrIp_ = ipv6DestCidrIp;
  setParameter(std::string("Ipv6DestCidrIp"), ipv6DestCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getPortRange() const {
  return portRange_;
}

void ModifySecurityGroupRuleRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string ModifySecurityGroupRuleRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ModifySecurityGroupRuleRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ModifySecurityGroupRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void ModifySecurityGroupRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

long ModifySecurityGroupRuleRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySecurityGroupRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySecurityGroupRuleRequest::getPriority() const {
  return priority_;
}

void ModifySecurityGroupRuleRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string ModifySecurityGroupRuleRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void ModifySecurityGroupRuleRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getSourceGroupId() const {
  return sourceGroupId_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupId(const std::string &sourceGroupId) {
  sourceGroupId_ = sourceGroupId;
  setParameter(std::string("SourceGroupId"), sourceGroupId);
}

std::string ModifySecurityGroupRuleRequest::getSecurityGroupRuleId() const {
  return securityGroupRuleId_;
}

void ModifySecurityGroupRuleRequest::setSecurityGroupRuleId(const std::string &securityGroupRuleId) {
  securityGroupRuleId_ = securityGroupRuleId;
  setParameter(std::string("SecurityGroupRuleId"), securityGroupRuleId);
}

std::string ModifySecurityGroupRuleRequest::getClientToken() const {
  return clientToken_;
}

void ModifySecurityGroupRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifySecurityGroupRuleRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifySecurityGroupRuleRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifySecurityGroupRuleRequest::getDescription() const {
  return description_;
}

void ModifySecurityGroupRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifySecurityGroupRuleRequest::getSourceGroupOwnerId() const {
  return sourceGroupOwnerId_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupOwnerId(long sourceGroupOwnerId) {
  sourceGroupOwnerId_ = sourceGroupOwnerId;
  setParameter(std::string("SourceGroupOwnerId"), std::to_string(sourceGroupOwnerId));
}

std::string ModifySecurityGroupRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifySecurityGroupRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySecurityGroupRuleRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void ModifySecurityGroupRuleRequest::setPortRangeListId(const std::string &portRangeListId) {
  portRangeListId_ = portRangeListId;
  setParameter(std::string("PortRangeListId"), portRangeListId);
}

std::string ModifySecurityGroupRuleRequest::getPolicy() const {
  return policy_;
}

void ModifySecurityGroupRuleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string ModifySecurityGroupRuleRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void ModifySecurityGroupRuleRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySecurityGroupRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySecurityGroupRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySecurityGroupRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

