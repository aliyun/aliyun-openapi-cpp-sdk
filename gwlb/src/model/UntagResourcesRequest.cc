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

#include <alibabacloud/gwlb/model/UntagResourcesRequest.h>

using AlibabaCloud::Gwlb::Model::UntagResourcesRequest;

UntagResourcesRequest::UntagResourcesRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "UntagResources") {
  setMethod(HttpRequest::Method::Post);
}

UntagResourcesRequest::~UntagResourcesRequest() {}

std::string UntagResourcesRequest::getClientToken() const {
  return clientToken_;
}

void UntagResourcesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool UntagResourcesRequest::getAll() const {
  return all_;
}

void UntagResourcesRequest::setAll(bool all) {
  all_ = all;
  setBodyParameter(std::string("All"), all ? "true" : "false");
}

std::vector<UntagResourcesRequest::std::string> UntagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void UntagResourcesRequest::setResourceId(const std::vector<UntagResourcesRequest::std::string> &resourceId) {
  resourceId_ = resourceId;
  for(int dep1 = 0; dep1 != resourceId.size(); dep1++) {
    setBodyParameter(std::string("ResourceId") + "." + std::to_string(dep1 + 1), resourceId[dep1]);
  }
}

bool UntagResourcesRequest::getDryRun() const {
  return dryRun_;
}

void UntagResourcesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UntagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void UntagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::vector<UntagResourcesRequest::std::string> UntagResourcesRequest::getTagKey() const {
  return tagKey_;
}

void UntagResourcesRequest::setTagKey(const std::vector<UntagResourcesRequest::std::string> &tagKey) {
  tagKey_ = tagKey;
  for(int dep1 = 0; dep1 != tagKey.size(); dep1++) {
    setBodyParameter(std::string("TagKey") + "." + std::to_string(dep1 + 1), tagKey[dep1]);
  }
}

