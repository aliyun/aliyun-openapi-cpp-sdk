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

#include <alibabacloud/rds/model/DescribeDBInstanceByTagsRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceByTagsRequest;

DescribeDBInstanceByTagsRequest::DescribeDBInstanceByTagsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceByTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceByTagsRequest::~DescribeDBInstanceByTagsRequest() {}

long DescribeDBInstanceByTagsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceByTagsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceByTagsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeDBInstanceByTagsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeDBInstanceByTagsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstanceByTagsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstanceByTagsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceByTagsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceByTagsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBInstanceByTagsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDBInstanceByTagsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstanceByTagsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstanceByTagsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceByTagsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceByTagsRequest::getProxyId() const {
  return proxyId_;
}

void DescribeDBInstanceByTagsRequest::setProxyId(const std::string &proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("proxyId"), proxyId);
}

std::string DescribeDBInstanceByTagsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceByTagsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceByTagsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceByTagsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceByTagsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceByTagsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

