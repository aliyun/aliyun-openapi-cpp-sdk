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

#include <alibabacloud/ddoscoo/model/ModifyWebAccessModeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebAccessModeRequest;

ModifyWebAccessModeRequest::ModifyWebAccessModeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebAccessMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebAccessModeRequest::~ModifyWebAccessModeRequest() {}

std::string ModifyWebAccessModeRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebAccessModeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyWebAccessModeRequest::getDomain() const {
  return domain_;
}

void ModifyWebAccessModeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int ModifyWebAccessModeRequest::getAccessMode() const {
  return accessMode_;
}

void ModifyWebAccessModeRequest::setAccessMode(int accessMode) {
  accessMode_ = accessMode;
  setParameter(std::string("AccessMode"), std::to_string(accessMode));
}

