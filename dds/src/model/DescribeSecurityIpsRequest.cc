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

#include <alibabacloud/dds/model/DescribeSecurityIpsRequest.h>

using AlibabaCloud::Dds::Model::DescribeSecurityIpsRequest;

DescribeSecurityIpsRequest::DescribeSecurityIpsRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeSecurityIps") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSecurityIpsRequest::~DescribeSecurityIpsRequest() {}

long DescribeSecurityIpsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSecurityIpsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeSecurityIpsRequest::getShowHDMIps() const {
  return showHDMIps_;
}

void DescribeSecurityIpsRequest::setShowHDMIps(bool showHDMIps) {
  showHDMIps_ = showHDMIps;
  setParameter(std::string("ShowHDMIps"), showHDMIps ? "true" : "false");
}

std::string DescribeSecurityIpsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSecurityIpsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSecurityIpsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSecurityIpsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSecurityIpsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSecurityIpsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSecurityIpsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSecurityIpsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSecurityIpsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSecurityIpsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

