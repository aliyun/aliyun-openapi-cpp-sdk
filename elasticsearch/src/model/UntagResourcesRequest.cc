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

#include <alibabacloud/elasticsearch/model/UntagResourcesRequest.h>

using AlibabaCloud::Elasticsearch::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/tags"};
  setMethod(HttpRequest::Method::Delete);
}

UntagResourcesRequest::~UntagResourcesRequest() {}

bool UntagResourcesRequest::getAll() const {
  return all_;
}

void UntagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::string UntagResourcesRequest::getTagKeys() const {
  return tagKeys_;
}

void UntagResourcesRequest::setTagKeys(const std::string &tagKeys) {
  tagKeys_ = tagKeys;
  setParameter(std::string("TagKeys"), tagKeys);
}

std::string UntagResourcesRequest::getBody() const {
  return body_;
}

void UntagResourcesRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string UntagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string UntagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void UntagResourcesRequest::setResourceIds(const std::string &resourceIds) {
  resourceIds_ = resourceIds;
  setParameter(std::string("ResourceIds"), resourceIds);
}

