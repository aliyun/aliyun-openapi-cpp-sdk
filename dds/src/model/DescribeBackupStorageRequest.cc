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

#include <alibabacloud/dds/model/DescribeBackupStorageRequest.h>

using AlibabaCloud::Dds::Model::DescribeBackupStorageRequest;

DescribeBackupStorageRequest::DescribeBackupStorageRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeBackupStorage") {
  setMethod(HttpRequest::Method::Get);
}

DescribeBackupStorageRequest::~DescribeBackupStorageRequest() {}

long DescribeBackupStorageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupStorageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupStorageRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackupStorageRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackupStorageRequest::getRegionId() const {
  return regionId_;
}

void DescribeBackupStorageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeBackupStorageRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeBackupStorageRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeBackupStorageRequest::getNodeId() const {
  return nodeId_;
}

void DescribeBackupStorageRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeBackupStorageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBackupStorageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBackupStorageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBackupStorageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeBackupStorageRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackupStorageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

