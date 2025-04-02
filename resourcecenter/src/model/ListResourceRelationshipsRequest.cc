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

#include <alibabacloud/resourcecenter/model/ListResourceRelationshipsRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListResourceRelationshipsRequest;

ListResourceRelationshipsRequest::ListResourceRelationshipsRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListResourceRelationships") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceRelationshipsRequest::~ListResourceRelationshipsRequest() {}

std::string ListResourceRelationshipsRequest::getRegionId() const {
  return regionId_;
}

void ListResourceRelationshipsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListResourceRelationshipsRequest::getNextToken() const {
  return nextToken_;
}

void ListResourceRelationshipsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListResourceRelationshipsRequest::getResourceId() const {
  return resourceId_;
}

void ListResourceRelationshipsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListResourceRelationshipsRequest::getResourceType() const {
  return resourceType_;
}

void ListResourceRelationshipsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<ListResourceRelationshipsRequest::RelatedResourceFilter> ListResourceRelationshipsRequest::getRelatedResourceFilter() const {
  return relatedResourceFilter_;
}

void ListResourceRelationshipsRequest::setRelatedResourceFilter(const std::vector<ListResourceRelationshipsRequest::RelatedResourceFilter> &relatedResourceFilter) {
  relatedResourceFilter_ = relatedResourceFilter;
  for(int dep1 = 0; dep1 != relatedResourceFilter.size(); dep1++) {
  auto relatedResourceFilterObj = relatedResourceFilter.at(dep1);
  std::string relatedResourceFilterObjStr = std::string("RelatedResourceFilter") + "." + std::to_string(dep1 + 1);
    setParameter(relatedResourceFilterObjStr + ".MatchType", relatedResourceFilterObj.matchType);
    setParameter(relatedResourceFilterObjStr + ".Key", relatedResourceFilterObj.key);
  }
}

int ListResourceRelationshipsRequest::getMaxResults() const {
  return maxResults_;
}

void ListResourceRelationshipsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

