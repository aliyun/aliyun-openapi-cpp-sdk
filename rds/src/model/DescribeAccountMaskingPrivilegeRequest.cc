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

#include <alibabacloud/rds/model/DescribeAccountMaskingPrivilegeRequest.h>

using AlibabaCloud::Rds::Model::DescribeAccountMaskingPrivilegeRequest;

DescribeAccountMaskingPrivilegeRequest::DescribeAccountMaskingPrivilegeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeAccountMaskingPrivilege") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccountMaskingPrivilegeRequest::~DescribeAccountMaskingPrivilegeRequest() {}

std::string DescribeAccountMaskingPrivilegeRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeAccountMaskingPrivilegeRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeAccountMaskingPrivilegeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAccountMaskingPrivilegeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAccountMaskingPrivilegeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAccountMaskingPrivilegeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAccountMaskingPrivilegeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAccountMaskingPrivilegeRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeAccountMaskingPrivilegeRequest::getDBName() const {
  return dBName_;
}

void DescribeAccountMaskingPrivilegeRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DescribeAccountMaskingPrivilegeRequest::getRegionId() const {
  return regionId_;
}

void DescribeAccountMaskingPrivilegeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeAccountMaskingPrivilegeRequest::getUserName() const {
  return userName_;
}

void DescribeAccountMaskingPrivilegeRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

