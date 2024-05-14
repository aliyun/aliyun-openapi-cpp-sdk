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

#include <alibabacloud/waf-openapi/model/ModifyDomainIpv6StatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyDomainIpv6StatusRequest;

ModifyDomainIpv6StatusRequest::ModifyDomainIpv6StatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyDomainIpv6Status") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDomainIpv6StatusRequest::~ModifyDomainIpv6StatusRequest() {}

std::string ModifyDomainIpv6StatusRequest::getWafVersion() const {
  return wafVersion_;
}

void ModifyDomainIpv6StatusRequest::setWafVersion(const std::string &wafVersion) {
  wafVersion_ = wafVersion;
  setParameter(std::string("WafVersion"), wafVersion);
}

std::string ModifyDomainIpv6StatusRequest::getEnabled() const {
  return enabled_;
}

void ModifyDomainIpv6StatusRequest::setEnabled(const std::string &enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled);
}

std::string ModifyDomainIpv6StatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDomainIpv6StatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDomainIpv6StatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyDomainIpv6StatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyDomainIpv6StatusRequest::getRegionId() const {
  return regionId_;
}

void ModifyDomainIpv6StatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDomainIpv6StatusRequest::getLang() const {
  return lang_;
}

void ModifyDomainIpv6StatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyDomainIpv6StatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDomainIpv6StatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDomainIpv6StatusRequest::getDomain() const {
  return domain_;
}

void ModifyDomainIpv6StatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

