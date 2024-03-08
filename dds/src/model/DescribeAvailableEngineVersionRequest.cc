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

#include <alibabacloud/dds/model/DescribeAvailableEngineVersionRequest.h>

using AlibabaCloud::Dds::Model::DescribeAvailableEngineVersionRequest;

DescribeAvailableEngineVersionRequest::DescribeAvailableEngineVersionRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeAvailableEngineVersion") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableEngineVersionRequest::~DescribeAvailableEngineVersionRequest() {}

long DescribeAvailableEngineVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAvailableEngineVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAvailableEngineVersionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAvailableEngineVersionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAvailableEngineVersionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeAvailableEngineVersionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeAvailableEngineVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAvailableEngineVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAvailableEngineVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAvailableEngineVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAvailableEngineVersionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAvailableEngineVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

