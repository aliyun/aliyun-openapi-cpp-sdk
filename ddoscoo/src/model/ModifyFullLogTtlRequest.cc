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

#include <alibabacloud/ddoscoo/model/ModifyFullLogTtlRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyFullLogTtlRequest;

ModifyFullLogTtlRequest::ModifyFullLogTtlRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyFullLogTtl") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFullLogTtlRequest::~ModifyFullLogTtlRequest() {}

int ModifyFullLogTtlRequest::getTtl() const {
  return ttl_;
}

void ModifyFullLogTtlRequest::setTtl(int ttl) {
  ttl_ = ttl;
  setParameter(std::string("Ttl"), std::to_string(ttl));
}

std::string ModifyFullLogTtlRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyFullLogTtlRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyFullLogTtlRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyFullLogTtlRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyFullLogTtlRequest::getLang() const {
  return lang_;
}

void ModifyFullLogTtlRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

