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

#include <alibabacloud/polardb/model/DescribeAvailableCrossRegionsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeAvailableCrossRegionsRequest;

DescribeAvailableCrossRegionsRequest::DescribeAvailableCrossRegionsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeAvailableCrossRegions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableCrossRegionsRequest::~DescribeAvailableCrossRegionsRequest() {}

long DescribeAvailableCrossRegionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableCrossRegionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailableCrossRegionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableCrossRegionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableCrossRegionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableCrossRegionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailableCrossRegionsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAvailableCrossRegionsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAvailableCrossRegionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailableCrossRegionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAvailableCrossRegionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableCrossRegionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

