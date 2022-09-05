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

#include <alibabacloud/cdn/model/SetCdnDomainCSRCertificateRequest.h>

using AlibabaCloud::Cdn::Model::SetCdnDomainCSRCertificateRequest;

SetCdnDomainCSRCertificateRequest::SetCdnDomainCSRCertificateRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "SetCdnDomainCSRCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SetCdnDomainCSRCertificateRequest::~SetCdnDomainCSRCertificateRequest() {}

std::string SetCdnDomainCSRCertificateRequest::getServerCertificate() const {
  return serverCertificate_;
}

void SetCdnDomainCSRCertificateRequest::setServerCertificate(const std::string &serverCertificate) {
  serverCertificate_ = serverCertificate;
  setParameter(std::string("ServerCertificate"), serverCertificate);
}

std::string SetCdnDomainCSRCertificateRequest::getDomainName() const {
  return domainName_;
}

void SetCdnDomainCSRCertificateRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long SetCdnDomainCSRCertificateRequest::getOwnerId() const {
  return ownerId_;
}

void SetCdnDomainCSRCertificateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

