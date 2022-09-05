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

#include <alibabacloud/cdn/model/DescribeCdnDomainByCertificateRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainByCertificateRequest;

DescribeCdnDomainByCertificateRequest::DescribeCdnDomainByCertificateRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnDomainByCertificate") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnDomainByCertificateRequest::~DescribeCdnDomainByCertificateRequest() {}

long DescribeCdnDomainByCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnDomainByCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCdnDomainByCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void DescribeCdnDomainByCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

