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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheCustomInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTairKVCacheCustomInstancesRequest;

DescribeTairKVCacheCustomInstancesRequest::DescribeTairKVCacheCustomInstancesRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTairKVCacheCustomInstances") {
  setMethod(HttpRequest::Method::Get);
}

DescribeTairKVCacheCustomInstancesRequest::~DescribeTairKVCacheCustomInstancesRequest() {}

long DescribeTairKVCacheCustomInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTairKVCacheCustomInstancesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeTairKVCacheCustomInstancesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getNetworkType() const {
  return networkType_;
}

void DescribeTairKVCacheCustomInstancesRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeTairKVCacheCustomInstancesRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

int DescribeTairKVCacheCustomInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTairKVCacheCustomInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTairKVCacheCustomInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getExpired() const {
  return expired_;
}

void DescribeTairKVCacheCustomInstancesRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeTairKVCacheCustomInstancesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTairKVCacheCustomInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTairKVCacheCustomInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTairKVCacheCustomInstancesRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeTairKVCacheCustomInstancesRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<DescribeTairKVCacheCustomInstancesRequest::Tag> DescribeTairKVCacheCustomInstancesRequest::getTag() const {
  return tag_;
}

void DescribeTairKVCacheCustomInstancesRequest::setTag(const std::vector<DescribeTairKVCacheCustomInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeTairKVCacheCustomInstancesRequest::getInstanceStatus() const {
  return instanceStatus_;
}

void DescribeTairKVCacheCustomInstancesRequest::setInstanceStatus(const std::string &instanceStatus) {
  instanceStatus_ = instanceStatus;
  setParameter(std::string("InstanceStatus"), instanceStatus);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTairKVCacheCustomInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTairKVCacheCustomInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getPrivateIp() const {
  return privateIp_;
}

void DescribeTairKVCacheCustomInstancesRequest::setPrivateIp(const std::string &privateIp) {
  privateIp_ = privateIp;
  setParameter(std::string("PrivateIp"), privateIp);
}

long DescribeTairKVCacheCustomInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTairKVCacheCustomInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeTairKVCacheCustomInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeTairKVCacheCustomInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeTairKVCacheCustomInstancesRequest::getChargeType() const {
  return chargeType_;
}

void DescribeTairKVCacheCustomInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

