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

#include <alibabacloud/vpc/model/DescribeRouterInterfaceAttributeRequest.h>

using AlibabaCloud::Vpc::Model::DescribeRouterInterfaceAttributeRequest;

DescribeRouterInterfaceAttributeRequest::DescribeRouterInterfaceAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeRouterInterfaceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRouterInterfaceAttributeRequest::~DescribeRouterInterfaceAttributeRequest() {}

long DescribeRouterInterfaceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRouterInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRouterInterfaceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRouterInterfaceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeRouterInterfaceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRouterInterfaceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRouterInterfaceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRouterInterfaceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRouterInterfaceAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeRouterInterfaceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

