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

#include <alibabacloud/waf-openapi/model/DeleteDomainRequest.h>

using AlibabaCloud::Waf_openapi::Model::DeleteDomainRequest;

DeleteDomainRequest::DeleteDomainRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DeleteDomain") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDomainRequest::~DeleteDomainRequest() {}

std::string DeleteDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteDomainRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteDomainRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DeleteDomainRequest::getRegionId() const {
  return regionId_;
}

void DeleteDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDomainRequest::getLang() const {
  return lang_;
}

void DeleteDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DeleteDomainRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteDomainRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteDomainRequest::getDomain() const {
  return domain_;
}

void DeleteDomainRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

