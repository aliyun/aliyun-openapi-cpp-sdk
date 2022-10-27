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

#include <alibabacloud/elasticsearch/model/ListTagResourcesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/tags"};
  setMethod(HttpRequest::Method::Get);
}

ListTagResourcesRequest::~ListTagResourcesRequest() {}

integer ListTagResourcesRequest::getSize() const {
  return size_;
}

void ListTagResourcesRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

string ListTagResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListTagResourcesRequest::setNextToken(string nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), std::to_string(nextToken));
}

integer ListTagResourcesRequest::getPage() const {
  return page_;
}

void ListTagResourcesRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

string ListTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void ListTagResourcesRequest::setResourceType(string resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), std::to_string(resourceType));
}

string ListTagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void ListTagResourcesRequest::setResourceIds(string resourceIds) {
  resourceIds_ = resourceIds;
  setParameter(std::string("ResourceIds"), std::to_string(resourceIds));
}

string ListTagResourcesRequest::getTags() const {
  return tags_;
}

void ListTagResourcesRequest::setTags(string tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), std::to_string(tags));
}

