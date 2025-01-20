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

#include <alibabacloud/polardb/model/DescribeDBClusterSSLRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterSSLRequest;

DescribeDBClusterSSLRequest::DescribeDBClusterSSLRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterSSL") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterSSLRequest::~DescribeDBClusterSSLRequest() {}

long DescribeDBClusterSSLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClusterSSLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterSSLRequest::getEndpointId() const {
  return endpointId_;
}

void DescribeDBClusterSSLRequest::setEndpointId(const std::string &endpointId) {
  endpointId_ = endpointId;
  setParameter(std::string("EndpointId"), endpointId);
}

std::string DescribeDBClusterSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClusterSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClusterSSLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClusterSSLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClusterSSLRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterSSLRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterSSLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClusterSSLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClusterSSLRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClusterSSLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

