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

#include <alibabacloud/ecs/model/DescribeInstanceModificationPriceRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceModificationPriceRequest;

DescribeInstanceModificationPriceRequest::DescribeInstanceModificationPriceRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceModificationPrice") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceModificationPriceRequest::~DescribeInstanceModificationPriceRequest() {}

long DescribeInstanceModificationPriceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceModificationPriceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceModificationPriceRequest::getSystemDiskCategory() const {
  return systemDiskCategory_;
}

void DescribeInstanceModificationPriceRequest::setSystemDiskCategory(const std::string &systemDiskCategory) {
  systemDiskCategory_ = systemDiskCategory;
  setParameter(std::string("SystemDisk.Category"), systemDiskCategory);
}

std::string DescribeInstanceModificationPriceRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceModificationPriceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceModificationPriceRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeInstanceModificationPriceRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeInstanceModificationPriceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceModificationPriceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceModificationPriceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceModificationPriceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceModificationPriceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceModificationPriceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeInstanceModificationPriceRequest::DataDisk> DescribeInstanceModificationPriceRequest::getDataDisk() const {
  return dataDisk_;
}

void DescribeInstanceModificationPriceRequest::setDataDisk(const std::vector<DescribeInstanceModificationPriceRequest::DataDisk> &dataDisk) {
  dataDisk_ = dataDisk;
  for(int dep1 = 0; dep1 != dataDisk.size(); dep1++) {
  auto dataDiskObj = dataDisk.at(dep1);
  std::string dataDiskObjStr = std::string("DataDisk") + "." + std::to_string(dep1 + 1);
    setParameter(dataDiskObjStr + ".PerformanceLevel", dataDiskObj.performanceLevel);
    setParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
    setParameter(dataDiskObjStr + ".Category", dataDiskObj.category);
  }
}

DescribeInstanceModificationPriceRequest::PromotionOptions DescribeInstanceModificationPriceRequest::getPromotionOptions() const {
  return promotionOptions_;
}

void DescribeInstanceModificationPriceRequest::setPromotionOptions(const DescribeInstanceModificationPriceRequest::PromotionOptions &promotionOptions) {
  promotionOptions_ = promotionOptions;
  setParameter(std::string("PromotionOptions") + ".CouponNo", promotionOptions.couponNo);
}

std::string DescribeInstanceModificationPriceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceModificationPriceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

