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

#include <alibabacloud/drds/model/UpdateResourceGroupAttributeRequest.h>

using AlibabaCloud::Drds::Model::UpdateResourceGroupAttributeRequest;

UpdateResourceGroupAttributeRequest::UpdateResourceGroupAttributeRequest()
    : RpcServiceRequest("drds", "2019-01-23", "UpdateResourceGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateResourceGroupAttributeRequest::~UpdateResourceGroupAttributeRequest() {}

std::string UpdateResourceGroupAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateResourceGroupAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateResourceGroupAttributeRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void UpdateResourceGroupAttributeRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string UpdateResourceGroupAttributeRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void UpdateResourceGroupAttributeRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

