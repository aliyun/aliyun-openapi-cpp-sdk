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

#include <alibabacloud/oceanbasepro/model/ModifyTagNameRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTagNameRequest;

ModifyTagNameRequest::ModifyTagNameRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTagName") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTagNameRequest::~ModifyTagNameRequest() {}

std::string ModifyTagNameRequest::getNewKey() const {
  return newKey_;
}

void ModifyTagNameRequest::setNewKey(const std::string &newKey) {
  newKey_ = newKey;
  setBodyParameter(std::string("NewKey"), newKey);
}

std::string ModifyTagNameRequest::getKey() const {
  return key_;
}

void ModifyTagNameRequest::setKey(const std::string &key) {
  key_ = key;
  setBodyParameter(std::string("Key"), key);
}

