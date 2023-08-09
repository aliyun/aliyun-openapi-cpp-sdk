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

#include <alibabacloud/config/model/ListResourceRelationsRequest.h>

using AlibabaCloud::Config::Model::ListResourceRelationsRequest;

ListResourceRelationsRequest::ListResourceRelationsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListResourceRelations") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceRelationsRequest::~ListResourceRelationsRequest() {}

std::string ListResourceRelationsRequest::getTargetResourceType() const {
  return targetResourceType_;
}

void ListResourceRelationsRequest::setTargetResourceType(const std::string &targetResourceType) {
  targetResourceType_ = targetResourceType;
  setParameter(std::string("TargetResourceType"), targetResourceType);
}

std::string ListResourceRelationsRequest::getResourceId() const {
  return resourceId_;
}

void ListResourceRelationsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListResourceRelationsRequest::getTargetResourceId() const {
  return targetResourceId_;
}

void ListResourceRelationsRequest::setTargetResourceId(const std::string &targetResourceId) {
  targetResourceId_ = targetResourceId;
  setParameter(std::string("TargetResourceId"), targetResourceId);
}

std::string ListResourceRelationsRequest::getResourceType() const {
  return resourceType_;
}

void ListResourceRelationsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListResourceRelationsRequest::getRelationType() const {
  return relationType_;
}

void ListResourceRelationsRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("RelationType"), relationType);
}

std::string ListResourceRelationsRequest::getNextToken() const {
  return nextToken_;
}

void ListResourceRelationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListResourceRelationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListResourceRelationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListResourceRelationsRequest::getRegion() const {
  return region_;
}

void ListResourceRelationsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

