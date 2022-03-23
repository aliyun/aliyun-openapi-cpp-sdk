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

#include <alibabacloud/r-kvstore/model/DescribeDBInstanceNetInfoRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeDBInstanceNetInfoRequest;

DescribeDBInstanceNetInfoRequest::DescribeDBInstanceNetInfoRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeDBInstanceNetInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceNetInfoRequest::~DescribeDBInstanceNetInfoRequest() {}

long DescribeDBInstanceNetInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceNetInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceNetInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceNetInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceNetInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDBInstanceNetInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDBInstanceNetInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceNetInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceNetInfoRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceNetInfoRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceNetInfoRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceNetInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstanceNetInfoRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDBInstanceNetInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

