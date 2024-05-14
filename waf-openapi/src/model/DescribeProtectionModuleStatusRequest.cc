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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeProtectionModuleStatusRequest;

DescribeProtectionModuleStatusRequest::DescribeProtectionModuleStatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeProtectionModuleStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProtectionModuleStatusRequest::~DescribeProtectionModuleStatusRequest() {}

std::string DescribeProtectionModuleStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeProtectionModuleStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeProtectionModuleStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeProtectionModuleStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeProtectionModuleStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeProtectionModuleStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeProtectionModuleStatusRequest::getLang() const {
  return lang_;
}

void DescribeProtectionModuleStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeProtectionModuleStatusRequest::getDefenseType() const {
  return defenseType_;
}

void DescribeProtectionModuleStatusRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

std::string DescribeProtectionModuleStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeProtectionModuleStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeProtectionModuleStatusRequest::getDomain() const {
  return domain_;
}

void DescribeProtectionModuleStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

