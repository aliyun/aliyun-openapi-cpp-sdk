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

#include <alibabacloud/ecd/model/ModifyImageAttributeRequest.h>

using AlibabaCloud::Ecd::Model::ModifyImageAttributeRequest;

ModifyImageAttributeRequest::ModifyImageAttributeRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyImageAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyImageAttributeRequest::~ModifyImageAttributeRequest() {}

std::string ModifyImageAttributeRequest::getImageId() const {
  return imageId_;
}

void ModifyImageAttributeRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ModifyImageAttributeRequest::getDescription() const {
  return description_;
}

void ModifyImageAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyImageAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyImageAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyImageAttributeRequest::getName() const {
  return name_;
}

void ModifyImageAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

