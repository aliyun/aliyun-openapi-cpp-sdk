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

#include <alibabacloud/r-kvstore/model/DescribeParameterGroupSupportParamRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeParameterGroupSupportParamRequest;

DescribeParameterGroupSupportParamRequest::DescribeParameterGroupSupportParamRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeParameterGroupSupportParam") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParameterGroupSupportParamRequest::~DescribeParameterGroupSupportParamRequest() {}

long DescribeParameterGroupSupportParamRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeParameterGroupSupportParamRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeParameterGroupSupportParamRequest::getEngineVersion() const {
  return engineVersion_;
}

void DescribeParameterGroupSupportParamRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string DescribeParameterGroupSupportParamRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeParameterGroupSupportParamRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeParameterGroupSupportParamRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeParameterGroupSupportParamRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeParameterGroupSupportParamRequest::getEngineType() const {
  return engineType_;
}

void DescribeParameterGroupSupportParamRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

std::string DescribeParameterGroupSupportParamRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeParameterGroupSupportParamRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeParameterGroupSupportParamRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeParameterGroupSupportParamRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeParameterGroupSupportParamRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeParameterGroupSupportParamRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeParameterGroupSupportParamRequest::getCategory() const {
  return category_;
}

void DescribeParameterGroupSupportParamRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

