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

#include <alibabacloud/waf-openapi/model/DescribeCertificatesRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeCertificatesRequest;

DescribeCertificatesRequest::DescribeCertificatesRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeCertificates") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCertificatesRequest::~DescribeCertificatesRequest() {}

std::string DescribeCertificatesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCertificatesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCertificatesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCertificatesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeCertificatesRequest::getRegionId() const {
  return regionId_;
}

void DescribeCertificatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCertificatesRequest::getLang() const {
  return lang_;
}

void DescribeCertificatesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeCertificatesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCertificatesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeCertificatesRequest::getDomain() const {
  return domain_;
}

void DescribeCertificatesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

