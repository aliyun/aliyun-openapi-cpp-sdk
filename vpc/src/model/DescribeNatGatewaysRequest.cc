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

#include <alibabacloud/vpc/model/DescribeNatGatewaysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeNatGatewaysRequest;

DescribeNatGatewaysRequest::DescribeNatGatewaysRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeNatGateways") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNatGatewaysRequest::~DescribeNatGatewaysRequest() {}

long DescribeNatGatewaysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeNatGatewaysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeNatGatewaysRequest::getNetworkType() const {
  return networkType_;
}

void DescribeNatGatewaysRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeNatGatewaysRequest::getSpec() const {
  return spec_;
}

void DescribeNatGatewaysRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

int DescribeNatGatewaysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNatGatewaysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeNatGatewaysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeNatGatewaysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeNatGatewaysRequest::getRegionId() const {
  return regionId_;
}

void DescribeNatGatewaysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNatGatewaysRequest::getNatType() const {
  return natType_;
}

void DescribeNatGatewaysRequest::setNatType(const std::string &natType) {
  natType_ = natType;
  setParameter(std::string("NatType"), natType);
}

int DescribeNatGatewaysRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNatGatewaysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeNatGatewaysRequest::getNatGatewayId() const {
  return natGatewayId_;
}

void DescribeNatGatewaysRequest::setNatGatewayId(const std::string &natGatewayId) {
  natGatewayId_ = natGatewayId;
  setParameter(std::string("NatGatewayId"), natGatewayId);
}

std::vector<DescribeNatGatewaysRequest::Tag> DescribeNatGatewaysRequest::getTag() const {
  return tag_;
}

void DescribeNatGatewaysRequest::setTag(const std::vector<DescribeNatGatewaysRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeNatGatewaysRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeNatGatewaysRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::vector<std::string> DescribeNatGatewaysRequest::getNatGatewayIds() const {
  return natGatewayIds_;
}

void DescribeNatGatewaysRequest::setNatGatewayIds(const std::vector<std::string> &natGatewayIds) {
  natGatewayIds_ = natGatewayIds;
}

bool DescribeNatGatewaysRequest::getDryRun() const {
  return dryRun_;
}

void DescribeNatGatewaysRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DescribeNatGatewaysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeNatGatewaysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeNatGatewaysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeNatGatewaysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeNatGatewaysRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeNatGatewaysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeNatGatewaysRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeNatGatewaysRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeNatGatewaysRequest::getVpcId() const {
  return vpcId_;
}

void DescribeNatGatewaysRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeNatGatewaysRequest::getName() const {
  return name_;
}

void DescribeNatGatewaysRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

bool DescribeNatGatewaysRequest::getPrivateLinkEnabled() const {
  return privateLinkEnabled_;
}

void DescribeNatGatewaysRequest::setPrivateLinkEnabled(bool privateLinkEnabled) {
  privateLinkEnabled_ = privateLinkEnabled;
  setParameter(std::string("PrivateLinkEnabled"), privateLinkEnabled ? "true" : "false");
}

std::string DescribeNatGatewaysRequest::getZoneId() const {
  return zoneId_;
}

void DescribeNatGatewaysRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeNatGatewaysRequest::getStatus() const {
  return status_;
}

void DescribeNatGatewaysRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

