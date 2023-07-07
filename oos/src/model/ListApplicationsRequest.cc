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

#include <alibabacloud/oos/model/ListApplicationsRequest.h>

using AlibabaCloud::Oos::Model::ListApplicationsRequest;

ListApplicationsRequest::ListApplicationsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListApplications") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsRequest::~ListApplicationsRequest() {}

std::string ListApplicationsRequest::getRegionId() const {
  return regionId_;
}

void ListApplicationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListApplicationsRequest::getNextToken() const {
  return nextToken_;
}

void ListApplicationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListApplicationsRequest::getTags() const {
  return tags_;
}

void ListApplicationsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ListApplicationsRequest::getNames() const {
  return names_;
}

void ListApplicationsRequest::setNames(const std::string &names) {
  names_ = names;
  setParameter(std::string("Names"), names);
}

std::string ListApplicationsRequest::getName() const {
  return name_;
}

void ListApplicationsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListApplicationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListApplicationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListApplicationsRequest::getApplicationType() const {
  return applicationType_;
}

void ListApplicationsRequest::setApplicationType(const std::string &applicationType) {
  applicationType_ = applicationType;
  setParameter(std::string("ApplicationType"), applicationType);
}

