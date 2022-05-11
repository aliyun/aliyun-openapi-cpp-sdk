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

#include <alibabacloud/r-kvstore/model/DescribeInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest() {}

long DescribeInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstancesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeInstancesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeInstancesRequest::getNetworkType() const {
  return networkType_;
}

void DescribeInstancesRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeInstancesRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeInstancesRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeInstancesRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeInstancesRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

int DescribeInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInstancesRequest::getExpired() const {
  return expired_;
}

void DescribeInstancesRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeInstancesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstancesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstancesRequest::getEditionType() const {
  return editionType_;
}

void DescribeInstancesRequest::setEditionType(const std::string &editionType) {
  editionType_ = editionType;
  setParameter(std::string("EditionType"), editionType);
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag() const {
  return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<DescribeInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool DescribeInstancesRequest::getWithoutTair() const {
  return withoutTair_;
}

void DescribeInstancesRequest::setWithoutTair(bool withoutTair) {
  withoutTair_ = withoutTair;
  setParameter(std::string("WithoutTair"), withoutTair ? "true" : "false");
}

std::string DescribeInstancesRequest::getInstanceStatus() const {
  return instanceStatus_;
}

void DescribeInstancesRequest::setInstanceStatus(const std::string &instanceStatus) {
  instanceStatus_ = instanceStatus;
  setParameter(std::string("InstanceStatus"), instanceStatus);
}

std::string DescribeInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool DescribeInstancesRequest::getGlobalInstance() const {
  return globalInstance_;
}

void DescribeInstancesRequest::setGlobalInstance(bool globalInstance) {
  globalInstance_ = globalInstance;
  setParameter(std::string("GlobalInstance"), globalInstance ? "true" : "false");
}

std::string DescribeInstancesRequest::getPrivateIp() const {
  return privateIp_;
}

void DescribeInstancesRequest::setPrivateIp(const std::string &privateIp) {
  privateIp_ = privateIp;
  setParameter(std::string("PrivateIp"), privateIp);
}

long DescribeInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

int DescribeInstancesRequest::getVpcCloudInsInfo() const {
  return vpcCloudInsInfo_;
}

void DescribeInstancesRequest::setVpcCloudInsInfo(int vpcCloudInsInfo) {
  vpcCloudInsInfo_ = vpcCloudInsInfo;
  setParameter(std::string("VpcCloudInsInfo"), std::to_string(vpcCloudInsInfo));
}

std::string DescribeInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeInstancesRequest::getArchitectureType() const {
  return architectureType_;
}

void DescribeInstancesRequest::setArchitectureType(const std::string &architectureType) {
  architectureType_ = architectureType;
  setParameter(std::string("ArchitectureType"), architectureType);
}

std::string DescribeInstancesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeInstancesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeInstancesRequest::getChargeType() const {
  return chargeType_;
}

void DescribeInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

