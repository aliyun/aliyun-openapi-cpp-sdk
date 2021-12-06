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

#include <alibabacloud/ecs/model/DetachClassicLinkVpcRequest.h>

using AlibabaCloud::Ecs::Model::DetachClassicLinkVpcRequest;

DetachClassicLinkVpcRequest::DetachClassicLinkVpcRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DetachClassicLinkVpc") {
  setMethod(HttpRequest::Method::Post);
}

DetachClassicLinkVpcRequest::~DetachClassicLinkVpcRequest() {}

long DetachClassicLinkVpcRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DetachClassicLinkVpcRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DetachClassicLinkVpcRequest::getRegionId() const {
  return regionId_;
}

void DetachClassicLinkVpcRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachClassicLinkVpcRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachClassicLinkVpcRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DetachClassicLinkVpcRequest::getOwnerId() const {
  return ownerId_;
}

void DetachClassicLinkVpcRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DetachClassicLinkVpcRequest::getInstanceId() const {
  return instanceId_;
}

void DetachClassicLinkVpcRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DetachClassicLinkVpcRequest::getVpcId() const {
  return vpcId_;
}

void DetachClassicLinkVpcRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

