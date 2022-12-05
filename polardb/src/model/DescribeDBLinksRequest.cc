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

#include <alibabacloud/polardb/model/DescribeDBLinksRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBLinksRequest;

DescribeDBLinksRequest::DescribeDBLinksRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBLinks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBLinksRequest::~DescribeDBLinksRequest() {}

long DescribeDBLinksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBLinksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBLinksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBLinksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBLinksRequest::getDBLinkName() const {
  return dBLinkName_;
}

void DescribeDBLinksRequest::setDBLinkName(const std::string &dBLinkName) {
  dBLinkName_ = dBLinkName;
  setParameter(std::string("DBLinkName"), dBLinkName);
}

std::string DescribeDBLinksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBLinksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBLinksRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBLinksRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBLinksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBLinksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBLinksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBLinksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

