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

#include <alibabacloud/drds/model/ModifyDrdsInstanceDescriptionRequest.h>

using AlibabaCloud::Drds::Model::ModifyDrdsInstanceDescriptionRequest;

ModifyDrdsInstanceDescriptionRequest::ModifyDrdsInstanceDescriptionRequest()
    : RpcServiceRequest("drds", "2019-01-23", "ModifyDrdsInstanceDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDrdsInstanceDescriptionRequest::~ModifyDrdsInstanceDescriptionRequest() {}

std::string ModifyDrdsInstanceDescriptionRequest::getDescription() const {
  return description_;
}

void ModifyDrdsInstanceDescriptionRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyDrdsInstanceDescriptionRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void ModifyDrdsInstanceDescriptionRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string ModifyDrdsInstanceDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDrdsInstanceDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

