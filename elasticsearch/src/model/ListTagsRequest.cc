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

#include <alibabacloud/elasticsearch/model/ListTagsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListTagsRequest;

ListTagsRequest::ListTagsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/tags/all-tags"};
  setMethod(HttpRequest::Method::Get);
}

ListTagsRequest::~ListTagsRequest() {}

int ListTagsRequest::getPageSize() const {
  return pageSize_;
}

void ListTagsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListTagsRequest::getResourceType() const {
  return resourceType_;
}

void ListTagsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("resourceType"), resourceType);
}

