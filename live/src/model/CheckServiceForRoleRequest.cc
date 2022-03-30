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

#include <alibabacloud/live/model/CheckServiceForRoleRequest.h>

using AlibabaCloud::Live::Model::CheckServiceForRoleRequest;

CheckServiceForRoleRequest::CheckServiceForRoleRequest()
    : RpcServiceRequest("live", "2016-11-01", "CheckServiceForRole") {
  setMethod(HttpRequest::Method::Post);
}

CheckServiceForRoleRequest::~CheckServiceForRoleRequest() {}

std::string CheckServiceForRoleRequest::getAccountId() const {
  return accountId_;
}

void CheckServiceForRoleRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string CheckServiceForRoleRequest::getSPIRegionId() const {
  return sPIRegionId_;
}

void CheckServiceForRoleRequest::setSPIRegionId(const std::string &sPIRegionId) {
  sPIRegionId_ = sPIRegionId;
  setParameter(std::string("SPIRegionId"), sPIRegionId);
}

std::string CheckServiceForRoleRequest::getRoleArn() const {
  return roleArn_;
}

void CheckServiceForRoleRequest::setRoleArn(const std::string &roleArn) {
  roleArn_ = roleArn;
  setParameter(std::string("RoleArn"), roleArn);
}

std::string CheckServiceForRoleRequest::getDeletionTaskId() const {
  return deletionTaskId_;
}

void CheckServiceForRoleRequest::setDeletionTaskId(const std::string &deletionTaskId) {
  deletionTaskId_ = deletionTaskId;
  setParameter(std::string("DeletionTaskId"), deletionTaskId);
}

std::string CheckServiceForRoleRequest::getServiceName() const {
  return serviceName_;
}

void CheckServiceForRoleRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

