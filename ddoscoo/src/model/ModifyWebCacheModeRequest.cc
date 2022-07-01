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

#include <alibabacloud/ddoscoo/model/ModifyWebCacheModeRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyWebCacheModeRequest;

ModifyWebCacheModeRequest::ModifyWebCacheModeRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifyWebCacheMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebCacheModeRequest::~ModifyWebCacheModeRequest() {}

std::string ModifyWebCacheModeRequest::getMode() const {
  return mode_;
}

void ModifyWebCacheModeRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyWebCacheModeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyWebCacheModeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyWebCacheModeRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebCacheModeRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyWebCacheModeRequest::getDomain() const {
  return domain_;
}

void ModifyWebCacheModeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

