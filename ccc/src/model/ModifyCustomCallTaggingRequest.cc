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

#include <alibabacloud/ccc/model/ModifyCustomCallTaggingRequest.h>

using AlibabaCloud::CCC::Model::ModifyCustomCallTaggingRequest;

ModifyCustomCallTaggingRequest::ModifyCustomCallTaggingRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ModifyCustomCallTagging") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCustomCallTaggingRequest::~ModifyCustomCallTaggingRequest() {}

std::string ModifyCustomCallTaggingRequest::getDescription() const {
  return description_;
}

void ModifyCustomCallTaggingRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCustomCallTaggingRequest::getNumber() const {
  return number_;
}

void ModifyCustomCallTaggingRequest::setNumber(const std::string &number) {
  number_ = number;
  setParameter(std::string("Number"), number);
}

std::string ModifyCustomCallTaggingRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyCustomCallTaggingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyCustomCallTaggingRequest::getCallTagNameList() const {
  return callTagNameList_;
}

void ModifyCustomCallTaggingRequest::setCallTagNameList(const std::string &callTagNameList) {
  callTagNameList_ = callTagNameList;
  setParameter(std::string("CallTagNameList"), callTagNameList);
}

