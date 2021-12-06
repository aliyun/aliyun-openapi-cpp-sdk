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

#include <alibabacloud/ecs/model/DescribeCapacityReservationInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCapacityReservationInstancesRequest;

DescribeCapacityReservationInstancesRequest::DescribeCapacityReservationInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeCapacityReservationInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCapacityReservationInstancesRequest::~DescribeCapacityReservationInstancesRequest() {}

long DescribeCapacityReservationInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCapacityReservationInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCapacityReservationInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeCapacityReservationInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCapacityReservationInstancesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCapacityReservationInstancesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeCapacityReservationInstancesRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void DescribeCapacityReservationInstancesRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

std::string DescribeCapacityReservationInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCapacityReservationInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCapacityReservationInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCapacityReservationInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCapacityReservationInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCapacityReservationInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeCapacityReservationInstancesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCapacityReservationInstancesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeCapacityReservationInstancesRequest::getPackageType() const {
  return packageType_;
}

void DescribeCapacityReservationInstancesRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setParameter(std::string("PackageType"), packageType);
}

