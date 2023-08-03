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

#include <alibabacloud/adb/model/DescribeTaskInfoRequest.h>

using AlibabaCloud::Adb::Model::DescribeTaskInfoRequest;

DescribeTaskInfoRequest::DescribeTaskInfoRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeTaskInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTaskInfoRequest::~DescribeTaskInfoRequest() {}

long DescribeTaskInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTaskInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTaskInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTaskInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTaskInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeTaskInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTaskInfoRequest::getTaskId() const {
  return taskId_;
}

void DescribeTaskInfoRequest::setTaskId(int taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeTaskInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTaskInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTaskInfoRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeTaskInfoRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeTaskInfoRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTaskInfoRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTaskInfoRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTaskInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

