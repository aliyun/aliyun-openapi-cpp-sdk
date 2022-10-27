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

boolean UntagResourcesRequest::getAll() const {
  return all_;
}

void UntagResourcesRequest::setAll(boolean all) {
  all_ = all;
  setParameter(std::string("All"), std::to_string(all));
}

string UntagResourcesRequest::getTagKeys() const {
  return tagKeys_;
}

void UntagResourcesRequest::setTagKeys(string tagKeys) {
  tagKeys_ = tagKeys;
  setParameter(std::string("TagKeys"), std::to_string(tagKeys));
}

string UntagResourcesRequest::getBody() const {
  return body_;
}

void UntagResourcesRequest::setBody(string body) {
  body_ = body;
  setBodyParameter(std::string("body"), std::to_string(body));
}

string UntagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesRequest::setResourceType(string resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), std::to_string(resourceType));
}

string UntagResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void UntagResourcesRequest::setResourceIds(string resourceIds) {
  resourceIds_ = resourceIds;
  setParameter(std::string("ResourceIds"), std::to_string(resourceIds));
}

