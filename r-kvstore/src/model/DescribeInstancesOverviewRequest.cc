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

#include <alibabacloud/r-kvstore/model/DescribeInstancesOverviewRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstancesOverviewRequest;

DescribeInstancesOverviewRequest::DescribeInstancesOverviewRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstancesOverview") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesOverviewRequest::~DescribeInstancesOverviewRequest() {}

long DescribeInstancesOverviewRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstancesOverviewRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstancesOverviewRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeInstancesOverviewRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeInstancesOverviewRequest::getNetworkType() const {
  return networkType_;
}

void DescribeInstancesOverviewRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeInstancesOverviewRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeInstancesOverviewRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeInstancesOverviewRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeInstancesOverviewRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string DescribeInstancesOverviewRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstancesOverviewRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstancesOverviewRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstancesOverviewRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInstancesOverviewRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstancesOverviewRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeInstancesOverviewRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstancesOverviewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstancesOverviewRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstancesOverviewRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstancesOverviewRequest::getEditionType() const {
  return editionType_;
}

void DescribeInstancesOverviewRequest::setEditionType(const std::string &editionType) {
  editionType_ = editionType;
  setParameter(std::string("EditionType"), editionType);
}

std::string DescribeInstancesOverviewRequest::getInstanceStatus() const {
  return instanceStatus_;
}

void DescribeInstancesOverviewRequest::setInstanceStatus(const std::string &instanceStatus) {
  instanceStatus_ = instanceStatus;
  setParameter(std::string("InstanceStatus"), instanceStatus);
}

std::string DescribeInstancesOverviewRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstancesOverviewRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstancesOverviewRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstancesOverviewRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool DescribeInstancesOverviewRequest::getGlobalInstance() const {
  return globalInstance_;
}

void DescribeInstancesOverviewRequest::setGlobalInstance(bool globalInstance) {
  globalInstance_ = globalInstance;
  setParameter(std::string("GlobalInstance"), globalInstance ? "true" : "false");
}

std::string DescribeInstancesOverviewRequest::getPrivateIp() const {
  return privateIp_;
}

void DescribeInstancesOverviewRequest::setPrivateIp(const std::string &privateIp) {
  privateIp_ = privateIp;
  setParameter(std::string("PrivateIp"), privateIp);
}

long DescribeInstancesOverviewRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstancesOverviewRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstancesOverviewRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeInstancesOverviewRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeInstancesOverviewRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeInstancesOverviewRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeInstancesOverviewRequest::getArchitectureType() const {
  return architectureType_;
}

void DescribeInstancesOverviewRequest::setArchitectureType(const std::string &architectureType) {
  architectureType_ = architectureType;
  setParameter(std::string("ArchitectureType"), architectureType);
}

std::string DescribeInstancesOverviewRequest::getVpcId() const {
  return vpcId_;
}

void DescribeInstancesOverviewRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeInstancesOverviewRequest::getZoneId() const {
  return zoneId_;
}

void DescribeInstancesOverviewRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeInstancesOverviewRequest::getChargeType() const {
  return chargeType_;
}

void DescribeInstancesOverviewRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

