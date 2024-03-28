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

#include <alibabacloud/devops/model/ListSprintsRequest.h>

using AlibabaCloud::Devops::Model::ListSprintsRequest;

ListSprintsRequest::ListSprintsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/sprints/list"};
  setMethod(HttpRequest::Method::Get);
}

ListSprintsRequest::~ListSprintsRequest() {}

std::string ListSprintsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListSprintsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListSprintsRequest::getSpaceType() const {
  return spaceType_;
}

void ListSprintsRequest::setSpaceType(const std::string &spaceType) {
  spaceType_ = spaceType;
  setParameter(std::string("spaceType"), spaceType);
}

std::string ListSprintsRequest::getNextToken() const {
  return nextToken_;
}

void ListSprintsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

long ListSprintsRequest::getMaxResults() const {
  return maxResults_;
}

void ListSprintsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

std::string ListSprintsRequest::getSpaceIdentifier() const {
  return spaceIdentifier_;
}

void ListSprintsRequest::setSpaceIdentifier(const std::string &spaceIdentifier) {
  spaceIdentifier_ = spaceIdentifier;
  setParameter(std::string("spaceIdentifier"), spaceIdentifier);
}

