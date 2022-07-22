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

#include <alibabacloud/sas/model/ListCheckInstanceResultRequest.h>

using AlibabaCloud::Sas::Model::ListCheckInstanceResultRequest;

ListCheckInstanceResultRequest::ListCheckInstanceResultRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListCheckInstanceResult") {
  setMethod(HttpRequest::Method::Post);
}

ListCheckInstanceResultRequest::~ListCheckInstanceResultRequest() {}

std::string ListCheckInstanceResultRequest::getRegionIdKey() const {
  return regionIdKey_;
}

void ListCheckInstanceResultRequest::setRegionIdKey(const std::string &regionIdKey) {
  regionIdKey_ = regionIdKey;
  setParameter(std::string("RegionIdKey"), regionIdKey);
}

std::string ListCheckInstanceResultRequest::getSourceIp() const {
  return sourceIp_;
}

void ListCheckInstanceResultRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListCheckInstanceResultRequest::getPageSize() const {
  return pageSize_;
}

void ListCheckInstanceResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCheckInstanceResultRequest::getLang() const {
  return lang_;
}

void ListCheckInstanceResultRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long ListCheckInstanceResultRequest::getCheckId() const {
  return checkId_;
}

void ListCheckInstanceResultRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

int ListCheckInstanceResultRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCheckInstanceResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<std::string> ListCheckInstanceResultRequest::getSortTypes() const {
  return sortTypes_;
}

void ListCheckInstanceResultRequest::setSortTypes(const std::vector<std::string> &sortTypes) {
  sortTypes_ = sortTypes;
}

std::string ListCheckInstanceResultRequest::getInstanceIdKey() const {
  return instanceIdKey_;
}

void ListCheckInstanceResultRequest::setInstanceIdKey(const std::string &instanceIdKey) {
  instanceIdKey_ = instanceIdKey;
  setParameter(std::string("InstanceIdKey"), instanceIdKey);
}

std::string ListCheckInstanceResultRequest::getInstanceNameKey() const {
  return instanceNameKey_;
}

void ListCheckInstanceResultRequest::setInstanceNameKey(const std::string &instanceNameKey) {
  instanceNameKey_ = instanceNameKey;
  setParameter(std::string("InstanceNameKey"), instanceNameKey);
}

std::vector<std::string> ListCheckInstanceResultRequest::getInstanceIds() const {
  return instanceIds_;
}

void ListCheckInstanceResultRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

std::vector<std::string> ListCheckInstanceResultRequest::getStatuses() const {
  return statuses_;
}

void ListCheckInstanceResultRequest::setStatuses(const std::vector<std::string> &statuses) {
  statuses_ = statuses;
}

