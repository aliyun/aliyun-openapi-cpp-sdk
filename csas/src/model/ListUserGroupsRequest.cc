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

#include <alibabacloud/csas/model/ListUserGroupsRequest.h>

using AlibabaCloud::Csas::Model::ListUserGroupsRequest;

ListUserGroupsRequest::ListUserGroupsRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListUserGroups") {
  setMethod(HttpRequest::Method::Get);
}

ListUserGroupsRequest::~ListUserGroupsRequest() {}

std::string ListUserGroupsRequest::getAttributeValue() const {
  return attributeValue_;
}

void ListUserGroupsRequest::setAttributeValue(const std::string &attributeValue) {
  attributeValue_ = attributeValue;
  setParameter(std::string("AttributeValue"), attributeValue);
}

std::string ListUserGroupsRequest::getSourceIp() const {
  return sourceIp_;
}

void ListUserGroupsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListUserGroupsRequest::getPAPolicyId() const {
  return pAPolicyId_;
}

void ListUserGroupsRequest::setPAPolicyId(const std::string &pAPolicyId) {
  pAPolicyId_ = pAPolicyId;
  setParameter(std::string("PAPolicyId"), pAPolicyId);
}

int ListUserGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListUserGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListUserGroupsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUserGroupsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<ListUserGroupsRequest::std::string> ListUserGroupsRequest::getUserGroupIds() const {
  return userGroupIds_;
}

void ListUserGroupsRequest::setUserGroupIds(const std::vector<ListUserGroupsRequest::std::string> &userGroupIds) {
  userGroupIds_ = userGroupIds;
  for(int dep1 = 0; dep1 != userGroupIds.size(); dep1++) {
    setParameter(std::string("UserGroupIds") + "." + std::to_string(dep1 + 1), userGroupIds[dep1]);
  }
}

std::string ListUserGroupsRequest::getName() const {
  return name_;
}

void ListUserGroupsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

