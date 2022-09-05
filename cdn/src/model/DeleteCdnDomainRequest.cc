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

#include <alibabacloud/cdn/model/DeleteCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::DeleteCdnDomainRequest;

DeleteCdnDomainRequest::DeleteCdnDomainRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DeleteCdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCdnDomainRequest::~DeleteCdnDomainRequest() {}

std::string DeleteCdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteCdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteCdnDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCdnDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteCdnDomainRequest::getDomainName() const {
  return domainName_;
}

void DeleteCdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteCdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

