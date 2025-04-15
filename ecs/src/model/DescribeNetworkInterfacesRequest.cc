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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeNetworkInterfacesRequest;

DescribeNetworkInterfacesRequest::DescribeNetworkInterfacesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeNetworkInterfaces") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNetworkInterfacesRequest::~DescribeNetworkInterfacesRequest() {}

long DescribeNetworkInterfacesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNetworkInterfacesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNetworkInterfacesRequest::getType() const {
  return type_;
}

void DescribeNetworkInterfacesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeNetworkInterfacesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeNetworkInterfacesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<DescribeNetworkInterfacesRequest::Tag> DescribeNetworkInterfacesRequest::getTag() const {
  return tag_;
}

void DescribeNetworkInterfacesRequest::setTag(const std::vector<DescribeNetworkInterfacesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeNetworkInterfacesRequest::getNetworkInterfaceName() const {
  return networkInterfaceName_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceName(const std::string &networkInterfaceName) {
  networkInterfaceName_ = networkInterfaceName;
  setParameter(std::string("NetworkInterfaceName"), networkInterfaceName);
}

long DescribeNetworkInterfacesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNetworkInterfacesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNetworkInterfacesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeNetworkInterfacesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::vector<std::string> DescribeNetworkInterfacesRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrivateIpAddress(const std::vector<std::string> &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
}

std::string DescribeNetworkInterfacesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeNetworkInterfacesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeNetworkInterfacesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeNetworkInterfacesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> DescribeNetworkInterfacesRequest::getIpv6Address() const {
  return ipv6Address_;
}

void DescribeNetworkInterfacesRequest::setIpv6Address(const std::vector<std::string> &ipv6Address) {
  ipv6Address_ = ipv6Address;
}

std::string DescribeNetworkInterfacesRequest::getStatus() const {
  return status_;
}

void DescribeNetworkInterfacesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

bool DescribeNetworkInterfacesRequest::getServiceManaged() const {
  return serviceManaged_;
}

void DescribeNetworkInterfacesRequest::setServiceManaged(bool serviceManaged) {
  serviceManaged_ = serviceManaged;
  setParameter(std::string("ServiceManaged"), serviceManaged ? "true" : "false");
}

std::string DescribeNetworkInterfacesRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DescribeNetworkInterfacesRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

int DescribeNetworkInterfacesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkInterfacesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeNetworkInterfacesRequest::getRegionId() const {
  return regionId_;
}

void DescribeNetworkInterfacesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNetworkInterfacesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeNetworkInterfacesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeNetworkInterfacesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkInterfacesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNetworkInterfacesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNetworkInterfacesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNetworkInterfacesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNetworkInterfacesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeNetworkInterfacesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeNetworkInterfacesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeNetworkInterfacesRequest::getPrimaryIpAddress() const {
  return primaryIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrimaryIpAddress(const std::string &primaryIpAddress) {
  primaryIpAddress_ = primaryIpAddress;
  setParameter(std::string("PrimaryIpAddress"), primaryIpAddress);
}

std::vector<std::string> DescribeNetworkInterfacesRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceId(const std::vector<std::string> &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
}

