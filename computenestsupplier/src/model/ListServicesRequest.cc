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

#include <alibabacloud/computenestsupplier/model/ListServicesRequest.h>

using AlibabaCloud::ComputeNestSupplier::Model::ListServicesRequest;

ListServicesRequest::ListServicesRequest()
    : RpcServiceRequest("computenestsupplier", "2021-05-21", "ListServices") {
  setMethod(HttpRequest::Method::Post);
}

ListServicesRequest::~ListServicesRequest() {}

bool ListServicesRequest::getAllVersions() const {
  return allVersions_;
}

void ListServicesRequest::setAllVersions(bool allVersions) {
  allVersions_ = allVersions;
  setParameter(std::string("AllVersions"), allVersions ? "true" : "false");
}

std::string ListServicesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListServicesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListServicesRequest::getRegionId() const {
  return regionId_;
}

void ListServicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListServicesRequest::getNextToken() const {
  return nextToken_;
}

void ListServicesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListServicesRequest::Tag> ListServicesRequest::getTag() const {
  return tag_;
}

void ListServicesRequest::setTag(const std::vector<ListServicesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<ListServicesRequest::Filter> ListServicesRequest::getFilter() const {
  return filter_;
}

void ListServicesRequest::setFilter(const std::vector<ListServicesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Name", filterObj.name);
  }
}

std::string ListServicesRequest::getMaxResults() const {
  return maxResults_;
}

void ListServicesRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

