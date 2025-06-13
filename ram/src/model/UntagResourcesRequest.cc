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

#include <alibabacloud/ram/model/UntagResourcesRequest.h>

using AlibabaCloud::Ram::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest()
    : RpcServiceRequest("ram", "2015-05-01", "UntagResources") {
  setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest() {}

std::vector<UntagResourcesRequest::std::string> UntagResourcesRequest::getResourceNames() const {
  return resourceNames_;
}

void UntagResourcesRequest::setResourceNames(const std::vector<UntagResourcesRequest::std::string> &resourceNames) {
  resourceNames_ = resourceNames;
  for(int dep1 = 0; dep1 != resourceNames.size(); dep1++) {
    setParameter(std::string("ResourceNames") + "." + std::to_string(dep1 + 1), resourceNames[dep1]);
  }
}

bool UntagResourcesRequest::getAll() const {
  return all_;
}

void UntagResourcesRequest::setAll(bool all) {
  all_ = all;
  setParameter(std::string("All"), all ? "true" : "false");
}

std::string UntagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<UntagResourcesRequest::std::string> UntagResourcesRequest::getTagKeys() const {
  return tagKeys_;
}

void UntagResourcesRequest::setTagKeys(const std::vector<UntagResourcesRequest::std::string> &tagKeys) {
  tagKeys_ = tagKeys;
  for(int dep1 = 0; dep1 != tagKeys.size(); dep1++) {
    setParameter(std::string("TagKeys") + "." + std::to_string(dep1 + 1), tagKeys[dep1]);
  }
}

