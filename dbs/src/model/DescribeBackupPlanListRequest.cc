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

#include <alibabacloud/dbs/model/DescribeBackupPlanListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeBackupPlanListRequest;

DescribeBackupPlanListRequest::DescribeBackupPlanListRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "DescribeBackupPlanList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupPlanListRequest::~DescribeBackupPlanListRequest() {}

std::string DescribeBackupPlanListRequest::getClientToken() const {
  return clientToken_;
}

void DescribeBackupPlanListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeBackupPlanListRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void DescribeBackupPlanListRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

int DescribeBackupPlanListRequest::getPageNum() const {
  return pageNum_;
}

void DescribeBackupPlanListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeBackupPlanListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeBackupPlanListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeBackupPlanListRequest::getBackupPlanStatus() const {
  return backupPlanStatus_;
}

void DescribeBackupPlanListRequest::setBackupPlanStatus(const std::string &backupPlanStatus) {
  backupPlanStatus_ = backupPlanStatus;
  setParameter(std::string("BackupPlanStatus"), backupPlanStatus);
}

int DescribeBackupPlanListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupPlanListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBackupPlanListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackupPlanListRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeBackupPlanListRequest::getBackupPlanName() const {
  return backupPlanName_;
}

void DescribeBackupPlanListRequest::setBackupPlanName(const std::string &backupPlanName) {
  backupPlanName_ = backupPlanName;
  setParameter(std::string("BackupPlanName"), backupPlanName);
}

std::string DescribeBackupPlanListRequest::getRegion() const {
  return region_;
}

void DescribeBackupPlanListRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

