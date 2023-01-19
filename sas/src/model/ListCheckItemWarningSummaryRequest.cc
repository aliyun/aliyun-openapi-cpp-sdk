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

#include <alibabacloud/sas/model/ListCheckItemWarningSummaryRequest.h>

using AlibabaCloud::Sas::Model::ListCheckItemWarningSummaryRequest;

ListCheckItemWarningSummaryRequest::ListCheckItemWarningSummaryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListCheckItemWarningSummary") {
  setMethod(HttpRequest::Method::Post);
}

ListCheckItemWarningSummaryRequest::~ListCheckItemWarningSummaryRequest() {}

std::string ListCheckItemWarningSummaryRequest::getRiskType() const {
  return riskType_;
}

void ListCheckItemWarningSummaryRequest::setRiskType(const std::string &riskType) {
  riskType_ = riskType;
  setParameter(std::string("RiskType"), riskType);
}

std::string ListCheckItemWarningSummaryRequest::getContainerFieldName() const {
  return containerFieldName_;
}

void ListCheckItemWarningSummaryRequest::setContainerFieldName(const std::string &containerFieldName) {
  containerFieldName_ = containerFieldName;
  setParameter(std::string("ContainerFieldName"), containerFieldName);
}

std::string ListCheckItemWarningSummaryRequest::getCheckType() const {
  return checkType_;
}

void ListCheckItemWarningSummaryRequest::setCheckType(const std::string &checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), checkType);
}

std::string ListCheckItemWarningSummaryRequest::getContainerFieldValue() const {
  return containerFieldValue_;
}

void ListCheckItemWarningSummaryRequest::setContainerFieldValue(const std::string &containerFieldValue) {
  containerFieldValue_ = containerFieldValue;
  setParameter(std::string("ContainerFieldValue"), containerFieldValue);
}

int ListCheckItemWarningSummaryRequest::getPageSize() const {
  return pageSize_;
}

void ListCheckItemWarningSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCheckItemWarningSummaryRequest::getLang() const {
  return lang_;
}

void ListCheckItemWarningSummaryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int ListCheckItemWarningSummaryRequest::getCheckWarningStatus() const {
  return checkWarningStatus_;
}

void ListCheckItemWarningSummaryRequest::setCheckWarningStatus(int checkWarningStatus) {
  checkWarningStatus_ = checkWarningStatus;
  setParameter(std::string("CheckWarningStatus"), std::to_string(checkWarningStatus));
}

long ListCheckItemWarningSummaryRequest::getGroupId() const {
  return groupId_;
}

void ListCheckItemWarningSummaryRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), std::to_string(groupId));
}

int ListCheckItemWarningSummaryRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCheckItemWarningSummaryRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCheckItemWarningSummaryRequest::getCheckItemFuzzy() const {
  return checkItemFuzzy_;
}

void ListCheckItemWarningSummaryRequest::setCheckItemFuzzy(const std::string &checkItemFuzzy) {
  checkItemFuzzy_ = checkItemFuzzy;
  setParameter(std::string("CheckItemFuzzy"), checkItemFuzzy);
}

std::string ListCheckItemWarningSummaryRequest::getCheckLevel() const {
  return checkLevel_;
}

void ListCheckItemWarningSummaryRequest::setCheckLevel(const std::string &checkLevel) {
  checkLevel_ = checkLevel;
  setParameter(std::string("CheckLevel"), checkLevel);
}

