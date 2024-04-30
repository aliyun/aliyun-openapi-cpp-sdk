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

#include <alibabacloud/dcdn/model/ModifyDcdnWafGroupRequest.h>

using AlibabaCloud::Dcdn::Model::ModifyDcdnWafGroupRequest;

ModifyDcdnWafGroupRequest::ModifyDcdnWafGroupRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "ModifyDcdnWafGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDcdnWafGroupRequest::~ModifyDcdnWafGroupRequest() {}

std::string ModifyDcdnWafGroupRequest::getName() const {
  return name_;
}

void ModifyDcdnWafGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string ModifyDcdnWafGroupRequest::getRules() const {
  return rules_;
}

void ModifyDcdnWafGroupRequest::setRules(const std::string &rules) {
  rules_ = rules;
  setBodyParameter(std::string("Rules"), rules);
}

long ModifyDcdnWafGroupRequest::getId() const {
  return id_;
}

void ModifyDcdnWafGroupRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

