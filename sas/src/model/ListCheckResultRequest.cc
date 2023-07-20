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

#include <alibabacloud/sas/model/ListCheckResultRequest.h>

using AlibabaCloud::Sas::Model::ListCheckResultRequest;

ListCheckResultRequest::ListCheckResultRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListCheckResult") {
  setMethod(HttpRequest::Method::Post);
}

ListCheckResultRequest::~ListCheckResultRequest() {}

std::vector<std::string> ListCheckResultRequest::getInstanceSubTypes() const {
  return instanceSubTypes_;
}

void ListCheckResultRequest::setInstanceSubTypes(const std::vector<std::string> &instanceSubTypes) {
  instanceSubTypes_ = instanceSubTypes;
}

std::vector<long> ListCheckResultRequest::getStandardIds() const {
  return standardIds_;
}

void ListCheckResultRequest::setStandardIds(const std::vector<long> &standardIds) {
  standardIds_ = standardIds;
}

std::vector<std::string> ListCheckResultRequest::getRiskLevels() const {
  return riskLevels_;
}

void ListCheckResultRequest::setRiskLevels(const std::vector<std::string> &riskLevels) {
  riskLevels_ = riskLevels;
}

std::vector<std::string> ListCheckResultRequest::getInstanceTypes() const {
  return instanceTypes_;
}

void ListCheckResultRequest::setInstanceTypes(const std::vector<std::string> &instanceTypes) {
  instanceTypes_ = instanceTypes;
}

bool ListCheckResultRequest::getCustomParam() const {
  return customParam_;
}

void ListCheckResultRequest::setCustomParam(bool customParam) {
  customParam_ = customParam;
  setParameter(std::string("CustomParam"), customParam ? "true" : "false");
}

std::string ListCheckResultRequest::getCheckKey() const {
  return checkKey_;
}

void ListCheckResultRequest::setCheckKey(const std::string &checkKey) {
  checkKey_ = checkKey;
  setParameter(std::string("CheckKey"), checkKey);
}

std::string ListCheckResultRequest::getSourceIp() const {
  return sourceIp_;
}

void ListCheckResultRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListCheckResultRequest::getRegionId() const {
  return regionId_;
}

void ListCheckResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListCheckResultRequest::getPageSize() const {
  return pageSize_;
}

void ListCheckResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCheckResultRequest::getLang() const {
  return lang_;
}

void ListCheckResultRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<std::string> ListCheckResultRequest::getVendors() const {
  return vendors_;
}

void ListCheckResultRequest::setVendors(const std::vector<std::string> &vendors) {
  vendors_ = vendors;
}

std::vector<std::string> ListCheckResultRequest::getTypes() const {
  return types_;
}

void ListCheckResultRequest::setTypes(const std::vector<std::string> &types) {
  types_ = types;
}

int ListCheckResultRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCheckResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<long> ListCheckResultRequest::getRequirementIds() const {
  return requirementIds_;
}

void ListCheckResultRequest::setRequirementIds(const std::vector<long> &requirementIds) {
  requirementIds_ = requirementIds;
}

std::vector<std::string> ListCheckResultRequest::getSortTypes() const {
  return sortTypes_;
}

void ListCheckResultRequest::setSortTypes(const std::vector<std::string> &sortTypes) {
  sortTypes_ = sortTypes;
}

std::vector<std::string> ListCheckResultRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListCheckResultRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

std::vector<std::string> ListCheckResultRequest::getStatuses() const {
  return statuses_;
}

void ListCheckResultRequest::setStatuses(const std::vector<std::string> &statuses) {
  statuses_ = statuses;
}

