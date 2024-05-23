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

#include <alibabacloud/oceanbasepro/model/ModifyTagValueNameRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTagValueNameRequest;

ModifyTagValueNameRequest::ModifyTagValueNameRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTagValueName") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTagValueNameRequest::~ModifyTagValueNameRequest() {}

std::string ModifyTagValueNameRequest::getNewValue() const {
  return newValue_;
}

void ModifyTagValueNameRequest::setNewValue(const std::string &newValue) {
  newValue_ = newValue;
  setBodyParameter(std::string("NewValue"), newValue);
}

std::string ModifyTagValueNameRequest::getValue() const {
  return value_;
}

void ModifyTagValueNameRequest::setValue(const std::string &value) {
  value_ = value;
  setBodyParameter(std::string("Value"), value);
}

std::string ModifyTagValueNameRequest::getKey() const {
  return key_;
}

void ModifyTagValueNameRequest::setKey(const std::string &key) {
  key_ = key;
  setBodyParameter(std::string("Key"), key);
}

