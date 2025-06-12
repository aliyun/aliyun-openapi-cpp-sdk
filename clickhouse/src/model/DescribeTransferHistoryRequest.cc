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

#include <alibabacloud/clickhouse/model/DescribeTransferHistoryRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeTransferHistoryRequest;

DescribeTransferHistoryRequest::DescribeTransferHistoryRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeTransferHistory") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTransferHistoryRequest::~DescribeTransferHistoryRequest() {}

long DescribeTransferHistoryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTransferHistoryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTransferHistoryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTransferHistoryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTransferHistoryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTransferHistoryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTransferHistoryRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeTransferHistoryRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeTransferHistoryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTransferHistoryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTransferHistoryRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTransferHistoryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

