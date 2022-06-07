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

#include <alibabacloud/adb/model/DescribeSlowLogTrendRequest.h>

using AlibabaCloud::Adb::Model::DescribeSlowLogTrendRequest;

DescribeSlowLogTrendRequest::DescribeSlowLogTrendRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeSlowLogTrend") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlowLogTrendRequest::~DescribeSlowLogTrendRequest() {}

long DescribeSlowLogTrendRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSlowLogTrendRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSlowLogTrendRequest::getStartTime() const {
  return startTime_;
}

void DescribeSlowLogTrendRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSlowLogTrendRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSlowLogTrendRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSlowLogTrendRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSlowLogTrendRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSlowLogTrendRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSlowLogTrendRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSlowLogTrendRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSlowLogTrendRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSlowLogTrendRequest::getEndTime() const {
  return endTime_;
}

void DescribeSlowLogTrendRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeSlowLogTrendRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSlowLogTrendRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSlowLogTrendRequest::getDBName() const {
  return dBName_;
}

void DescribeSlowLogTrendRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

