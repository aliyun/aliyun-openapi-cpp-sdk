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

#include <alibabacloud/ecs/model/RevokeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecs::Model::RevokeSecurityGroupEgressRequest;

RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RevokeSecurityGroupEgress") {
  setMethod(HttpRequest::Method::Post);
}

RevokeSecurityGroupEgressRequest::~RevokeSecurityGroupEgressRequest() {}

std::string RevokeSecurityGroupEgressRequest::getNicType() const {
  return nicType_;
}

void RevokeSecurityGroupEgressRequest::setNicType(const std::string &nicType) {
  nicType_ = nicType;
  setParameter(std::string("NicType"), nicType);
}

long RevokeSecurityGroupEgressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RevokeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RevokeSecurityGroupEgressRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void RevokeSecurityGroupEgressRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string RevokeSecurityGroupEgressRequest::getDestPrefixListId() const {
  return destPrefixListId_;
}

void RevokeSecurityGroupEgressRequest::setDestPrefixListId(const std::string &destPrefixListId) {
  destPrefixListId_ = destPrefixListId;
  setParameter(std::string("DestPrefixListId"), destPrefixListId);
}

std::vector<RevokeSecurityGroupEgressRequest::Permissions> RevokeSecurityGroupEgressRequest::getPermissions() const {
  return permissions_;
}

void RevokeSecurityGroupEgressRequest::setPermissions(const std::vector<RevokeSecurityGroupEgressRequest::Permissions> &permissions) {
  permissions_ = permissions;
  for(int dep1 = 0; dep1 != permissions.size(); dep1++) {
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Policy", permissions[dep1].policy);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Priority", permissions[dep1].priority);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".IpProtocol", permissions[dep1].ipProtocol);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestCidrIp", permissions[dep1].destCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Ipv6DestCidrIp", permissions[dep1].ipv6DestCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestGroupId", permissions[dep1].destGroupId);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestPrefixListId", permissions[dep1].destPrefixListId);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".PortRange", permissions[dep1].portRange);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", permissions[dep1].sourceCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Ipv6SourceCidrIp", permissions[dep1].ipv6SourceCidrIp);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".SourcePortRange", permissions[dep1].sourcePortRange);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestGroupOwnerAccount", permissions[dep1].destGroupOwnerAccount);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".DestGroupOwnerId", permissions[dep1].destGroupOwnerId);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".NicType", permissions[dep1].nicType);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".Description", permissions[dep1].description);
    setParameter(std::string("Permissions") + "." + std::to_string(dep1 + 1) + ".PortRangeListId", permissions[dep1].portRangeListId);
  }
}

std::string RevokeSecurityGroupEgressRequest::getIpv6DestCidrIp() const {
  return ipv6DestCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setIpv6DestCidrIp(const std::string &ipv6DestCidrIp) {
  ipv6DestCidrIp_ = ipv6DestCidrIp;
  setParameter(std::string("Ipv6DestCidrIp"), ipv6DestCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getPortRange() const {
  return portRange_;
}

void RevokeSecurityGroupEgressRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string RevokeSecurityGroupEgressRequest::getIpProtocol() const {
  return ipProtocol_;
}

void RevokeSecurityGroupEgressRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string RevokeSecurityGroupEgressRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

long RevokeSecurityGroupEgressRequest::getOwnerId() const {
  return ownerId_;
}

void RevokeSecurityGroupEgressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RevokeSecurityGroupEgressRequest::getPriority() const {
  return priority_;
}

void RevokeSecurityGroupEgressRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string RevokeSecurityGroupEgressRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

std::vector<std::string> RevokeSecurityGroupEgressRequest::getSecurityGroupRuleId() const {
  return securityGroupRuleId_;
}

void RevokeSecurityGroupEgressRequest::setSecurityGroupRuleId(const std::vector<std::string> &securityGroupRuleId) {
  securityGroupRuleId_ = securityGroupRuleId;
}

std::string RevokeSecurityGroupEgressRequest::getClientToken() const {
  return clientToken_;
}

void RevokeSecurityGroupEgressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RevokeSecurityGroupEgressRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void RevokeSecurityGroupEgressRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string RevokeSecurityGroupEgressRequest::getDescription() const {
  return description_;
}

void RevokeSecurityGroupEgressRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string RevokeSecurityGroupEgressRequest::getRegionId() const {
  return regionId_;
}

void RevokeSecurityGroupEgressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RevokeSecurityGroupEgressRequest::getPolicy() const {
  return policy_;
}

void RevokeSecurityGroupEgressRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string RevokeSecurityGroupEgressRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RevokeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RevokeSecurityGroupEgressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getDestGroupId() const {
  return destGroupId_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupId(const std::string &destGroupId) {
  destGroupId_ = destGroupId;
  setParameter(std::string("DestGroupId"), destGroupId);
}

std::string RevokeSecurityGroupEgressRequest::getDestGroupOwnerAccount() const {
  return destGroupOwnerAccount_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string &destGroupOwnerAccount) {
  destGroupOwnerAccount_ = destGroupOwnerAccount;
  setParameter(std::string("DestGroupOwnerAccount"), destGroupOwnerAccount);
}

long RevokeSecurityGroupEgressRequest::getDestGroupOwnerId() const {
  return destGroupOwnerId_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId) {
  destGroupOwnerId_ = destGroupOwnerId;
  setParameter(std::string("DestGroupOwnerId"), std::to_string(destGroupOwnerId));
}

