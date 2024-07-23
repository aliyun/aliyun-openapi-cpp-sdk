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

#include <alibabacloud/rds/model/DescribeHostWebShellRequest.h>

using AlibabaCloud::Rds::Model::DescribeHostWebShellRequest;

DescribeHostWebShellRequest::DescribeHostWebShellRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeHostWebShell") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHostWebShellRequest::~DescribeHostWebShellRequest() {}

long DescribeHostWebShellRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeHostWebShellRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeHostWebShellRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHostWebShellRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHostWebShellRequest::getHostName() const {
  return hostName_;
}

void DescribeHostWebShellRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string DescribeHostWebShellRequest::getAccountName() const {
  return accountName_;
}

void DescribeHostWebShellRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DescribeHostWebShellRequest::getRegionId() const {
  return regionId_;
}

void DescribeHostWebShellRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeHostWebShellRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeHostWebShellRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeHostWebShellRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeHostWebShellRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeHostWebShellRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHostWebShellRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHostWebShellRequest::getAccountPassword() const {
  return accountPassword_;
}

void DescribeHostWebShellRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

