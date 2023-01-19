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

#include <alibabacloud/sas/model/ListCheckItemWarningMachineRequest.h>

using AlibabaCloud::Sas::Model::ListCheckItemWarningMachineRequest;

ListCheckItemWarningMachineRequest::ListCheckItemWarningMachineRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListCheckItemWarningMachine") {
  setMethod(HttpRequest::Method::Post);
}

ListCheckItemWarningMachineRequest::~ListCheckItemWarningMachineRequest() {}

std::string ListCheckItemWarningMachineRequest::getRiskType() const {
  return riskType_;
}

void ListCheckItemWarningMachineRequest::setRiskType(const std::string &riskType) {
  riskType_ = riskType;
  setParameter(std::string("RiskType"), riskType);
}

std::string ListCheckItemWarningMachineRequest::getRemark() const {
  return remark_;
}

void ListCheckItemWarningMachineRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ListCheckItemWarningMachineRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void ListCheckItemWarningMachineRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string ListCheckItemWarningMachineRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void ListCheckItemWarningMachineRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

int ListCheckItemWarningMachineRequest::getPageSize() const {
  return pageSize_;
}

void ListCheckItemWarningMachineRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCheckItemWarningMachineRequest::getLang() const {
  return lang_;
}

void ListCheckItemWarningMachineRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long ListCheckItemWarningMachineRequest::getCheckId() const {
  return checkId_;
}

void ListCheckItemWarningMachineRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

long ListCheckItemWarningMachineRequest::getGroupId() const {
  return groupId_;
}

void ListCheckItemWarningMachineRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int ListCheckItemWarningMachineRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCheckItemWarningMachineRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int ListCheckItemWarningMachineRequest::getStatus() const {
  return status_;
}

void ListCheckItemWarningMachineRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

