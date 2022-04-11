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

#include <alibabacloud/vod/model/DeleteVodDomainRequest.h>

using AlibabaCloud::Vod::Model::DeleteVodDomainRequest;

DeleteVodDomainRequest::DeleteVodDomainRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteVodDomain") {
  setMethod(HttpRequest::Method::Post);
}

DeleteVodDomainRequest::~DeleteVodDomainRequest() {}

std::string DeleteVodDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteVodDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteVodDomainRequest::getDomainName() const {
  return domainName_;
}

void DeleteVodDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteVodDomainRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteVodDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteVodDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteVodDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

