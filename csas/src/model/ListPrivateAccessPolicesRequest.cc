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

#include <alibabacloud/csas/model/ListPrivateAccessPolicesRequest.h>

using AlibabaCloud::Csas::Model::ListPrivateAccessPolicesRequest;

ListPrivateAccessPolicesRequest::ListPrivateAccessPolicesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPrivateAccessPolices") {
  setMethod(HttpRequest::Method::Get);
}

ListPrivateAccessPolicesRequest::~ListPrivateAccessPolicesRequest() {}

std::vector<ListPrivateAccessPolicesRequest::std::string> ListPrivateAccessPolicesRequest::getPolicyIds() const {
  return policyIds_;
}

void ListPrivateAccessPolicesRequest::setPolicyIds(const std::vector<ListPrivateAccessPolicesRequest::std::string> &policyIds) {
  policyIds_ = policyIds;
  for(int dep1 = 0; dep1 != policyIds.size(); dep1++) {
    setParameter(std::string("PolicyIds") + "." + std::to_string(dep1 + 1), policyIds[dep1]);
  }
}

std::string ListPrivateAccessPolicesRequest::getTagName() const {
  return tagName_;
}

void ListPrivateAccessPolicesRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string ListPrivateAccessPolicesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPrivateAccessPolicesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListPrivateAccessPolicesRequest::getPageSize() const {
  return pageSize_;
}

void ListPrivateAccessPolicesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPrivateAccessPolicesRequest::getApplicationId() const {
  return applicationId_;
}

void ListPrivateAccessPolicesRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string ListPrivateAccessPolicesRequest::getTagId() const {
  return tagId_;
}

void ListPrivateAccessPolicesRequest::setTagId(const std::string &tagId) {
  tagId_ = tagId;
  setParameter(std::string("TagId"), tagId);
}

std::string ListPrivateAccessPolicesRequest::getUserGroupId() const {
  return userGroupId_;
}

void ListPrivateAccessPolicesRequest::setUserGroupId(const std::string &userGroupId) {
  userGroupId_ = userGroupId;
  setParameter(std::string("UserGroupId"), userGroupId);
}

int ListPrivateAccessPolicesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListPrivateAccessPolicesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListPrivateAccessPolicesRequest::getPolicyAction() const {
  return policyAction_;
}

void ListPrivateAccessPolicesRequest::setPolicyAction(const std::string &policyAction) {
  policyAction_ = policyAction;
  setParameter(std::string("PolicyAction"), policyAction);
}

std::string ListPrivateAccessPolicesRequest::getApplicationName() const {
  return applicationName_;
}

void ListPrivateAccessPolicesRequest::setApplicationName(const std::string &applicationName) {
  applicationName_ = applicationName;
  setParameter(std::string("ApplicationName"), applicationName);
}

std::string ListPrivateAccessPolicesRequest::getName() const {
  return name_;
}

void ListPrivateAccessPolicesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListPrivateAccessPolicesRequest::getStatus() const {
  return status_;
}

void ListPrivateAccessPolicesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

