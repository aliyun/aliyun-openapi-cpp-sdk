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

#include <alibabacloud/csas/model/ListUsersRequest.h>

using AlibabaCloud::Csas::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListUsers") {
  setMethod(HttpRequest::Method::Get);
}

ListUsersRequest::~ListUsersRequest() {}

std::string ListUsersRequest::getFuzzyUsername() const {
  return fuzzyUsername_;
}

void ListUsersRequest::setFuzzyUsername(const std::string &fuzzyUsername) {
  fuzzyUsername_ = fuzzyUsername;
  setParameter(std::string("FuzzyUsername"), fuzzyUsername);
}

std::string ListUsersRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUsersRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ListUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListUsersRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListUsersRequest::getDepartment() const {
  return department_;
}

void ListUsersRequest::setDepartment(const std::string &department) {
  department_ = department;
  setParameter(std::string("Department"), department);
}

long ListUsersRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUsersRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListUsersRequest::getPreciseUsername() const {
  return preciseUsername_;
}

void ListUsersRequest::setPreciseUsername(const std::string &preciseUsername) {
  preciseUsername_ = preciseUsername;
  setParameter(std::string("PreciseUsername"), preciseUsername);
}

std::vector<ListUsersRequest::std::string> ListUsersRequest::getSaseUserIds() const {
  return saseUserIds_;
}

void ListUsersRequest::setSaseUserIds(const std::vector<ListUsersRequest::std::string> &saseUserIds) {
  saseUserIds_ = saseUserIds;
  for(int dep1 = 0; dep1 != saseUserIds.size(); dep1++) {
    setParameter(std::string("SaseUserIds") + "." + std::to_string(dep1 + 1), saseUserIds[dep1]);
  }
}

std::string ListUsersRequest::getStatus() const {
  return status_;
}

void ListUsersRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

