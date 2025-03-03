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

#include <alibabacloud/resourcemanager/model/CreateResourceGroupRequest.h>

using AlibabaCloud::ResourceManager::Model::CreateResourceGroupRequest;

CreateResourceGroupRequest::CreateResourceGroupRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "CreateResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateResourceGroupRequest::~CreateResourceGroupRequest() {}

std::string CreateResourceGroupRequest::getDisplayName() const {
  return displayName_;
}

void CreateResourceGroupRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateResourceGroupRequest::getName() const {
  return name_;
}

void CreateResourceGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<CreateResourceGroupRequest::Tag> CreateResourceGroupRequest::getTag() const {
  return tag_;
}

void CreateResourceGroupRequest::setTag(const std::vector<CreateResourceGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

