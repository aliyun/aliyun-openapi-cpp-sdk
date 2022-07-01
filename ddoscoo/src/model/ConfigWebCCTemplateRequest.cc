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

#include <alibabacloud/ddoscoo/model/ConfigWebCCTemplateRequest.h>

using AlibabaCloud::Ddoscoo::Model::ConfigWebCCTemplateRequest;

ConfigWebCCTemplateRequest::ConfigWebCCTemplateRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ConfigWebCCTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ConfigWebCCTemplateRequest::~ConfigWebCCTemplateRequest() {}

std::string ConfigWebCCTemplateRequest::get_Template() const {
  return _template_;
}

void ConfigWebCCTemplateRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string ConfigWebCCTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ConfigWebCCTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ConfigWebCCTemplateRequest::getSourceIp() const {
  return sourceIp_;
}

void ConfigWebCCTemplateRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ConfigWebCCTemplateRequest::getDomain() const {
  return domain_;
}

void ConfigWebCCTemplateRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

