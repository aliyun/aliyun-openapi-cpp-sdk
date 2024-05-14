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

#include <alibabacloud/waf-openapi/model/DescribeCertMatchStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::DescribeCertMatchStatusRequest;

DescribeCertMatchStatusRequest::DescribeCertMatchStatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "DescribeCertMatchStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCertMatchStatusRequest::~DescribeCertMatchStatusRequest() {}

std::string DescribeCertMatchStatusRequest::getCertificate() const {
  return certificate_;
}

void DescribeCertMatchStatusRequest::setCertificate(const std::string &certificate) {
  certificate_ = certificate;
  setParameter(std::string("Certificate"), certificate);
}

std::string DescribeCertMatchStatusRequest::getPrivateKey() const {
  return privateKey_;
}

void DescribeCertMatchStatusRequest::setPrivateKey(const std::string &privateKey) {
  privateKey_ = privateKey;
  setParameter(std::string("PrivateKey"), privateKey);
}

std::string DescribeCertMatchStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCertMatchStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCertMatchStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCertMatchStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeCertMatchStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeCertMatchStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCertMatchStatusRequest::getLang() const {
  return lang_;
}

void DescribeCertMatchStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeCertMatchStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeCertMatchStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeCertMatchStatusRequest::getDomain() const {
  return domain_;
}

void DescribeCertMatchStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

