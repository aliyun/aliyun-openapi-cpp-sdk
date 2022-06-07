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

#include <alibabacloud/adb/model/DescribeTableStatisticsRequest.h>

using AlibabaCloud::Adb::Model::DescribeTableStatisticsRequest;

DescribeTableStatisticsRequest::DescribeTableStatisticsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeTableStatistics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTableStatisticsRequest::~DescribeTableStatisticsRequest() {}

long DescribeTableStatisticsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTableStatisticsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeTableStatisticsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTableStatisticsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTableStatisticsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTableStatisticsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeTableStatisticsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTableStatisticsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTableStatisticsRequest::getOrder() const {
  return order_;
}

void DescribeTableStatisticsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeTableStatisticsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTableStatisticsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTableStatisticsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeTableStatisticsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeTableStatisticsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTableStatisticsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTableStatisticsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTableStatisticsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

