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

#include <alibabacloud/dds/model/DescribeRestoreDBInstanceListRequest.h>

using AlibabaCloud::Dds::Model::DescribeRestoreDBInstanceListRequest;

DescribeRestoreDBInstanceListRequest::DescribeRestoreDBInstanceListRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeRestoreDBInstanceList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRestoreDBInstanceListRequest::~DescribeRestoreDBInstanceListRequest() {}

long DescribeRestoreDBInstanceListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRestoreDBInstanceListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRestoreDBInstanceListRequest::getCreationTimeAfter() const {
  return creationTimeAfter_;
}

void DescribeRestoreDBInstanceListRequest::setCreationTimeAfter(const std::string &creationTimeAfter) {
  creationTimeAfter_ = creationTimeAfter;
  setParameter(std::string("CreationTimeAfter"), creationTimeAfter);
}

int DescribeRestoreDBInstanceListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRestoreDBInstanceListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRestoreDBInstanceListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRestoreDBInstanceListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeRestoreDBInstanceListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRestoreDBInstanceListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRestoreDBInstanceListRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeRestoreDBInstanceListRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeRestoreDBInstanceListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRestoreDBInstanceListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRestoreDBInstanceListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRestoreDBInstanceListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRestoreDBInstanceListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRestoreDBInstanceListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

