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

#include <alibabacloud/clickhouse/model/DescribeSynDbsRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeSynDbsRequest;

DescribeSynDbsRequest::DescribeSynDbsRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeSynDbs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynDbsRequest::~DescribeSynDbsRequest() {}

long DescribeSynDbsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSynDbsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeSynDbsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSynDbsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSynDbsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSynDbsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeSynDbsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSynDbsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSynDbsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSynDbsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSynDbsRequest::getDbClusterId() const {
  return dbClusterId_;
}

void DescribeSynDbsRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string DescribeSynDbsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSynDbsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSynDbsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynDbsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

