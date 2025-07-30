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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheInferInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTairKVCacheInferInstancesRequest;

DescribeTairKVCacheInferInstancesRequest::DescribeTairKVCacheInferInstancesRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTairKVCacheInferInstances") {
  setMethod(HttpRequest::Method::Get);
}

DescribeTairKVCacheInferInstancesRequest::~DescribeTairKVCacheInferInstancesRequest() {}

long DescribeTairKVCacheInferInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTairKVCacheInferInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTairKVCacheInferInstancesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeTairKVCacheInferInstancesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string DescribeTairKVCacheInferInstancesRequest::getNetworkType() const {
  return networkType_;
}

void DescribeTairKVCacheInferInstancesRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::string DescribeTairKVCacheInferInstancesRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeTairKVCacheInferInstancesRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

int DescribeTairKVCacheInferInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTairKVCacheInferInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTairKVCacheInferInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTairKVCacheInferInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTairKVCacheInferInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeTairKVCacheInferInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeTairKVCacheInferInstancesRequest::getExpired() const {
  return expired_;
}

void DescribeTairKVCacheInferInstancesRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeTairKVCacheInferInstancesRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeTairKVCacheInferInstancesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeTairKVCacheInferInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeTairKVCacheInferInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTairKVCacheInferInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTairKVCacheInferInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeTairKVCacheInferInstancesRequest::Tag> DescribeTairKVCacheInferInstancesRequest::getTag() const {
  return tag_;
}

void DescribeTairKVCacheInferInstancesRequest::setTag(const std::vector<DescribeTairKVCacheInferInstancesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeTairKVCacheInferInstancesRequest::getInstanceStatus() const {
  return instanceStatus_;
}

void DescribeTairKVCacheInferInstancesRequest::setInstanceStatus(const std::string &instanceStatus) {
  instanceStatus_ = instanceStatus;
  setParameter(std::string("InstanceStatus"), instanceStatus);
}

std::string DescribeTairKVCacheInferInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTairKVCacheInferInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTairKVCacheInferInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTairKVCacheInferInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeTairKVCacheInferInstancesRequest::getPrivateIp() const {
  return privateIp_;
}

void DescribeTairKVCacheInferInstancesRequest::setPrivateIp(const std::string &privateIp) {
  privateIp_ = privateIp;
  setParameter(std::string("PrivateIp"), privateIp);
}

long DescribeTairKVCacheInferInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTairKVCacheInferInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTairKVCacheInferInstancesRequest::getVSwitchId() const {
  return vSwitchId_;
}

void DescribeTairKVCacheInferInstancesRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string DescribeTairKVCacheInferInstancesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeTairKVCacheInferInstancesRequest::setInstanceIds(const std::string &instanceIds) {
  instanceIds_ = instanceIds;
  setParameter(std::string("InstanceIds"), instanceIds);
}

std::string DescribeTairKVCacheInferInstancesRequest::getVpcId() const {
  return vpcId_;
}

void DescribeTairKVCacheInferInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeTairKVCacheInferInstancesRequest::getZoneId() const {
  return zoneId_;
}

void DescribeTairKVCacheInferInstancesRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeTairKVCacheInferInstancesRequest::getChargeType() const {
  return chargeType_;
}

void DescribeTairKVCacheInferInstancesRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

