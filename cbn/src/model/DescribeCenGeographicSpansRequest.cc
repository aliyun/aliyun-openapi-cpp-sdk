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

#include <alibabacloud/cbn/model/DescribeCenGeographicSpansRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenGeographicSpansRequest;

DescribeCenGeographicSpansRequest::DescribeCenGeographicSpansRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenGeographicSpans") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenGeographicSpansRequest::~DescribeCenGeographicSpansRequest() {}

long DescribeCenGeographicSpansRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenGeographicSpansRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeCenGeographicSpansRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenGeographicSpansRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCenGeographicSpansRequest::getGeographicSpanId() const {
  return geographicSpanId_;
}

void DescribeCenGeographicSpansRequest::setGeographicSpanId(const std::string &geographicSpanId) {
  geographicSpanId_ = geographicSpanId;
  setParameter(std::string("GeographicSpanId"), geographicSpanId);
}

int DescribeCenGeographicSpansRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenGeographicSpansRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCenGeographicSpansRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenGeographicSpansRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenGeographicSpansRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCenGeographicSpansRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCenGeographicSpansRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCenGeographicSpansRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCenGeographicSpansRequest::getVersion() const {
  return version_;
}

void DescribeCenGeographicSpansRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

