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

#include <alibabacloud/dcdn/model/UntagDcdnResourcesRequest.h>

using AlibabaCloud::Dcdn::Model::UntagDcdnResourcesRequest;

UntagDcdnResourcesRequest::UntagDcdnResourcesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "UntagDcdnResources") {
  setMethod(HttpRequest::Method::Post);
}

UntagDcdnResourcesRequest::~UntagDcdnResourcesRequest() {}

bool UntagDcdnResourcesRequest::getAll() const {
  return all_;
}

void UntagDcdnResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::vector<std::string> UntagDcdnResourcesRequest::getResourceId() const {
  return resourceId_;
}

void UntagDcdnResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::vector<std::string> UntagDcdnResourcesRequest::getTagKey() const {
  return tagKey_;
}

void UntagDcdnResourcesRequest::setTagKey(const std::vector<std::string> &tagKey) {
  tagKey_ = tagKey;
}

std::string UntagDcdnResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagDcdnResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

