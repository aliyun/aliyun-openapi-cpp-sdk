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

#include <alibabacloud/rds/model/DescribeTagsRequest.h>

using AlibabaCloud::Rds::Model::DescribeTagsRequest;

DescribeTagsRequest::DescribeTagsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTagsRequest::~DescribeTagsRequest() {}

long DescribeTagsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTagsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTagsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeTagsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeTagsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTagsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTagsRequest::getRegionId() const {
  return regionId_;
}

void DescribeTagsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTagsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeTagsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeTagsRequest::getProxyId() const {
  return proxyId_;
}

void DescribeTagsRequest::setProxyId(const std::string &proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("proxyId"), proxyId);
}

std::string DescribeTagsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTagsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTagsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTagsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTagsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTagsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTagsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeTagsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeTagsRequest::getTags() const {
  return tags_;
}

void DescribeTagsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

