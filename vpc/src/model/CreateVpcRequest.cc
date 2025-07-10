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

#include <alibabacloud/vpc/model/CreateVpcRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpcRequest;

CreateVpcRequest::CreateVpcRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateVpc") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpcRequest::~CreateVpcRequest() {}

long CreateVpcRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateVpcRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateVpcRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpcRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateVpcRequest::getEnableIpv6() const {
  return enableIpv6_;
}

void CreateVpcRequest::setEnableIpv6(bool enableIpv6) {
  enableIpv6_ = enableIpv6;
  setParameter(std::string("EnableIpv6"), enableIpv6 ? "true" : "false");
}

std::string CreateVpcRequest::getDescription() const {
  return description_;
}

void CreateVpcRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateVpcRequest::getIpv4CidrMask() const {
  return ipv4CidrMask_;
}

void CreateVpcRequest::setIpv4CidrMask(int ipv4CidrMask) {
  ipv4CidrMask_ = ipv4CidrMask;
  setParameter(std::string("Ipv4CidrMask"), std::to_string(ipv4CidrMask));
}

std::string CreateVpcRequest::getVpcName() const {
  return vpcName_;
}

void CreateVpcRequest::setVpcName(const std::string &vpcName) {
  vpcName_ = vpcName;
  setParameter(std::string("VpcName"), vpcName);
}

std::string CreateVpcRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpcRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpcRequest::getRegionId() const {
  return regionId_;
}

void CreateVpcRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateVpcRequest::getIpv4IpamPoolId() const {
  return ipv4IpamPoolId_;
}

void CreateVpcRequest::setIpv4IpamPoolId(const std::string &ipv4IpamPoolId) {
  ipv4IpamPoolId_ = ipv4IpamPoolId;
  setParameter(std::string("Ipv4IpamPoolId"), ipv4IpamPoolId);
}

std::string CreateVpcRequest::getIpv6Isp() const {
  return ipv6Isp_;
}

void CreateVpcRequest::setIpv6Isp(const std::string &ipv6Isp) {
  ipv6Isp_ = ipv6Isp;
  setParameter(std::string("Ipv6Isp"), ipv6Isp);
}

std::string CreateVpcRequest::getUserCidr() const {
  return userCidr_;
}

void CreateVpcRequest::setUserCidr(const std::string &userCidr) {
  userCidr_ = userCidr;
  setParameter(std::string("UserCidr"), userCidr);
}

std::vector<CreateVpcRequest::Tag> CreateVpcRequest::getTag() const {
  return tag_;
}

void CreateVpcRequest::setTag(const std::vector<CreateVpcRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateVpcRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpcRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateVpcRequest::getEnableDnsHostname() const {
  return enableDnsHostname_;
}

void CreateVpcRequest::setEnableDnsHostname(bool enableDnsHostname) {
  enableDnsHostname_ = enableDnsHostname;
  setParameter(std::string("EnableDnsHostname"), enableDnsHostname ? "true" : "false");
}

std::string CreateVpcRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateVpcRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateVpcRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateVpcRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateVpcRequest::getOwnerId() const {
  return ownerId_;
}

void CreateVpcRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateVpcRequest::getIpv6CidrBlock() const {
  return ipv6CidrBlock_;
}

void CreateVpcRequest::setIpv6CidrBlock(const std::string &ipv6CidrBlock) {
  ipv6CidrBlock_ = ipv6CidrBlock;
  setParameter(std::string("Ipv6CidrBlock"), ipv6CidrBlock);
}

std::string CreateVpcRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateVpcRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

