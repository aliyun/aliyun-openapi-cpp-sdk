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

#include <alibabacloud/resourcecenter/model/ListMultiAccountResourceRelationshipsRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListMultiAccountResourceRelationshipsRequest;

ListMultiAccountResourceRelationshipsRequest::ListMultiAccountResourceRelationshipsRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListMultiAccountResourceRelationships") {
  setMethod(HttpRequest::Method::Post);
}

ListMultiAccountResourceRelationshipsRequest::~ListMultiAccountResourceRelationshipsRequest() {}

std::string ListMultiAccountResourceRelationshipsRequest::getRegionId() const {
  return regionId_;
}

void ListMultiAccountResourceRelationshipsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListMultiAccountResourceRelationshipsRequest::getNextToken() const {
  return nextToken_;
}

void ListMultiAccountResourceRelationshipsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListMultiAccountResourceRelationshipsRequest::getScope() const {
  return scope_;
}

void ListMultiAccountResourceRelationshipsRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string ListMultiAccountResourceRelationshipsRequest::getResourceId() const {
  return resourceId_;
}

void ListMultiAccountResourceRelationshipsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListMultiAccountResourceRelationshipsRequest::getResourceType() const {
  return resourceType_;
}

void ListMultiAccountResourceRelationshipsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter> ListMultiAccountResourceRelationshipsRequest::getRelatedResourceFilter() const {
  return relatedResourceFilter_;
}

void ListMultiAccountResourceRelationshipsRequest::setRelatedResourceFilter(const std::vector<ListMultiAccountResourceRelationshipsRequest::RelatedResourceFilter> &relatedResourceFilter) {
  relatedResourceFilter_ = relatedResourceFilter;
  for(int dep1 = 0; dep1 != relatedResourceFilter.size(); dep1++) {
  auto relatedResourceFilterObj = relatedResourceFilter.at(dep1);
  std::string relatedResourceFilterObjStr = std::string("RelatedResourceFilter") + "." + std::to_string(dep1 + 1);
    setParameter(relatedResourceFilterObjStr + ".MatchType", relatedResourceFilterObj.matchType);
    setParameter(relatedResourceFilterObjStr + ".Key", relatedResourceFilterObj.key);
  }
}

int ListMultiAccountResourceRelationshipsRequest::getMaxResults() const {
  return maxResults_;
}

void ListMultiAccountResourceRelationshipsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

