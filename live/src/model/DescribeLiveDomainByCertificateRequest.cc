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

#include <alibabacloud/live/model/DescribeLiveDomainByCertificateRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainByCertificateRequest;

DescribeLiveDomainByCertificateRequest::DescribeLiveDomainByCertificateRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainByCertificate") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainByCertificateRequest::~DescribeLiveDomainByCertificateRequest() {}

std::string DescribeLiveDomainByCertificateRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainByCertificateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeLiveDomainByCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainByCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DescribeLiveDomainByCertificateRequest::getSSLStatus() const {
  return sSLStatus_;
}

void DescribeLiveDomainByCertificateRequest::setSSLStatus(bool sSLStatus) {
  sSLStatus_ = sSLStatus;
  setParameter(std::string("SSLStatus"), sSLStatus ? "true" : "false");
}

std::string DescribeLiveDomainByCertificateRequest::getSSLPub() const {
  return sSLPub_;
}

void DescribeLiveDomainByCertificateRequest::setSSLPub(const std::string &sSLPub) {
  sSLPub_ = sSLPub;
  setParameter(std::string("SSLPub"), sSLPub);
}

