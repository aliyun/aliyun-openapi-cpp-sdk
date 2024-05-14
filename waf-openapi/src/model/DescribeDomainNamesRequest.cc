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

#include <alibabacloud/waf-openapi/model/DescribeDomainNamesRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeDomainNamesRequest;

DescribeDomainNamesRequest::DescribeDomainNamesRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeDomainNames") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainNamesRequest::~DescribeDomainNamesRequest() {}

std::string DescribeDomainNamesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDomainNamesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDomainNamesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeDomainNamesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeDomainNamesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDomainNamesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDomainNamesRequest::getLang() const {
  return lang_;
}

void DescribeDomainNamesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeDomainNamesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDomainNamesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDomainNamesRequest::getCallSource() const {
  return callSource_;
}

void DescribeDomainNamesRequest::setCallSource(const std::string &callSource) {
  callSource_ = callSource;
  setParameter(std::string("CallSource"), callSource);
}

