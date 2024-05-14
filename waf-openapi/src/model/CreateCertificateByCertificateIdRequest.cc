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

#include <alibabacloud/waf-openapi/model/CreateCertificateByCertificateIdRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateCertificateByCertificateIdRequest;

CreateCertificateByCertificateIdRequest::CreateCertificateByCertificateIdRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "CreateCertificateByCertificateId") {
  setMethod(HttpRequest::Method::Post);
}

CreateCertificateByCertificateIdRequest::~CreateCertificateByCertificateIdRequest() {}

std::string CreateCertificateByCertificateIdRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateCertificateByCertificateIdRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateCertificateByCertificateIdRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateCertificateByCertificateIdRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateCertificateByCertificateIdRequest::getRegionId() const {
  return regionId_;
}

void CreateCertificateByCertificateIdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCertificateByCertificateIdRequest::getLang() const {
  return lang_;
}

void CreateCertificateByCertificateIdRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long CreateCertificateByCertificateIdRequest::getCertificateId() const {
  return certificateId_;
}

void CreateCertificateByCertificateIdRequest::setCertificateId(long certificateId) {
  certificateId_ = certificateId;
  setParameter(std::string("CertificateId"), std::to_string(certificateId));
}

std::string CreateCertificateByCertificateIdRequest::getInstanceId() const {
  return instanceId_;
}

void CreateCertificateByCertificateIdRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateCertificateByCertificateIdRequest::getDomain() const {
  return domain_;
}

void CreateCertificateByCertificateIdRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

