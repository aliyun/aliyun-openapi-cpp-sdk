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

#include <alibabacloud/tag/model/ListSupportResourceTypesRequest.h>

using AlibabaCloud::Tag::Model::ListSupportResourceTypesRequest;

ListSupportResourceTypesRequest::ListSupportResourceTypesRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ListSupportResourceTypes") {
  setMethod(HttpRequest::Method::Post);
}

ListSupportResourceTypesRequest::~ListSupportResourceTypesRequest() {}

std::string ListSupportResourceTypesRequest::getProductCode() const {
  return productCode_;
}

void ListSupportResourceTypesRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string ListSupportResourceTypesRequest::getSupportCode() const {
  return supportCode_;
}

void ListSupportResourceTypesRequest::setSupportCode(const std::string &supportCode) {
  supportCode_ = supportCode;
  setParameter(std::string("SupportCode"), supportCode);
}

std::string ListSupportResourceTypesRequest::getRegionId() const {
  return regionId_;
}

void ListSupportResourceTypesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListSupportResourceTypesRequest::getNextToken() const {
  return nextToken_;
}

void ListSupportResourceTypesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListSupportResourceTypesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListSupportResourceTypesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListSupportResourceTypesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListSupportResourceTypesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListSupportResourceTypesRequest::getResourceTye() const {
  return resourceTye_;
}

void ListSupportResourceTypesRequest::setResourceTye(const std::string &resourceTye) {
  resourceTye_ = resourceTye;
  setParameter(std::string("ResourceTye"), resourceTye);
}

long ListSupportResourceTypesRequest::getOwnerId() const {
  return ownerId_;
}

void ListSupportResourceTypesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListSupportResourceTypesRequest::getMaxResult() const {
  return maxResult_;
}

void ListSupportResourceTypesRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

bool ListSupportResourceTypesRequest::getShowItems() const {
  return showItems_;
}

void ListSupportResourceTypesRequest::setShowItems(bool showItems) {
  showItems_ = showItems;
  setParameter(std::string("ShowItems"), showItems ? "true" : "false");
}

