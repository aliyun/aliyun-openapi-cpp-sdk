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

#include <alibabacloud/waf-openapi/model/DescribeProtectionModuleCodeConfigRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeProtectionModuleCodeConfigRequest;

DescribeProtectionModuleCodeConfigRequest::DescribeProtectionModuleCodeConfigRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeProtectionModuleCodeConfig") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProtectionModuleCodeConfigRequest::~DescribeProtectionModuleCodeConfigRequest() {}

std::string DescribeProtectionModuleCodeConfigRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeProtectionModuleCodeConfigRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeProtectionModuleCodeConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeProtectionModuleCodeConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeProtectionModuleCodeConfigRequest::getRegionId() const {
  return regionId_;
}

void DescribeProtectionModuleCodeConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeProtectionModuleCodeConfigRequest::getLang() const {
  return lang_;
}

void DescribeProtectionModuleCodeConfigRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeProtectionModuleCodeConfigRequest::getCodeValue() const {
  return codeValue_;
}

void DescribeProtectionModuleCodeConfigRequest::setCodeValue(int codeValue) {
  codeValue_ = codeValue;
  setParameter(std::string("CodeValue"), std::to_string(codeValue));
}

std::string DescribeProtectionModuleCodeConfigRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeProtectionModuleCodeConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeProtectionModuleCodeConfigRequest::getCodeType() const {
  return codeType_;
}

void DescribeProtectionModuleCodeConfigRequest::setCodeType(int codeType) {
  codeType_ = codeType;
  setParameter(std::string("CodeType"), std::to_string(codeType));
}

