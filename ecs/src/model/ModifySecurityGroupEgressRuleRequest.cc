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

#include <alibabacloud/ecs/model/ModifySecurityGroupEgressRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupEgressRuleRequest;

ModifySecurityGroupEgressRuleRequest::ModifySecurityGroupEgressRuleRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupEgressRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupEgressRuleRequest::~ModifySecurityGroupEgressRuleRequest() {}

std::string ModifySecurityGroupEgressRuleRequest::getNicType() const {
  return nicType_;
}

void ModifySecurityGroupEgressRuleRequest::setNicType(const std::string &nicType) {
  nicType_ = nicType;
  setParameter(std::string("NicType"), nicType);
}

long ModifySecurityGroupEgressRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void ModifySecurityGroupEgressRuleRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestPrefixListId() const {
  return destPrefixListId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestPrefixListId(const std::string &destPrefixListId) {
  destPrefixListId_ = destPrefixListId;
  setParameter(std::string("DestPrefixListId"), destPrefixListId);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpv6DestCidrIp() const {
  return ipv6DestCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setIpv6DestCidrIp(const std::string &ipv6DestCidrIp) {
  ipv6DestCidrIp_ = ipv6DestCidrIp;
  setParameter(std::string("Ipv6DestCidrIp"), ipv6DestCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getPortRange() const {
  return portRange_;
}

void ModifySecurityGroupEgressRuleRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpProtocol() const {
  return ipProtocol_;
}

void ModifySecurityGroupEgressRuleRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string ModifySecurityGroupEgressRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

long ModifySecurityGroupEgressRuleRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getPriority() const {
  return priority_;
}

void ModifySecurityGroupEgressRuleRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityGroupRuleId() const {
  return securityGroupRuleId_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityGroupRuleId(const std::string &securityGroupRuleId) {
  securityGroupRuleId_ = securityGroupRuleId;
  setParameter(std::string("SecurityGroupRuleId"), securityGroupRuleId);
}

std::string ModifySecurityGroupEgressRuleRequest::getClientToken() const {
  return clientToken_;
}

void ModifySecurityGroupEgressRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifySecurityGroupEgressRuleRequest::getDescription() const {
  return description_;
}

void ModifySecurityGroupEgressRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifySecurityGroupEgressRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifySecurityGroupEgressRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySecurityGroupEgressRuleRequest::getPortRangeListId() const {
  return portRangeListId_;
}

void ModifySecurityGroupEgressRuleRequest::setPortRangeListId(const std::string &portRangeListId) {
  portRangeListId_ = portRangeListId;
  setParameter(std::string("PortRangeListId"), portRangeListId);
}

std::string ModifySecurityGroupEgressRuleRequest::getPolicy() const {
  return policy_;
}

void ModifySecurityGroupEgressRuleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupId() const {
  return destGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupId(const std::string &destGroupId) {
  destGroupId_ = destGroupId;
  setParameter(std::string("DestGroupId"), destGroupId);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerAccount() const {
  return destGroupOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerAccount(const std::string &destGroupOwnerAccount) {
  destGroupOwnerAccount_ = destGroupOwnerAccount;
  setParameter(std::string("DestGroupOwnerAccount"), destGroupOwnerAccount);
}

long ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerId() const {
  return destGroupOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerId(long destGroupOwnerId) {
  destGroupOwnerId_ = destGroupOwnerId;
  setParameter(std::string("DestGroupOwnerId"), std::to_string(destGroupOwnerId));
}

