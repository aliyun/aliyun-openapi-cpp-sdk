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

#include <alibabacloud/dbs/model/DescribePreCheckProgressListRequest.h>

using AlibabaCloud::Dbs::Model::DescribePreCheckProgressListRequest;

DescribePreCheckProgressListRequest::DescribePreCheckProgressListRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "DescribePreCheckProgressList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePreCheckProgressListRequest::~DescribePreCheckProgressListRequest() {}

std::string DescribePreCheckProgressListRequest::getClientToken() const {
  return clientToken_;
}

void DescribePreCheckProgressListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribePreCheckProgressListRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void DescribePreCheckProgressListRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string DescribePreCheckProgressListRequest::getRestoreTaskId() const {
  return restoreTaskId_;
}

void DescribePreCheckProgressListRequest::setRestoreTaskId(const std::string &restoreTaskId) {
  restoreTaskId_ = restoreTaskId;
  setParameter(std::string("RestoreTaskId"), restoreTaskId);
}

std::string DescribePreCheckProgressListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePreCheckProgressListRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

