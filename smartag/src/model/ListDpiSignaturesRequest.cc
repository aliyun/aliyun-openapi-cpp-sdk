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

#include <alibabacloud/smartag/model/ListDpiSignaturesRequest.h>

using AlibabaCloud::Smartag::Model::ListDpiSignaturesRequest;

ListDpiSignaturesRequest::ListDpiSignaturesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ListDpiSignatures") {
  setMethod(HttpRequest::Method::Post);
}

ListDpiSignaturesRequest::~ListDpiSignaturesRequest() {}

long ListDpiSignaturesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListDpiSignaturesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> ListDpiSignaturesRequest::getDpiSignatureNames() const {
  return dpiSignatureNames_;
}

void ListDpiSignaturesRequest::setDpiSignatureNames(const std::vector<std::string> &dpiSignatureNames) {
  dpiSignatureNames_ = dpiSignatureNames;
}

std::vector<std::string> ListDpiSignaturesRequest::getDpiSignatureIds() const {
  return dpiSignatureIds_;
}

void ListDpiSignaturesRequest::setDpiSignatureIds(const std::vector<std::string> &dpiSignatureIds) {
  dpiSignatureIds_ = dpiSignatureIds;
}

std::string ListDpiSignaturesRequest::getRegionId() const {
  return regionId_;
}

void ListDpiSignaturesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDpiSignaturesRequest::getNextToken() const {
  return nextToken_;
}

void ListDpiSignaturesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDpiSignaturesRequest::getDpiGroupId() const {
  return dpiGroupId_;
}

void ListDpiSignaturesRequest::setDpiGroupId(const std::string &dpiGroupId) {
  dpiGroupId_ = dpiGroupId;
  setParameter(std::string("DpiGroupId"), dpiGroupId);
}

std::string ListDpiSignaturesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListDpiSignaturesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListDpiSignaturesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListDpiSignaturesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListDpiSignaturesRequest::getOwnerId() const {
  return ownerId_;
}

void ListDpiSignaturesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListDpiSignaturesRequest::getMaxResults() const {
  return maxResults_;
}

void ListDpiSignaturesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

