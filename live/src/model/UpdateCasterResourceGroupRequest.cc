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

#include <alibabacloud/live/model/UpdateCasterResourceGroupRequest.h>

using AlibabaCloud::Live::Model::UpdateCasterResourceGroupRequest;

UpdateCasterResourceGroupRequest::UpdateCasterResourceGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateCasterResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCasterResourceGroupRequest::~UpdateCasterResourceGroupRequest() {}

std::string UpdateCasterResourceGroupRequest::getCasterId() const {
  return casterId_;
}

void UpdateCasterResourceGroupRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long UpdateCasterResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateCasterResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateCasterResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void UpdateCasterResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

