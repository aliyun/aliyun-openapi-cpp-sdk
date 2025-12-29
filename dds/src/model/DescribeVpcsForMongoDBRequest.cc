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

#include <alibabacloud/dds/model/DescribeVpcsForMongoDBRequest.h>

using AlibabaCloud::Dds::Model::DescribeVpcsForMongoDBRequest;

DescribeVpcsForMongoDBRequest::DescribeVpcsForMongoDBRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeVpcsForMongoDB") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpcsForMongoDBRequest::~DescribeVpcsForMongoDBRequest() {}

long DescribeVpcsForMongoDBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpcsForMongoDBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVpcsForMongoDBRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpcsForMongoDBRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpcsForMongoDBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeVpcsForMongoDBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeVpcsForMongoDBRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeVpcsForMongoDBRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeVpcsForMongoDBRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpcsForMongoDBRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpcsForMongoDBRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpcsForMongoDBRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVpcsForMongoDBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpcsForMongoDBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpcsForMongoDBRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpcsForMongoDBRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVpcsForMongoDBRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpcsForMongoDBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpcsForMongoDBRequest::getZoneId() const {
  return zoneId_;
}

void DescribeVpcsForMongoDBRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

