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

#include <alibabacloud/adb/model/DescribeProcessListRequest.h>

using AlibabaCloud::Adb::Model::DescribeProcessListRequest;

DescribeProcessListRequest::DescribeProcessListRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeProcessList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProcessListRequest::~DescribeProcessListRequest() {}

long DescribeProcessListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeProcessListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeProcessListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeProcessListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeProcessListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeProcessListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeProcessListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeProcessListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeProcessListRequest::getShowFull() const {
  return showFull_;
}

void DescribeProcessListRequest::setShowFull(bool showFull) {
  showFull_ = showFull;
  setParameter(std::string("ShowFull"), showFull ? "true" : "false");
}

int DescribeProcessListRequest::getRunningTime() const {
  return runningTime_;
}

void DescribeProcessListRequest::setRunningTime(int runningTime) {
  runningTime_ = runningTime;
  setParameter(std::string("RunningTime"), std::to_string(runningTime));
}

std::string DescribeProcessListRequest::getKeyword() const {
  return keyword_;
}

void DescribeProcessListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeProcessListRequest::getOrder() const {
  return order_;
}

void DescribeProcessListRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeProcessListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeProcessListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeProcessListRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeProcessListRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeProcessListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeProcessListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeProcessListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeProcessListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeProcessListRequest::getUser() const {
  return user_;
}

void DescribeProcessListRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

