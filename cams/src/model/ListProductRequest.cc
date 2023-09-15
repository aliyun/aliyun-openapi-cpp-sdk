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

#include <alibabacloud/cams/model/ListProductRequest.h>

using AlibabaCloud::Cams::Model::ListProductRequest;

ListProductRequest::ListProductRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ListProduct") {
  setMethod(HttpRequest::Method::Post);
}

ListProductRequest::~ListProductRequest() {}

long ListProductRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListProductRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListProductRequest::getBefore() const {
  return before_;
}

void ListProductRequest::setBefore(const std::string &before) {
  before_ = before;
  setParameter(std::string("Before"), before);
}

std::string ListProductRequest::getExtendFunction() const {
  return extendFunction_;
}

void ListProductRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ListProductRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListProductRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListProductRequest::getMetaVersion() const {
  return metaVersion_;
}

void ListProductRequest::setMetaVersion(const std::string &metaVersion) {
  metaVersion_ = metaVersion;
  setParameter(std::string("MetaVersion"), metaVersion);
}

long ListProductRequest::getLimit() const {
  return limit_;
}

void ListProductRequest::setLimit(long limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListProductRequest::getAfter() const {
  return after_;
}

void ListProductRequest::setAfter(const std::string &after) {
  after_ = after;
  setParameter(std::string("After"), after);
}

std::string ListProductRequest::getRouteName() const {
  return routeName_;
}

void ListProductRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ListProductRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListProductRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ListProductRequest::getOwnerId() const {
  return ownerId_;
}

void ListProductRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListProductRequest::getWabaId() const {
  return wabaId_;
}

void ListProductRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setParameter(std::string("WabaId"), wabaId);
}

std::string ListProductRequest::getCatalogId() const {
  return catalogId_;
}

void ListProductRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string ListProductRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ListProductRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

std::string ListProductRequest::getFields() const {
  return fields_;
}

void ListProductRequest::setFields(const std::string &fields) {
  fields_ = fields;
  setParameter(std::string("Fields"), fields);
}

