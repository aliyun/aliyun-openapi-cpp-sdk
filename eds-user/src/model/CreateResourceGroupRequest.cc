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

#include <alibabacloud/eds-user/model/CreateResourceGroupRequest.h>

using AlibabaCloud::Eds_user::Model::CreateResourceGroupRequest;

CreateResourceGroupRequest::CreateResourceGroupRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "CreateResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateResourceGroupRequest::~CreateResourceGroupRequest() {}

std::string CreateResourceGroupRequest::getResourceGroupName() const {
  return resourceGroupName_;
}

void CreateResourceGroupRequest::setResourceGroupName(const std::string &resourceGroupName) {
  resourceGroupName_ = resourceGroupName;
  setParameter(std::string("ResourceGroupName"), resourceGroupName);
}

std::string CreateResourceGroupRequest::getPlatform() const {
  return platform_;
}

void CreateResourceGroupRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

long CreateResourceGroupRequest::getIsResourceGroupWithOfficeSite() const {
  return isResourceGroupWithOfficeSite_;
}

void CreateResourceGroupRequest::setIsResourceGroupWithOfficeSite(long isResourceGroupWithOfficeSite) {
  isResourceGroupWithOfficeSite_ = isResourceGroupWithOfficeSite;
  setParameter(std::string("IsResourceGroupWithOfficeSite"), std::to_string(isResourceGroupWithOfficeSite));
}

