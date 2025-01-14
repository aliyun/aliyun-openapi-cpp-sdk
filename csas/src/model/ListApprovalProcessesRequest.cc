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

#include <alibabacloud/csas/model/ListApprovalProcessesRequest.h>

using AlibabaCloud::Csas::Model::ListApprovalProcessesRequest;

ListApprovalProcessesRequest::ListApprovalProcessesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListApprovalProcesses") {
  setMethod(HttpRequest::Method::Get);
}

ListApprovalProcessesRequest::~ListApprovalProcessesRequest() {}

std::vector<ListApprovalProcessesRequest::std::string> ListApprovalProcessesRequest::getProcessIds() const {
  return processIds_;
}

void ListApprovalProcessesRequest::setProcessIds(const std::vector<ListApprovalProcessesRequest::std::string> &processIds) {
  processIds_ = processIds;
  for(int dep1 = 0; dep1 != processIds.size(); dep1++) {
    setParameter(std::string("ProcessIds") + "." + std::to_string(dep1 + 1), processIds[dep1]);
  }
}

std::string ListApprovalProcessesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListApprovalProcessesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListApprovalProcessesRequest::getPolicyId() const {
  return policyId_;
}

void ListApprovalProcessesRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string ListApprovalProcessesRequest::getSaseUserId() const {
  return saseUserId_;
}

void ListApprovalProcessesRequest::setSaseUserId(const std::string &saseUserId) {
  saseUserId_ = saseUserId;
  setParameter(std::string("SaseUserId"), saseUserId);
}

long ListApprovalProcessesRequest::getPageSize() const {
  return pageSize_;
}

void ListApprovalProcessesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApprovalProcessesRequest::getPolicyType() const {
  return policyType_;
}

void ListApprovalProcessesRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string ListApprovalProcessesRequest::getProcessName() const {
  return processName_;
}

void ListApprovalProcessesRequest::setProcessName(const std::string &processName) {
  processName_ = processName;
  setParameter(std::string("ProcessName"), processName);
}

long ListApprovalProcessesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListApprovalProcessesRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListApprovalProcessesRequest::getUsername() const {
  return username_;
}

void ListApprovalProcessesRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

