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

#include <alibabacloud/polardb/model/DescribeDBInitializeVariableRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBInitializeVariableRequest;

DescribeDBInitializeVariableRequest::DescribeDBInitializeVariableRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBInitializeVariable") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInitializeVariableRequest::~DescribeDBInitializeVariableRequest() {}

long DescribeDBInitializeVariableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInitializeVariableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInitializeVariableRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInitializeVariableRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInitializeVariableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInitializeVariableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInitializeVariableRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBInitializeVariableRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBInitializeVariableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInitializeVariableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInitializeVariableRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInitializeVariableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

