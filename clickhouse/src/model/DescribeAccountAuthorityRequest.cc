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

#include <alibabacloud/clickhouse/model/DescribeAccountAuthorityRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeAccountAuthorityRequest;

DescribeAccountAuthorityRequest::DescribeAccountAuthorityRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeAccountAuthority") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccountAuthorityRequest::~DescribeAccountAuthorityRequest() {}

long DescribeAccountAuthorityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAccountAuthorityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAccountAuthorityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAccountAuthorityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAccountAuthorityRequest::getAccountName() const {
  return accountName_;
}

void DescribeAccountAuthorityRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DescribeAccountAuthorityRequest::getRegionId() const {
  return regionId_;
}

void DescribeAccountAuthorityRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAccountAuthorityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAccountAuthorityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAccountAuthorityRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAccountAuthorityRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAccountAuthorityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAccountAuthorityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAccountAuthorityRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAccountAuthorityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

