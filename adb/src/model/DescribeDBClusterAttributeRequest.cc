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

#include <alibabacloud/adb/model/DescribeDBClusterAttributeRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterAttributeRequest;

DescribeDBClusterAttributeRequest::DescribeDBClusterAttributeRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDBClusterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterAttributeRequest::~DescribeDBClusterAttributeRequest() {}

long DescribeDBClusterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterAttributeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterAttributeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

