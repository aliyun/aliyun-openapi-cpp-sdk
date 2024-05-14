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

#include <alibabacloud/waf-openapi/model/DescribeInstanceInfoRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeInstanceInfoRequest;

DescribeInstanceInfoRequest::DescribeInstanceInfoRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeInstanceInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceInfoRequest::~DescribeInstanceInfoRequest() {}

std::string DescribeInstanceInfoRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstanceInfoRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInstanceInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeInstanceInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeInstanceInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeInstanceInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInstanceInfoRequest::getInstanceSource() const {
  return instanceSource_;
}

void DescribeInstanceInfoRequest::setInstanceSource(const std::string &instanceSource) {
  instanceSource_ = instanceSource;
  setParameter(std::string("InstanceSource"), instanceSource);
}

std::string DescribeInstanceInfoRequest::getLang() const {
  return lang_;
}

void DescribeInstanceInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeInstanceInfoRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

