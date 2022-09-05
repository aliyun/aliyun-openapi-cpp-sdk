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

#include <alibabacloud/cdn/model/VerifyDomainOwnerRequest.h>

using AlibabaCloud::Cdn::Model::VerifyDomainOwnerRequest;

VerifyDomainOwnerRequest::VerifyDomainOwnerRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "VerifyDomainOwner") {
  setMethod(HttpRequest::Method::Post);
}

VerifyDomainOwnerRequest::~VerifyDomainOwnerRequest() {}

std::string VerifyDomainOwnerRequest::getVerifyType() const {
  return verifyType_;
}

void VerifyDomainOwnerRequest::setVerifyType(const std::string &verifyType) {
  verifyType_ = verifyType;
  setParameter(std::string("VerifyType"), verifyType);
}

std::string VerifyDomainOwnerRequest::getDomainName() const {
  return domainName_;
}

void VerifyDomainOwnerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long VerifyDomainOwnerRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyDomainOwnerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

