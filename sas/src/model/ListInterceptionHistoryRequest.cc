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

#include <alibabacloud/sas/model/ListInterceptionHistoryRequest.h>

using AlibabaCloud::Sas::Model::ListInterceptionHistoryRequest;

ListInterceptionHistoryRequest::ListInterceptionHistoryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListInterceptionHistory") {
  setMethod(HttpRequest::Method::Post);
}

ListInterceptionHistoryRequest::~ListInterceptionHistoryRequest() {}

long ListInterceptionHistoryRequest::getStartTime() const {
  return startTime_;
}

void ListInterceptionHistoryRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListInterceptionHistoryRequest::getSourceIp() const {
  return sourceIp_;
}

void ListInterceptionHistoryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListInterceptionHistoryRequest::getPageSize() const {
  return pageSize_;
}

void ListInterceptionHistoryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInterceptionHistoryRequest::getHistoryName() const {
  return historyName_;
}

void ListInterceptionHistoryRequest::setHistoryName(const std::string &historyName) {
  historyName_ = historyName;
  setParameter(std::string("HistoryName"), historyName);
}

std::string ListInterceptionHistoryRequest::getLang() const {
  return lang_;
}

void ListInterceptionHistoryRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<int> ListInterceptionHistoryRequest::getInterceptionTypes() const {
  return interceptionTypes_;
}

void ListInterceptionHistoryRequest::setInterceptionTypes(const std::vector<int> &interceptionTypes) {
  interceptionTypes_ = interceptionTypes;
}

long ListInterceptionHistoryRequest::getEndTime() const {
  return endTime_;
}

void ListInterceptionHistoryRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListInterceptionHistoryRequest::getCurrentPage() const {
  return currentPage_;
}

void ListInterceptionHistoryRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListInterceptionHistoryRequest::getClusterId() const {
  return clusterId_;
}

void ListInterceptionHistoryRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

