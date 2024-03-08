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

#include <alibabacloud/dds/model/DescribeInstanceRecoverTimeRequest.h>

using AlibabaCloud::Dds::Model::DescribeInstanceRecoverTimeRequest;

DescribeInstanceRecoverTimeRequest::DescribeInstanceRecoverTimeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeInstanceRecoverTime") {
  setMethod(HttpRequest::Method::Get);
}

DescribeInstanceRecoverTimeRequest::~DescribeInstanceRecoverTimeRequest() {}

long DescribeInstanceRecoverTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInstanceRecoverTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInstanceRecoverTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeInstanceRecoverTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeInstanceRecoverTimeRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeInstanceRecoverTimeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeInstanceRecoverTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeInstanceRecoverTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeInstanceRecoverTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInstanceRecoverTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInstanceRecoverTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInstanceRecoverTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInstanceRecoverTimeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInstanceRecoverTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

