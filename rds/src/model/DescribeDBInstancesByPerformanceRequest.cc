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

#include <alibabacloud/rds/model/DescribeDBInstancesByPerformanceRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancesByPerformanceRequest;

DescribeDBInstancesByPerformanceRequest::DescribeDBInstancesByPerformanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancesByPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesByPerformanceRequest::~DescribeDBInstancesByPerformanceRequest() {}

std::string DescribeDBInstancesByPerformanceRequest::getTag4value() const {
  return tag4value_;
}

void DescribeDBInstancesByPerformanceRequest::setTag4value(const std::string &tag4value) {
  tag4value_ = tag4value;
  setParameter(std::string("Tag.4.value"), tag4value);
}

long DescribeDBInstancesByPerformanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstancesByPerformanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancesByPerformanceRequest::getTag2key() const {
  return tag2key_;
}

void DescribeDBInstancesByPerformanceRequest::setTag2key(const std::string &tag2key) {
  tag2key_ = tag2key;
  setParameter(std::string("Tag.2.key"), tag2key);
}

std::string DescribeDBInstancesByPerformanceRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBInstancesByPerformanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag3key() const {
  return tag3key_;
}

void DescribeDBInstancesByPerformanceRequest::setTag3key(const std::string &tag3key) {
  tag3key_ = tag3key;
  setParameter(std::string("Tag.3.key"), tag3key);
}

int DescribeDBInstancesByPerformanceRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstancesByPerformanceRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstancesByPerformanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstancesByPerformanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag1value() const {
  return tag1value_;
}

void DescribeDBInstancesByPerformanceRequest::setTag1value(const std::string &tag1value) {
  tag1value_ = tag1value;
  setParameter(std::string("Tag.1.value"), tag1value);
}

std::string DescribeDBInstancesByPerformanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstancesByPerformanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstancesByPerformanceRequest::getSortKey() const {
  return sortKey_;
}

void DescribeDBInstancesByPerformanceRequest::setSortKey(const std::string &sortKey) {
  sortKey_ = sortKey;
  setParameter(std::string("SortKey"), sortKey);
}

std::string DescribeDBInstancesByPerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstancesByPerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDBInstancesByPerformanceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstancesByPerformanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstancesByPerformanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstancesByPerformanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag3value() const {
  return tag3value_;
}

void DescribeDBInstancesByPerformanceRequest::setTag3value(const std::string &tag3value) {
  tag3value_ = tag3value;
  setParameter(std::string("Tag.3.value"), tag3value);
}

std::string DescribeDBInstancesByPerformanceRequest::getProxyId() const {
  return proxyId_;
}

void DescribeDBInstancesByPerformanceRequest::setProxyId(const std::string &proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("proxyId"), proxyId);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag5key() const {
  return tag5key_;
}

void DescribeDBInstancesByPerformanceRequest::setTag5key(const std::string &tag5key) {
  tag5key_ = tag5key;
  setParameter(std::string("Tag.5.key"), tag5key);
}

std::string DescribeDBInstancesByPerformanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstancesByPerformanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstancesByPerformanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstancesByPerformanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstancesByPerformanceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstancesByPerformanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstancesByPerformanceRequest::getTag5value() const {
  return tag5value_;
}

void DescribeDBInstancesByPerformanceRequest::setTag5value(const std::string &tag5value) {
  tag5value_ = tag5value;
  setParameter(std::string("Tag.5.value"), tag5value);
}

std::string DescribeDBInstancesByPerformanceRequest::getTags() const {
  return tags_;
}

void DescribeDBInstancesByPerformanceRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag1key() const {
  return tag1key_;
}

void DescribeDBInstancesByPerformanceRequest::setTag1key(const std::string &tag1key) {
  tag1key_ = tag1key;
  setParameter(std::string("Tag.1.key"), tag1key);
}

std::string DescribeDBInstancesByPerformanceRequest::getSortMethod() const {
  return sortMethod_;
}

void DescribeDBInstancesByPerformanceRequest::setSortMethod(const std::string &sortMethod) {
  sortMethod_ = sortMethod;
  setParameter(std::string("SortMethod"), sortMethod);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag2value() const {
  return tag2value_;
}

void DescribeDBInstancesByPerformanceRequest::setTag2value(const std::string &tag2value) {
  tag2value_ = tag2value;
  setParameter(std::string("Tag.2.value"), tag2value);
}

std::string DescribeDBInstancesByPerformanceRequest::getTag4key() const {
  return tag4key_;
}

void DescribeDBInstancesByPerformanceRequest::setTag4key(const std::string &tag4key) {
  tag4key_ = tag4key;
  setParameter(std::string("Tag.4.key"), tag4key);
}

