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

#include <alibabacloud/clickhouse/model/DescribeProcessListRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeProcessListRequest;

DescribeProcessListRequest::DescribeProcessListRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeProcessList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProcessListRequest::~DescribeProcessListRequest() {}

long DescribeProcessListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeProcessListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeProcessListRequest::getInitialQueryId() const {
  return initialQueryId_;
}

void DescribeProcessListRequest::setInitialQueryId(const std::string &initialQueryId) {
  initialQueryId_ = initialQueryId;
  setParameter(std::string("InitialQueryId"), initialQueryId);
}

int DescribeProcessListRequest::getQueryDurationMs() const {
  return queryDurationMs_;
}

void DescribeProcessListRequest::setQueryDurationMs(int queryDurationMs) {
  queryDurationMs_ = queryDurationMs;
  setParameter(std::string("QueryDurationMs"), std::to_string(queryDurationMs));
}

int DescribeProcessListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeProcessListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeProcessListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeProcessListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeProcessListRequest::getRegionId() const {
  return regionId_;
}

void DescribeProcessListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeProcessListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeProcessListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeProcessListRequest::getInitialUser() const {
  return initialUser_;
}

void DescribeProcessListRequest::setInitialUser(const std::string &initialUser) {
  initialUser_ = initialUser;
  setParameter(std::string("InitialUser"), initialUser);
}

std::string DescribeProcessListRequest::getKeyword() const {
  return keyword_;
}

void DescribeProcessListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeProcessListRequest::getOrder() const {
  return order_;
}

void DescribeProcessListRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeProcessListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeProcessListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeProcessListRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeProcessListRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeProcessListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeProcessListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeProcessListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeProcessListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

