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

#include <alibabacloud/config/model/ListTagResourcesRequest.h>

using AlibabaCloud::Config::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListTagResources") {
  setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest() {}

std::vector<std::string> ListTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string ListTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::string ListTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListTagResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::string ListTagResourcesRequest::getTag() const {
  return tag_;
}

void ListTagResourcesRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setBodyParameter(std::string("Tag"), tag);
}

