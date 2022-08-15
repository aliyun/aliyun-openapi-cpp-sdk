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

#include <alibabacloud/hitsdb/model/GetLindormInstanceListRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLindormInstanceListRequest;

GetLindormInstanceListRequest::GetLindormInstanceListRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetLindormInstanceList") {
  setMethod(HttpRequest::Method::Post);
}

GetLindormInstanceListRequest::~GetLindormInstanceListRequest() {}

long GetLindormInstanceListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetLindormInstanceListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int GetLindormInstanceListRequest::getSupportEngine() const {
  return supportEngine_;
}

void GetLindormInstanceListRequest::setSupportEngine(int supportEngine) {
  supportEngine_ = supportEngine;
  setParameter(std::string("SupportEngine"), std::to_string(supportEngine));
}

int GetLindormInstanceListRequest::getPageNumber() const {
  return pageNumber_;
}

void GetLindormInstanceListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetLindormInstanceListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetLindormInstanceListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetLindormInstanceListRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void GetLindormInstanceListRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string GetLindormInstanceListRequest::getSecurityToken() const {
  return securityToken_;
}

void GetLindormInstanceListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetLindormInstanceListRequest::getRegionId() const {
  return regionId_;
}

void GetLindormInstanceListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetLindormInstanceListRequest::getPageSize() const {
  return pageSize_;
}

void GetLindormInstanceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<GetLindormInstanceListRequest::Tag> GetLindormInstanceListRequest::getTag() const {
  return tag_;
}

void GetLindormInstanceListRequest::setTag(const std::vector<GetLindormInstanceListRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string GetLindormInstanceListRequest::getQueryStr() const {
  return queryStr_;
}

void GetLindormInstanceListRequest::setQueryStr(const std::string &queryStr) {
  queryStr_ = queryStr;
  setParameter(std::string("QueryStr"), queryStr);
}

std::string GetLindormInstanceListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetLindormInstanceListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetLindormInstanceListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetLindormInstanceListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetLindormInstanceListRequest::getOwnerId() const {
  return ownerId_;
}

void GetLindormInstanceListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetLindormInstanceListRequest::getServiceType() const {
  return serviceType_;
}

void GetLindormInstanceListRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

