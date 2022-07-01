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

#include <alibabacloud/ddoscoo/model/ModifyHttp2EnableRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyHttp2EnableRequest;

ModifyHttp2EnableRequest::ModifyHttp2EnableRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyHttp2Enable") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHttp2EnableRequest::~ModifyHttp2EnableRequest() {}

std::string ModifyHttp2EnableRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyHttp2EnableRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyHttp2EnableRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyHttp2EnableRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyHttp2EnableRequest::getEnable() const {
  return enable_;
}

void ModifyHttp2EnableRequest::setEnable(int enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), std::to_string(enable));
}

std::string ModifyHttp2EnableRequest::getDomain() const {
  return domain_;
}

void ModifyHttp2EnableRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

