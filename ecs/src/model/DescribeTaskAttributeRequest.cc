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

#include <alibabacloud/ecs/model/DescribeTaskAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeTaskAttributeRequest;

DescribeTaskAttributeRequest::DescribeTaskAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeTaskAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTaskAttributeRequest::~DescribeTaskAttributeRequest() {}

long DescribeTaskAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTaskAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTaskAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeTaskAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeTaskAttributeRequest::getTaskId() const {
  return taskId_;
}

void DescribeTaskAttributeRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeTaskAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTaskAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeTaskAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTaskAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

