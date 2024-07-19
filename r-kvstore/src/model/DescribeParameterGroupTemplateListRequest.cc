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

#include <alibabacloud/r-kvstore/model/DescribeParameterGroupTemplateListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeParameterGroupTemplateListRequest;

DescribeParameterGroupTemplateListRequest::DescribeParameterGroupTemplateListRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeParameterGroupTemplateList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeParameterGroupTemplateListRequest::~DescribeParameterGroupTemplateListRequest() {}

long DescribeParameterGroupTemplateListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeParameterGroupTemplateListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeParameterGroupTemplateListRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeParameterGroupTemplateListRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeParameterGroupTemplateListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeParameterGroupTemplateListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeParameterGroupTemplateListRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeParameterGroupTemplateListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeParameterGroupTemplateListRequest::getEngineType() const {
  return engineType_;
}

void DescribeParameterGroupTemplateListRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

std::string DescribeParameterGroupTemplateListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeParameterGroupTemplateListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeParameterGroupTemplateListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeParameterGroupTemplateListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeParameterGroupTemplateListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeParameterGroupTemplateListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeParameterGroupTemplateListRequest::getCategory() const {
  return category_;
}

void DescribeParameterGroupTemplateListRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

std::string DescribeParameterGroupTemplateListRequest::getCharacterType() const {
  return characterType_;
}

void DescribeParameterGroupTemplateListRequest::setCharacterType(const std::string &characterType) {
  characterType_ = characterType;
  setParameter(std::string("CharacterType"), characterType);
}

