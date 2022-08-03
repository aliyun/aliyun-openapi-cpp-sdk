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

#include <alibabacloud/resourcemanager/model/GetResourceGroupRequest.h>

using AlibabaCloud::ResourceManager::Model::GetResourceGroupRequest;

GetResourceGroupRequest::GetResourceGroupRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "GetResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

GetResourceGroupRequest::~GetResourceGroupRequest() {}

std::string GetResourceGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void GetResourceGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

bool GetResourceGroupRequest::getIncludeTags() const {
  return includeTags_;
}

void GetResourceGroupRequest::setIncludeTags(bool includeTags) {
  includeTags_ = includeTags;
  setParameter(std::string("IncludeTags"), includeTags ? "true" : "false");
}

