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

#include <alibabacloud/sas/model/DescribeCheckWarningsRequest.h>

using AlibabaCloud::Sas::Model::DescribeCheckWarningsRequest;

DescribeCheckWarningsRequest::DescribeCheckWarningsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeCheckWarnings") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCheckWarningsRequest::~DescribeCheckWarningsRequest() {}

std::string DescribeCheckWarningsRequest::getContainerName() const {
  return containerName_;
}

void DescribeCheckWarningsRequest::setContainerName(const std::string &containerName) {
  containerName_ = containerName;
  setParameter(std::string("ContainerName"), containerName);
}

std::string DescribeCheckWarningsRequest::getUuid() const {
  return uuid_;
}

void DescribeCheckWarningsRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeCheckWarningsRequest::getCheckType() const {
  return checkType_;
}

void DescribeCheckWarningsRequest::setCheckType(const std::string &checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), checkType);
}

std::string DescribeCheckWarningsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCheckWarningsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeCheckWarningsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCheckWarningsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCheckWarningsRequest::getLang() const {
  return lang_;
}

void DescribeCheckWarningsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeCheckWarningsRequest::getCheckId() const {
  return checkId_;
}

void DescribeCheckWarningsRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

int DescribeCheckWarningsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCheckWarningsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long DescribeCheckWarningsRequest::getRiskId() const {
  return riskId_;
}

void DescribeCheckWarningsRequest::setRiskId(long riskId) {
  riskId_ = riskId;
  setParameter(std::string("RiskId"), std::to_string(riskId));
}

int DescribeCheckWarningsRequest::getRiskStatus() const {
  return riskStatus_;
}

void DescribeCheckWarningsRequest::setRiskStatus(int riskStatus) {
  riskStatus_ = riskStatus;
  setParameter(std::string("RiskStatus"), std::to_string(riskStatus));
}

