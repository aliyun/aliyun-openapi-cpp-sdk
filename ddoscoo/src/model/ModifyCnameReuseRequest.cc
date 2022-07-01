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

#include <alibabacloud/ddoscoo/model/ModifyCnameReuseRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyCnameReuseRequest;

ModifyCnameReuseRequest::ModifyCnameReuseRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyCnameReuse") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCnameReuseRequest::~ModifyCnameReuseRequest() {}

std::string ModifyCnameReuseRequest::getCname() const {
  return cname_;
}

void ModifyCnameReuseRequest::setCname(const std::string &cname) {
  cname_ = cname;
  setParameter(std::string("Cname"), cname);
}

std::string ModifyCnameReuseRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyCnameReuseRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyCnameReuseRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyCnameReuseRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyCnameReuseRequest::getEnable() const {
  return enable_;
}

void ModifyCnameReuseRequest::setEnable(int enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), std::to_string(enable));
}

std::string ModifyCnameReuseRequest::getDomain() const {
  return domain_;
}

void ModifyCnameReuseRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

