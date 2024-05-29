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

#include <alibabacloud/ddoscoo/model/ModifyOcspStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyOcspStatusRequest;

ModifyOcspStatusRequest::ModifyOcspStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyOcspStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOcspStatusRequest::~ModifyOcspStatusRequest() {}

std::string ModifyOcspStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyOcspStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyOcspStatusRequest::getEnable() const {
  return enable_;
}

void ModifyOcspStatusRequest::setEnable(int enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), std::to_string(enable));
}

std::string ModifyOcspStatusRequest::getDomain() const {
  return domain_;
}

void ModifyOcspStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

