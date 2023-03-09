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

#include <alibabacloud/adb/model/DescribeSQLPlanRequest.h>

using AlibabaCloud::Adb::Model::DescribeSQLPlanRequest;

DescribeSQLPlanRequest::DescribeSQLPlanRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeSQLPlan") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLPlanRequest::~DescribeSQLPlanRequest() {}

long DescribeSQLPlanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSQLPlanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSQLPlanRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLPlanRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLPlanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSQLPlanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSQLPlanRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSQLPlanRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSQLPlanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSQLPlanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSQLPlanRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSQLPlanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSQLPlanRequest::getProcessId() const {
  return processId_;
}

void DescribeSQLPlanRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

