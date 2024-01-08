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

#include <alibabacloud/resourcesharing/model/ListPermissionsRequest.h>

using AlibabaCloud::ResourceSharing::Model::ListPermissionsRequest;

ListPermissionsRequest::ListPermissionsRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "ListPermissions") {
  setMethod(HttpRequest::Method::Post);
}

ListPermissionsRequest::~ListPermissionsRequest() {}

std::string ListPermissionsRequest::getResourceType() const {
  return resourceType_;
}

void ListPermissionsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListPermissionsRequest::getNextToken() const {
  return nextToken_;
}

void ListPermissionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListPermissionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListPermissionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

