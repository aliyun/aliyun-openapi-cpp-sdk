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

#include <alibabacloud/r-kvstore/model/DescribeMonitorItemsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeMonitorItemsRequest;

DescribeMonitorItemsRequest::DescribeMonitorItemsRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeMonitorItems") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMonitorItemsRequest::~DescribeMonitorItemsRequest() {}

long DescribeMonitorItemsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMonitorItemsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeMonitorItemsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMonitorItemsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMonitorItemsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeMonitorItemsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeMonitorItemsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMonitorItemsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeMonitorItemsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeMonitorItemsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeMonitorItemsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMonitorItemsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

