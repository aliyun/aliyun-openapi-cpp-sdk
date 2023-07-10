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

#include <alibabacloud/dbs/model/DescribeBackupSetDownloadTaskListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeBackupSetDownloadTaskListRequest;

DescribeBackupSetDownloadTaskListRequest::DescribeBackupSetDownloadTaskListRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "DescribeBackupSetDownloadTaskList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupSetDownloadTaskListRequest::~DescribeBackupSetDownloadTaskListRequest() {}

std::string DescribeBackupSetDownloadTaskListRequest::getClientToken() const {
  return clientToken_;
}

void DescribeBackupSetDownloadTaskListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeBackupSetDownloadTaskListRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void DescribeBackupSetDownloadTaskListRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

int DescribeBackupSetDownloadTaskListRequest::getPageNum() const {
  return pageNum_;
}

void DescribeBackupSetDownloadTaskListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int DescribeBackupSetDownloadTaskListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupSetDownloadTaskListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBackupSetDownloadTaskListRequest::getBackupSetDownloadTaskId() const {
  return backupSetDownloadTaskId_;
}

void DescribeBackupSetDownloadTaskListRequest::setBackupSetDownloadTaskId(const std::string &backupSetDownloadTaskId) {
  backupSetDownloadTaskId_ = backupSetDownloadTaskId;
  setParameter(std::string("BackupSetDownloadTaskId"), backupSetDownloadTaskId);
}

std::string DescribeBackupSetDownloadTaskListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackupSetDownloadTaskListRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

