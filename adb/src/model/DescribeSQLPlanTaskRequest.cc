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

#include <alibabacloud/adb/model/DescribeSQLPlanTaskRequest.h>

using AlibabaCloud::Adb::Model::DescribeSQLPlanTaskRequest;

DescribeSQLPlanTaskRequest::DescribeSQLPlanTaskRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeSQLPlanTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLPlanTaskRequest::~DescribeSQLPlanTaskRequest() {}

long DescribeSQLPlanTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSQLPlanTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSQLPlanTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLPlanTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLPlanTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSQLPlanTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSQLPlanTaskRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSQLPlanTaskRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSQLPlanTaskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSQLPlanTaskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSQLPlanTaskRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSQLPlanTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSQLPlanTaskRequest::getProcessId() const {
  return processId_;
}

void DescribeSQLPlanTaskRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

std::string DescribeSQLPlanTaskRequest::getStageId() const {
  return stageId_;
}

void DescribeSQLPlanTaskRequest::setStageId(const std::string &stageId) {
  stageId_ = stageId;
  setParameter(std::string("StageId"), stageId);
}

