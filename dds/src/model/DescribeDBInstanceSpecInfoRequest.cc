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

#include <alibabacloud/dds/model/DescribeDBInstanceSpecInfoRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstanceSpecInfoRequest;

DescribeDBInstanceSpecInfoRequest::DescribeDBInstanceSpecInfoRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstanceSpecInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceSpecInfoRequest::~DescribeDBInstanceSpecInfoRequest() {}

long DescribeDBInstanceSpecInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceSpecInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceSpecInfoRequest::getInstanceClass() const {
  return instanceClass_;
}

void DescribeDBInstanceSpecInfoRequest::setInstanceClass(const std::string &instanceClass) {
  instanceClass_ = instanceClass;
  setParameter(std::string("InstanceClass"), instanceClass);
}

std::string DescribeDBInstanceSpecInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceSpecInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceSpecInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDBInstanceSpecInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDBInstanceSpecInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceSpecInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceSpecInfoRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceSpecInfoRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceSpecInfoRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceSpecInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

