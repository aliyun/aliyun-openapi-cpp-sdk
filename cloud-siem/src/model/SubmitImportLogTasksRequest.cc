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

#include <alibabacloud/cloud-siem/model/SubmitImportLogTasksRequest.h>

using AlibabaCloud::Cloud_siem::Model::SubmitImportLogTasksRequest;

SubmitImportLogTasksRequest::SubmitImportLogTasksRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "SubmitImportLogTasks") {
  setMethod(HttpRequest::Method::Post);
}

SubmitImportLogTasksRequest::~SubmitImportLogTasksRequest() {}

std::string SubmitImportLogTasksRequest::getCloudCode() const {
  return cloudCode_;
}

void SubmitImportLogTasksRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

long SubmitImportLogTasksRequest::getRoleFor() const {
  return roleFor_;
}

void SubmitImportLogTasksRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string SubmitImportLogTasksRequest::getRegionId() const {
  return regionId_;
}

void SubmitImportLogTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int SubmitImportLogTasksRequest::getRoleType() const {
  return roleType_;
}

void SubmitImportLogTasksRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string SubmitImportLogTasksRequest::getLogCodes() const {
  return logCodes_;
}

void SubmitImportLogTasksRequest::setLogCodes(const std::string &logCodes) {
  logCodes_ = logCodes;
  setBodyParameter(std::string("LogCodes"), logCodes);
}

std::string SubmitImportLogTasksRequest::getProdCode() const {
  return prodCode_;
}

void SubmitImportLogTasksRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setBodyParameter(std::string("ProdCode"), prodCode);
}

int SubmitImportLogTasksRequest::getAutoImported() const {
  return autoImported_;
}

void SubmitImportLogTasksRequest::setAutoImported(int autoImported) {
  autoImported_ = autoImported;
  setBodyParameter(std::string("AutoImported"), std::to_string(autoImported));
}

std::string SubmitImportLogTasksRequest::getAccounts() const {
  return accounts_;
}

void SubmitImportLogTasksRequest::setAccounts(const std::string &accounts) {
  accounts_ = accounts;
  setBodyParameter(std::string("Accounts"), accounts);
}

