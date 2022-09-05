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

#include <alibabacloud/cdn/model/DescribeCertificateInfoByIDRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCertificateInfoByIDRequest;

DescribeCertificateInfoByIDRequest::DescribeCertificateInfoByIDRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCertificateInfoByID") {
  setMethod(HttpRequest::Method::Get);
}

DescribeCertificateInfoByIDRequest::~DescribeCertificateInfoByIDRequest() {}

std::string DescribeCertificateInfoByIDRequest::getCertId() const {
  return certId_;
}

void DescribeCertificateInfoByIDRequest::setCertId(const std::string &certId) {
  certId_ = certId;
  setParameter(std::string("CertId"), certId);
}

long DescribeCertificateInfoByIDRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCertificateInfoByIDRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

