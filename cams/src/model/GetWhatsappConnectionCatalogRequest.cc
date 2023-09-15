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

#include <alibabacloud/cams/model/GetWhatsappConnectionCatalogRequest.h>

using AlibabaCloud::Cams::Model::GetWhatsappConnectionCatalogRequest;

GetWhatsappConnectionCatalogRequest::GetWhatsappConnectionCatalogRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetWhatsappConnectionCatalog") {
  setMethod(HttpRequest::Method::Post);
}

GetWhatsappConnectionCatalogRequest::~GetWhatsappConnectionCatalogRequest() {}

long GetWhatsappConnectionCatalogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetWhatsappConnectionCatalogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetWhatsappConnectionCatalogRequest::getExtendFunction() const {
  return extendFunction_;
}

void GetWhatsappConnectionCatalogRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string GetWhatsappConnectionCatalogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetWhatsappConnectionCatalogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetWhatsappConnectionCatalogRequest::getMetaVersion() const {
  return metaVersion_;
}

void GetWhatsappConnectionCatalogRequest::setMetaVersion(const std::string &metaVersion) {
  metaVersion_ = metaVersion;
  setParameter(std::string("MetaVersion"), metaVersion);
}

std::string GetWhatsappConnectionCatalogRequest::getRouteName() const {
  return routeName_;
}

void GetWhatsappConnectionCatalogRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string GetWhatsappConnectionCatalogRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetWhatsappConnectionCatalogRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetWhatsappConnectionCatalogRequest::getOwnerId() const {
  return ownerId_;
}

void GetWhatsappConnectionCatalogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetWhatsappConnectionCatalogRequest::getWabaId() const {
  return wabaId_;
}

void GetWhatsappConnectionCatalogRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setParameter(std::string("WabaId"), wabaId);
}

std::string GetWhatsappConnectionCatalogRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetWhatsappConnectionCatalogRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

