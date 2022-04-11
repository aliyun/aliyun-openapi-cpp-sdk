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

#include <alibabacloud/vod/model/VerifyVodDomainOwnerRequest.h>

using AlibabaCloud::Vod::Model::VerifyVodDomainOwnerRequest;

VerifyVodDomainOwnerRequest::VerifyVodDomainOwnerRequest()
    : RpcServiceRequest("vod", "2017-03-21", "VerifyVodDomainOwner") {
  setMethod(HttpRequest::Method::Post);
}

VerifyVodDomainOwnerRequest::~VerifyVodDomainOwnerRequest() {}

std::string VerifyVodDomainOwnerRequest::getVerifyType() const {
  return verifyType_;
}

void VerifyVodDomainOwnerRequest::setVerifyType(const std::string &verifyType) {
  verifyType_ = verifyType;
  setParameter(std::string("VerifyType"), verifyType);
}

std::string VerifyVodDomainOwnerRequest::getDomainName() const {
  return domainName_;
}

void VerifyVodDomainOwnerRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long VerifyVodDomainOwnerRequest::getOwnerId() const {
  return ownerId_;
}

void VerifyVodDomainOwnerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

