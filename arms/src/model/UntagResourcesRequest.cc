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

#include <alibabacloud/arms/model/UntagResourcesRequest.h>

using AlibabaCloud::ARMS::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UntagResources") {
  setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest() {}

bool UntagResourcesRequest::getAll() const {
  return all_;
}

void UntagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::vector<std::string> UntagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string UntagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<UntagResourcesRequest::Tags> UntagResourcesRequest::getTags() const {
  return tags_;
}

void UntagResourcesRequest::setTags(const std::vector<UntagResourcesRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::vector<std::string> UntagResourcesRequest::getTagKey() const {
  return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<std::string> &tagKey) {
  tagKey_ = tagKey;
}

