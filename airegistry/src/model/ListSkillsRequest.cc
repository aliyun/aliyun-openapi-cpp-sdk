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

#include <alibabacloud/airegistry/model/ListSkillsRequest.h>

using AlibabaCloud::AIRegistry::Model::ListSkillsRequest;

ListSkillsRequest::ListSkillsRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "ListSkills") {
  setMethod(HttpRequest::Method::Post);
}

ListSkillsRequest::~ListSkillsRequest() {}

std::string ListSkillsRequest::getNamespaceId() const {
  return namespaceId_;
}

void ListSkillsRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string ListSkillsRequest::getOrderBy() const {
  return orderBy_;
}

void ListSkillsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

int ListSkillsRequest::getPageNo() const {
  return pageNo_;
}

void ListSkillsRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListSkillsRequest::getSearch() const {
  return search_;
}

void ListSkillsRequest::setSearch(const std::string &search) {
  search_ = search;
  setParameter(std::string("Search"), search);
}

std::string ListSkillsRequest::getScope() const {
  return scope_;
}

void ListSkillsRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int ListSkillsRequest::getPageSize() const {
  return pageSize_;
}

void ListSkillsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSkillsRequest::getOwner() const {
  return owner_;
}

void ListSkillsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

std::string ListSkillsRequest::getSkillName() const {
  return skillName_;
}

void ListSkillsRequest::setSkillName(const std::string &skillName) {
  skillName_ = skillName;
  setParameter(std::string("SkillName"), skillName);
}

