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

#include <alibabacloud/alb/model/UnTagResourcesRequest.h>

using AlibabaCloud::Alb::Model::UnTagResourcesRequest;

UnTagResourcesRequest::UnTagResourcesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UnTagResources") {
  setMethod(HttpRequest::Method::Post);
}

UnTagResourcesRequest::~UnTagResourcesRequest() {}

std::vector<UnTagResourcesRequest::Tag> UnTagResourcesRequest::getTag() const {
  return tag_;
}

void UnTagResourcesRequest::setTag(const std::vector<UnTagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

bool UnTagResourcesRequest::getAll() const {
  return all_;
}

void UnTagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::vector<UnTagResourcesRequest::std::string> UnTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void UnTagResourcesRequest::setResourceId(const std::vector<UnTagResourcesRequest::std::string> &resourceId) {
  resourceId_ = resourceId;
  for(int dep1 = 0; dep1 != resourceId.size(); dep1++) {
    setParameter(std::string("ResourceId") + "." + std::to_string(dep1 + 1), resourceId[dep1]);
  }
}

std::string UnTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UnTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<UnTagResourcesRequest::std::string> UnTagResourcesRequest::getTagKey() const {
  return tagKey_;
}

void UnTagResourcesRequest::setTagKey(const std::vector<UnTagResourcesRequest::std::string> &tagKey) {
  tagKey_ = tagKey;
  for(int dep1 = 0; dep1 != tagKey.size(); dep1++) {
    setParameter(std::string("TagKey") + "." + std::to_string(dep1 + 1), tagKey[dep1]);
  }
}

