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

#include <alibabacloud/eds-user/model/DeleteResourceGroupRequest.h>

using AlibabaCloud::Eds_user::Model::DeleteResourceGroupRequest;

DeleteResourceGroupRequest::DeleteResourceGroupRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "DeleteResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteResourceGroupRequest::~DeleteResourceGroupRequest() {}

std::string DeleteResourceGroupRequest::getPlatform() const {
  return platform_;
}

void DeleteResourceGroupRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string DeleteResourceGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteResourceGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<DeleteResourceGroupRequest::std::string> DeleteResourceGroupRequest::getResourceGroupIds() const {
  return resourceGroupIds_;
}

void DeleteResourceGroupRequest::setResourceGroupIds(const std::vector<DeleteResourceGroupRequest::std::string> &resourceGroupIds) {
  resourceGroupIds_ = resourceGroupIds;
  for(int dep1 = 0; dep1 != resourceGroupIds.size(); dep1++) {
    setParameter(std::string("ResourceGroupIds") + "." + std::to_string(dep1 + 1), resourceGroupIds[dep1]);
  }
}

