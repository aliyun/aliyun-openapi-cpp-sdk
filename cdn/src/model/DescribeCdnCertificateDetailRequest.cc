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

#include <alibabacloud/cdn/model/DescribeCdnCertificateDetailRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnCertificateDetailRequest;

DescribeCdnCertificateDetailRequest::DescribeCdnCertificateDetailRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnCertificateDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnCertificateDetailRequest::~DescribeCdnCertificateDetailRequest() {}

std::string DescribeCdnCertificateDetailRequest::getCertName() const {
  return certName_;
}

void DescribeCdnCertificateDetailRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

long DescribeCdnCertificateDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnCertificateDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCdnCertificateDetailRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeCdnCertificateDetailRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

