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

#include <alibabacloud/dcdn/model/CreateDcdnWafGroupRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnWafGroupRequest;

CreateDcdnWafGroupRequest::CreateDcdnWafGroupRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnWafGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateDcdnWafGroupRequest::~CreateDcdnWafGroupRequest() {}

std::string CreateDcdnWafGroupRequest::getSubscribe() const {
  return subscribe_;
}

void CreateDcdnWafGroupRequest::setSubscribe(const std::string &subscribe) {
  subscribe_ = subscribe;
  setBodyParameter(std::string("Subscribe"), subscribe);
}

std::string CreateDcdnWafGroupRequest::getName() const {
  return name_;
}

void CreateDcdnWafGroupRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long CreateDcdnWafGroupRequest::getTemplateId() const {
  return templateId_;
}

void CreateDcdnWafGroupRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), std::to_string(templateId));
}

