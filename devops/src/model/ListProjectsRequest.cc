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

#include <alibabacloud/devops/model/ListProjectsRequest.h>

using AlibabaCloud::Devops::Model::ListProjectsRequest;

ListProjectsRequest::ListProjectsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/listProjects"};
  setMethod(HttpRequest::Method::Get);
}

ListProjectsRequest::~ListProjectsRequest() {}

std::string ListProjectsRequest::getExtraConditions() const {
  return extraConditions_;
}

void ListProjectsRequest::setExtraConditions(const std::string &extraConditions) {
  extraConditions_ = extraConditions;
  setParameter(std::string("extraConditions"), extraConditions);
}

std::string ListProjectsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListProjectsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListProjectsRequest::getNextToken() const {
  return nextToken_;
}

void ListProjectsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

std::string ListProjectsRequest::getScope() const {
  return scope_;
}

void ListProjectsRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("scope"), scope);
}

long ListProjectsRequest::getMaxResults() const {
  return maxResults_;
}

void ListProjectsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

std::string ListProjectsRequest::getConditions() const {
  return conditions_;
}

void ListProjectsRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setParameter(std::string("conditions"), conditions);
}

std::string ListProjectsRequest::getCategory() const {
  return category_;
}

void ListProjectsRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("category"), category);
}

