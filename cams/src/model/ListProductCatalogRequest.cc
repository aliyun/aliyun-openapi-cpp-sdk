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

#include <alibabacloud/cams/model/ListProductCatalogRequest.h>

using AlibabaCloud::Cams::Model::ListProductCatalogRequest;

ListProductCatalogRequest::ListProductCatalogRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ListProductCatalog") {
  setMethod(HttpRequest::Method::Post);
}

ListProductCatalogRequest::~ListProductCatalogRequest() {}

long ListProductCatalogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListProductCatalogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListProductCatalogRequest::getBefore() const {
  return before_;
}

void ListProductCatalogRequest::setBefore(const std::string &before) {
  before_ = before;
  setParameter(std::string("Before"), before);
}

std::string ListProductCatalogRequest::getExtendFunction() const {
  return extendFunction_;
}

void ListProductCatalogRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ListProductCatalogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListProductCatalogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListProductCatalogRequest::getMetaVersion() const {
  return metaVersion_;
}

void ListProductCatalogRequest::setMetaVersion(const std::string &metaVersion) {
  metaVersion_ = metaVersion;
  setParameter(std::string("MetaVersion"), metaVersion);
}

long ListProductCatalogRequest::getLimit() const {
  return limit_;
}

void ListProductCatalogRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListProductCatalogRequest::getAfter() const {
  return after_;
}

void ListProductCatalogRequest::setAfter(const std::string &after) {
  after_ = after;
  setParameter(std::string("After"), after);
}

std::string ListProductCatalogRequest::getRouteName() const {
  return routeName_;
}

void ListProductCatalogRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ListProductCatalogRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListProductCatalogRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ListProductCatalogRequest::getBusinessId() const {
  return businessId_;
}

void ListProductCatalogRequest::setBusinessId(long businessId) {
  businessId_ = businessId;
  setParameter(std::string("BusinessId"), std::to_string(businessId));
}

long ListProductCatalogRequest::getOwnerId() const {
  return ownerId_;
}

void ListProductCatalogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListProductCatalogRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ListProductCatalogRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string ListProductCatalogRequest::getFields() const {
  return fields_;
}

void ListProductCatalogRequest::setFields(const std::string &fields) {
  fields_ = fields;
  setParameter(std::string("Fields"), fields);
}

