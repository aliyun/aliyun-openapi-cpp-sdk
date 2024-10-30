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

#include <alibabacloud/csas/model/ListPrivateAccessApplicationsRequest.h>

using AlibabaCloud::Csas::Model::ListPrivateAccessApplicationsRequest;

ListPrivateAccessApplicationsRequest::ListPrivateAccessApplicationsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPrivateAccessApplications") {
  setMethod(HttpRequest::Method::Get);
}

ListPrivateAccessApplicationsRequest::~ListPrivateAccessApplicationsRequest() {}

std::string ListPrivateAccessApplicationsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPrivateAccessApplicationsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListPrivateAccessApplicationsRequest::getPolicyId() const {
  return policyId_;
}

void ListPrivateAccessApplicationsRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

int ListPrivateAccessApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListPrivateAccessApplicationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPrivateAccessApplicationsRequest::getAddress() const {
  return address_;
}

void ListPrivateAccessApplicationsRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string ListPrivateAccessApplicationsRequest::getTagId() const {
  return tagId_;
}

void ListPrivateAccessApplicationsRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setParameter(std::string("TagId"), tagId);
}

std::string ListPrivateAccessApplicationsRequest::getConnectorId() const {
  return connectorId_;
}

void ListPrivateAccessApplicationsRequest::setConnectorId(const std::string &connectorId) {
  connectorId_ = connectorId;
  setParameter(std::string("ConnectorId"), connectorId);
}

int ListPrivateAccessApplicationsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListPrivateAccessApplicationsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<ListPrivateAccessApplicationsRequest::std::string> ListPrivateAccessApplicationsRequest::getApplicationIds() const {
  return applicationIds_;
}

void ListPrivateAccessApplicationsRequest::setApplicationIds(const std::vector<ListPrivateAccessApplicationsRequest::std::string> &applicationIds) {
  applicationIds_ = applicationIds;
  for(int dep1 = 0; dep1 != applicationIds.size(); dep1++) {
    setParameter(std::string("ApplicationIds") + "." + std::to_string(dep1 + 1), applicationIds[dep1]);
  }
}

std::string ListPrivateAccessApplicationsRequest::getAccessModes() const {
  return accessModes_;
}

void ListPrivateAccessApplicationsRequest::setAccessModes(const std::string &accessModes) {
  accessModes_ = accessModes;
  setParameter(std::string("AccessModes"), accessModes);
}

std::string ListPrivateAccessApplicationsRequest::getName() const {
  return name_;
}

void ListPrivateAccessApplicationsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListPrivateAccessApplicationsRequest::getStatus() const {
  return status_;
}

void ListPrivateAccessApplicationsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

