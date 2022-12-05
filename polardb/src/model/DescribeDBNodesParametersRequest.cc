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

#include <alibabacloud/polardb/model/DescribeDBNodesParametersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBNodesParametersRequest;

DescribeDBNodesParametersRequest::DescribeDBNodesParametersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBNodesParameters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBNodesParametersRequest::~DescribeDBNodesParametersRequest() {}

long DescribeDBNodesParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBNodesParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBNodesParametersRequest::getDBNodeIds() const {
  return dBNodeIds_;
}

void DescribeDBNodesParametersRequest::setDBNodeIds(const std::string &dBNodeIds) {
  dBNodeIds_ = dBNodeIds;
  setParameter(std::string("DBNodeIds"), dBNodeIds);
}

std::string DescribeDBNodesParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBNodesParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBNodesParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBNodesParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBNodesParametersRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBNodesParametersRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBNodesParametersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBNodesParametersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBNodesParametersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBNodesParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

