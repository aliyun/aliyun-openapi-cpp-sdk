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

#include <alibabacloud/r-kvstore/model/DescribeClusterBackupListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeClusterBackupListRequest;

DescribeClusterBackupListRequest::DescribeClusterBackupListRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeClusterBackupList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeClusterBackupListRequest::~DescribeClusterBackupListRequest() {}

long DescribeClusterBackupListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeClusterBackupListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeClusterBackupListRequest::getStartTime() const {
  return startTime_;
}

void DescribeClusterBackupListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeClusterBackupListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeClusterBackupListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeClusterBackupListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeClusterBackupListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeClusterBackupListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeClusterBackupListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeClusterBackupListRequest::getRegionId() const {
  return regionId_;
}

void DescribeClusterBackupListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeClusterBackupListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeClusterBackupListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeClusterBackupListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeClusterBackupListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeClusterBackupListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeClusterBackupListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeClusterBackupListRequest::getEndTime() const {
  return endTime_;
}

void DescribeClusterBackupListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeClusterBackupListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeClusterBackupListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeClusterBackupListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeClusterBackupListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeClusterBackupListRequest::getNoShardBackup() const {
  return noShardBackup_;
}

void DescribeClusterBackupListRequest::setNoShardBackup(const std::string &noShardBackup) {
  noShardBackup_ = noShardBackup;
  setParameter(std::string("NoShardBackup"), noShardBackup);
}

std::string DescribeClusterBackupListRequest::getClusterBackupId() const {
  return clusterBackupId_;
}

void DescribeClusterBackupListRequest::setClusterBackupId(const std::string &clusterBackupId) {
  clusterBackupId_ = clusterBackupId;
  setParameter(std::string("ClusterBackupId"), clusterBackupId);
}

