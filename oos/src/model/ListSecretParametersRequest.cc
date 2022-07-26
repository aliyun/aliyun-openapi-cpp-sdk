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

#include <alibabacloud/oos/model/ListSecretParametersRequest.h>

using AlibabaCloud::Oos::Model::ListSecretParametersRequest;

ListSecretParametersRequest::ListSecretParametersRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListSecretParameters") {
  setMethod(HttpRequest::Method::Post);
}

ListSecretParametersRequest::~ListSecretParametersRequest() {}

bool ListSecretParametersRequest::getRecursive() const {
  return recursive_;
}

void ListSecretParametersRequest::setRecursive(bool recursive) {
  recursive_ = recursive;
  setParameter(std::string("Recursive"), recursive ? "true" : "false");
}

std::string ListSecretParametersRequest::getPath() const {
  return path_;
}

void ListSecretParametersRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string ListSecretParametersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListSecretParametersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListSecretParametersRequest::getRegionId() const {
  return regionId_;
}

void ListSecretParametersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListSecretParametersRequest::getNextToken() const {
  return nextToken_;
}

void ListSecretParametersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListSecretParametersRequest::getSortOrder() const {
  return sortOrder_;
}

void ListSecretParametersRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string ListSecretParametersRequest::getTags() const {
  return tags_;
}

void ListSecretParametersRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ListSecretParametersRequest::getName() const {
  return name_;
}

void ListSecretParametersRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListSecretParametersRequest::getMaxResults() const {
  return maxResults_;
}

void ListSecretParametersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListSecretParametersRequest::getSortField() const {
  return sortField_;
}

void ListSecretParametersRequest::setSortField(const std::string &sortField) {
  sortField_ = sortField;
  setParameter(std::string("SortField"), sortField);
}

