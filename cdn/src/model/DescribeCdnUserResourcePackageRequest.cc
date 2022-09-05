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

#include <alibabacloud/cdn/model/DescribeCdnUserResourcePackageRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnUserResourcePackageRequest;

DescribeCdnUserResourcePackageRequest::DescribeCdnUserResourcePackageRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnUserResourcePackage") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnUserResourcePackageRequest::~DescribeCdnUserResourcePackageRequest() {}

std::string DescribeCdnUserResourcePackageRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeCdnUserResourcePackageRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long DescribeCdnUserResourcePackageRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnUserResourcePackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCdnUserResourcePackageRequest::getStatus() const {
  return status_;
}

void DescribeCdnUserResourcePackageRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

