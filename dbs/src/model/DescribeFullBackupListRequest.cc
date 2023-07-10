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

#include <alibabacloud/dbs/model/DescribeFullBackupListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeFullBackupListRequest;

DescribeFullBackupListRequest::DescribeFullBackupListRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "DescribeFullBackupList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFullBackupListRequest::~DescribeFullBackupListRequest() {}

std::string DescribeFullBackupListRequest::getClientToken() const {
  return clientToken_;
}

void DescribeFullBackupListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeFullBackupListRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void DescribeFullBackupListRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

int DescribeFullBackupListRequest::getPageNum() const {
  return pageNum_;
}

void DescribeFullBackupListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long DescribeFullBackupListRequest::getStartTimestamp() const {
  return startTimestamp_;
}

void DescribeFullBackupListRequest::setStartTimestamp(long startTimestamp) {
  startTimestamp_ = startTimestamp;
  setParameter(std::string("StartTimestamp"), std::to_string(startTimestamp));
}

long DescribeFullBackupListRequest::getEndTimestamp() const {
  return endTimestamp_;
}

void DescribeFullBackupListRequest::setEndTimestamp(long endTimestamp) {
  endTimestamp_ = endTimestamp;
  setParameter(std::string("EndTimestamp"), std::to_string(endTimestamp));
}

bool DescribeFullBackupListRequest::getShowStorageType() const {
  return showStorageType_;
}

void DescribeFullBackupListRequest::setShowStorageType(bool showStorageType) {
  showStorageType_ = showStorageType;
  setParameter(std::string("ShowStorageType"), showStorageType ? "true" : "false");
}

int DescribeFullBackupListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeFullBackupListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeFullBackupListRequest::getBackupSetId() const {
  return backupSetId_;
}

void DescribeFullBackupListRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

std::string DescribeFullBackupListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeFullBackupListRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

