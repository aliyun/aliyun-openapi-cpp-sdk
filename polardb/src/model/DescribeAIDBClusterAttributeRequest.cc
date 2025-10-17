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

#include <alibabacloud/polardb/model/DescribeAIDBClusterAttributeRequest.h>

using AlibabaCloud::Polardb::Model::DescribeAIDBClusterAttributeRequest;

DescribeAIDBClusterAttributeRequest::DescribeAIDBClusterAttributeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeAIDBClusterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAIDBClusterAttributeRequest::~DescribeAIDBClusterAttributeRequest() {}

long DescribeAIDBClusterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAIDBClusterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAIDBClusterAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAIDBClusterAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAIDBClusterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAIDBClusterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAIDBClusterAttributeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAIDBClusterAttributeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAIDBClusterAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAIDBClusterAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAIDBClusterAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAIDBClusterAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

