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

#include <alibabacloud/r-kvstore/model/DescribeIntranetAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeIntranetAttributeRequest;

DescribeIntranetAttributeRequest::DescribeIntranetAttributeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeIntranetAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIntranetAttributeRequest::~DescribeIntranetAttributeRequest() {}

long DescribeIntranetAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIntranetAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeIntranetAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeIntranetAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeIntranetAttributeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeIntranetAttributeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeIntranetAttributeRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeIntranetAttributeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeIntranetAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIntranetAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIntranetAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIntranetAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIntranetAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIntranetAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeIntranetAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeIntranetAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

