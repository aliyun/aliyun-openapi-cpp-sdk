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

#include <alibabacloud/ecs/model/RevokeSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::RevokeSecurityGroupRequest;

RevokeSecurityGroupRequest::RevokeSecurityGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RevokeSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

RevokeSecurityGroupRequest::~RevokeSecurityGroupRequest() {}

std::string RevokeSecurityGroupRequest::getNicType() const {
  return nicType_;
}

void RevokeSecurityGroupRequest::setNicType(const std::string &nicType) {
  nicType_ = nicType;
  setParameter(std::string("NicType"), nicType);
}

long RevokeSecurityGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RevokeSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RevokeSecurityGroupRequest::getSourcePrefixListId() const {
  return sourcePrefixListId_;
}

void RevokeSecurityGroupRequest::setSourcePrefixListId(const std::string &sourcePrefixListId) {
  sourcePrefixListId_ = sourcePrefixListId;
  setParameter(std::string("SourcePrefixListId"), sourcePrefixListId);
}

std::string RevokeSecurityGroupRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void RevokeSecurityGroupRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string RevokeSecurityGroupRequest::getSourceGroupOwnerAccount() const {
  return sourceGroupOwnerAccount_;
}

void RevokeSecurityGroupRequest::setSourceGroupOwnerAccount(const std::string &sourceGroupOwnerAccount) {
  sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
  setParameter(std::string("SourceGroupOwnerAccount"), sourceGroupOwnerAccount);
}

std::vector<RevokeSecurityGroupRequest::Permissions> RevokeSecurityGroupRequest::getPermissions() const {
  return permissions_;
}

void RevokeSecurityGroupRequest::setPermissions(const std::vector<RevokeSecurityGroupRequest::Permissions> &permissions) {
  permissions_ = permissions;
  for(int dep1 = 0; dep1 != permissions.size(); dep1++) {
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Policy", permissions[dep1].policy);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Priority", permissions[dep1].priority);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".IpProtocol", permissions[dep1].ipProtocol);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", permissions[dep1].sourceCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Ipv6SourceCidrIp", permissions[dep1].ipv6SourceCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourceGroupId", permissions[dep1].sourceGroupId);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourcePrefixListId", permissions[dep1].sourcePrefixListId);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".PortRange", permissions[dep1].portRange);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestCidrIp", permissions[dep1].destCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Ipv6DestCidrIp", permissions[dep1].ipv6DestCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourcePortRange", permissions[dep1].sourcePortRange);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourceGroupOwnerAccount", permissions[dep1].sourceGroupOwnerAccount);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourceGroupOwnerId", std::to_string(permissions[dep1].sourceGroupOwnerId));
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".NicType", permissions[dep1].nicType);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Description", permissions[dep1].description);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".PortRangeListId", permissions[dep1].portRangeListId);
  }
}

std::string RevokeSecurityGroupRequest::getIpv6DestCidrIp() const {
  return ipv6DestCidrIp_;
}

void RevokeSecurityGroupRequest::setIpv6DestCidrIp(const std::string &ipv6DestCidrIp) {
  ipv6DestCidrIp_ = ipv6DestCidrIp;
  setParameter(std::string("Ipv6DestCidrIp"), ipv6DestCidrIp);
}

std::string RevokeSecurityGroupRequest::getPortRange() const {
  return portRange_;
}

void RevokeSecurityGroupRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string RevokeSecurityGroupRequest::getIpProtocol() const {
  return ipProtocol_;
}

void RevokeSecurityGroupRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string RevokeSecurityGroupRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void RevokeSecurityGroupRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

long RevokeSecurityGroupRequest::getOwnerId() const {
  return ownerId_;
}

void RevokeSecurityGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RevokeSecurityGroupRequest::getPriority() const {
  return priority_;
}

void RevokeSecurityGroupRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string RevokeSecurityGroupRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void RevokeSecurityGroupRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

std::string RevokeSecurityGroupRequest::getSourceGroupId() const {
  return sourceGroupId_;
}

void RevokeSecurityGroupRequest::setSourceGroupId(const std::string &sourceGroupId) {
  sourceGroupId_ = sourceGroupId;
  setParameter(std::string("SourceGroupId"), sourceGroupId);
}

std::vector<std::string> RevokeSecurityGroupRequest::getSecurityGroupRuleId() const {
  return securityGroupRuleId_;
}

void RevokeSecurityGroupRequest::setSecurityGroupRuleId(const std::vector<std::string> &securityGroupRuleId) {
  securityGroupRuleId_ = securityGroupRuleId;
}

std::string RevokeSecurityGroupRequest::getClientToken() const {
  return clientToken_;
}

void RevokeSecurityGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RevokeSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void RevokeSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string RevokeSecurityGroupRequest::getDescription() const {
  return description_;
}

void RevokeSecurityGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long RevokeSecurityGroupRequest::getSourceGroupOwnerId() const {
  return sourceGroupOwnerId_;
}

void RevokeSecurityGroupRequest::setSourceGroupOwnerId(long sourceGroupOwnerId) {
  sourceGroupOwnerId_ = sourceGroupOwnerId;
  setParameter(std::string("SourceGroupOwnerId"), std::to_string(sourceGroupOwnerId));
}

std::string RevokeSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void RevokeSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RevokeSecurityGroupRequest::getPolicy() const {
  return policy_;
}

void RevokeSecurityGroupRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string RevokeSecurityGroupRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void RevokeSecurityGroupRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string RevokeSecurityGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RevokeSecurityGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RevokeSecurityGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RevokeSecurityGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

