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

#include <alibabacloud/rds/model/DescribeADInfoRequest.h>

using AlibabaCloud::Rds::Model::DescribeADInfoRequest;

DescribeADInfoRequest::DescribeADInfoRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeADInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeADInfoRequest::~DescribeADInfoRequest() {}

long DescribeADInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeADInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeADInfoRequest::getClientToken() const {
  return clientToken_;
}

void DescribeADInfoRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeADInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeADInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeADInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeADInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeADInfoRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeADInfoRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeADInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeADInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeADInfoRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeADInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

