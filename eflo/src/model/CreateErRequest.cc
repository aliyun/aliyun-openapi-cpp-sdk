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

#include <alibabacloud/eflo/model/CreateErRequest.h>

using AlibabaCloud::Eflo::Model::CreateErRequest;

CreateErRequest::CreateErRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "CreateEr") {
  setMethod(HttpRequest::Method::Post);
}

CreateErRequest::~CreateErRequest() {}

std::string CreateErRequest::getDescription() const {
  return description_;
}

void CreateErRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateErRequest::getErName() const {
  return erName_;
}

void CreateErRequest::setErName(const std::string &erName) {
  erName_ = erName;
  setBodyParameter(std::string("ErName"), erName);
}

std::string CreateErRequest::getMasterZoneId() const {
  return masterZoneId_;
}

void CreateErRequest::setMasterZoneId(const std::string &masterZoneId) {
  masterZoneId_ = masterZoneId;
  setBodyParameter(std::string("MasterZoneId"), masterZoneId);
}

std::string CreateErRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateErRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateErRequest::getRegionId() const {
  return regionId_;
}

void CreateErRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

