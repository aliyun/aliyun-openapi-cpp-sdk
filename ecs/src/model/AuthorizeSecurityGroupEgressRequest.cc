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

#include <alibabacloud/ecs/model/AuthorizeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecs::Model::AuthorizeSecurityGroupEgressRequest;

AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AuthorizeSecurityGroupEgress") {
  setMethod(HttpRequest::Method::Post);
}

AuthorizeSecurityGroupEgressRequest::~AuthorizeSecurityGroupEgressRequest() {}

std::string AuthorizeSecurityGroupEgressRequest::getNicType() const {
  return nicType_;
}

void AuthorizeSecurityGroupEgressRequest::setNicType(const std::string &nicType) {
  nicType_ = nicType;
  setParameter(std::string("NicType"), nicType);
}

long AuthorizeSecurityGroupEgressRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void AuthorizeSecurityGroupEgressRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getClientToken() const {
  return clientToken_;
}

void AuthorizeSecurityGroupEgressRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestPrefixListId() const {
  return destPrefixListId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestPrefixListId(const std::string &destPrefixListId) {
  destPrefixListId_ = destPrefixListId;
  setParameter(std::string("DestPrefixListId"), destPrefixListId);
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string AuthorizeSecurityGroupEgressRequest::getDescription() const {
  return description_;
}

void AuthorizeSecurityGroupEgressRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AuthorizeSecurityGroupEgressRequest::getRegionId() const {
  return regionId_;
}

void AuthorizeSecurityGroupEgressRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpv6DestCidrIp() const {
  return ipv6DestCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setIpv6DestCidrIp(const std::string &ipv6DestCidrIp) {
  ipv6DestCidrIp_ = ipv6DestCidrIp;
  setParameter(std::string("Ipv6DestCidrIp"), ipv6DestCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpv6SourceCidrIp() const {
  return ipv6SourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setIpv6SourceCidrIp(const std::string &ipv6SourceCidrIp) {
  ipv6SourceCidrIp_ = ipv6SourceCidrIp;
  setParameter(std::string("Ipv6SourceCidrIp"), ipv6SourceCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getPolicy() const {
  return policy_;
}

void AuthorizeSecurityGroupEgressRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

std::string AuthorizeSecurityGroupEgressRequest::getPortRange() const {
  return portRange_;
}

void AuthorizeSecurityGroupEgressRequest::setPortRange(const std::string &portRange) {
  portRange_ = portRange;
  setParameter(std::string("PortRange"), portRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpProtocol() const {
  return ipProtocol_;
}

void AuthorizeSecurityGroupEgressRequest::setIpProtocol(const std::string &ipProtocol) {
  ipProtocol_ = ipProtocol;
  setParameter(std::string("IpProtocol"), ipProtocol);
}

std::string AuthorizeSecurityGroupEgressRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupId() const {
  return destGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupId(const std::string &destGroupId) {
  destGroupId_ = destGroupId;
  setParameter(std::string("DestGroupId"), destGroupId);
}

long AuthorizeSecurityGroupEgressRequest::getOwnerId() const {
  return ownerId_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerAccount() const {
  return destGroupOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string &destGroupOwnerAccount) {
  destGroupOwnerAccount_ = destGroupOwnerAccount;
  setParameter(std::string("DestGroupOwnerAccount"), destGroupOwnerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getPriority() const {
  return priority_;
}

void AuthorizeSecurityGroupEgressRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestCidrIp() const {
  return destCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setDestCidrIp(const std::string &destCidrIp) {
  destCidrIp_ = destCidrIp;
  setParameter(std::string("DestCidrIp"), destCidrIp);
}

long AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerId() const {
  return destGroupOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId) {
  destGroupOwnerId_ = destGroupOwnerId;
  setParameter(std::string("DestGroupOwnerId"), std::to_string(destGroupOwnerId));
}

