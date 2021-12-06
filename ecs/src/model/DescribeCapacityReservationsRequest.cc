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

#include <alibabacloud/ecs/model/DescribeCapacityReservationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCapacityReservationsRequest;

DescribeCapacityReservationsRequest::DescribeCapacityReservationsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeCapacityReservations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCapacityReservationsRequest::~DescribeCapacityReservationsRequest() {}

long DescribeCapacityReservationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCapacityReservationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCapacityReservationsRequest::getPlatform() const {
  return platform_;
}

void DescribeCapacityReservationsRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string DescribeCapacityReservationsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCapacityReservationsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCapacityReservationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCapacityReservationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCapacityReservationsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCapacityReservationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeCapacityReservationsRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeCapacityReservationsRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<DescribeCapacityReservationsRequest::Tag> DescribeCapacityReservationsRequest::getTag() const {
  return tag_;
}

void DescribeCapacityReservationsRequest::setTag(const std::vector<DescribeCapacityReservationsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeCapacityReservationsRequest::getInstanceChargeType() const {
  return instanceChargeType_;
}

void DescribeCapacityReservationsRequest::setInstanceChargeType(const std::string &instanceChargeType) {
  instanceChargeType_ = instanceChargeType;
  setParameter(std::string("InstanceChargeType"), instanceChargeType);
}

std::string DescribeCapacityReservationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCapacityReservationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCapacityReservationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCapacityReservationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCapacityReservationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCapacityReservationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCapacityReservationsRequest::getPrivatePoolOptionsIds() const {
  return privatePoolOptionsIds_;
}

void DescribeCapacityReservationsRequest::setPrivatePoolOptionsIds(const std::string &privatePoolOptionsIds) {
  privatePoolOptionsIds_ = privatePoolOptionsIds;
  setParameter(std::string("PrivatePoolOptions.Ids"), privatePoolOptionsIds);
}

int DescribeCapacityReservationsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCapacityReservationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeCapacityReservationsRequest::getZoneId() const {
  return zoneId_;
}

void DescribeCapacityReservationsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeCapacityReservationsRequest::getPackageType() const {
  return packageType_;
}

void DescribeCapacityReservationsRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

std::string DescribeCapacityReservationsRequest::getStatus() const {
  return status_;
}

void DescribeCapacityReservationsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

