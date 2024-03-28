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

#include <alibabacloud/devops/model/ListWorkitemsRequest.h>

using AlibabaCloud::Devops::Model::ListWorkitemsRequest;

ListWorkitemsRequest::ListWorkitemsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/listWorkitems"};
  setMethod(HttpRequest::Method::Get);
}

ListWorkitemsRequest::~ListWorkitemsRequest() {}

std::string ListWorkitemsRequest::getExtraConditions() const {
  return extraConditions_;
}

void ListWorkitemsRequest::setExtraConditions(const std::string &extraConditions) {
  extraConditions_ = extraConditions;
  setParameter(std::string("extraConditions"), extraConditions);
}

std::string ListWorkitemsRequest::getOrderBy() const {
  return orderBy_;
}

void ListWorkitemsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("orderBy"), orderBy);
}

std::string ListWorkitemsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListWorkitemsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListWorkitemsRequest::getGroupCondition() const {
  return groupCondition_;
}

void ListWorkitemsRequest::setGroupCondition(const std::string &groupCondition) {
  groupCondition_ = groupCondition;
  setParameter(std::string("groupCondition"), groupCondition);
}

std::string ListWorkitemsRequest::getSpaceType() const {
  return spaceType_;
}

void ListWorkitemsRequest::setSpaceType(const std::string &spaceType) {
  spaceType_ = spaceType;
  setParameter(std::string("spaceType"), spaceType);
}

std::string ListWorkitemsRequest::getNextToken() const {
  return nextToken_;
}

void ListWorkitemsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

std::string ListWorkitemsRequest::getSearchType() const {
  return searchType_;
}

void ListWorkitemsRequest::setSearchType(const std::string &searchType) {
  searchType_ = searchType;
  setParameter(std::string("searchType"), searchType);
}

std::string ListWorkitemsRequest::getMaxResults() const {
  return maxResults_;
}

void ListWorkitemsRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), maxResults);
}

std::string ListWorkitemsRequest::getSpaceIdentifier() const {
  return spaceIdentifier_;
}

void ListWorkitemsRequest::setSpaceIdentifier(const std::string &spaceIdentifier) {
  spaceIdentifier_ = spaceIdentifier;
  setParameter(std::string("spaceIdentifier"), spaceIdentifier);
}

std::string ListWorkitemsRequest::getCategory() const {
  return category_;
}

void ListWorkitemsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("category"), category);
}

std::string ListWorkitemsRequest::getConditions() const {
  return conditions_;
}

void ListWorkitemsRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setParameter(std::string("conditions"), conditions);
}

