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

#include <alibabacloud/polardb/model/TransformDBClusterPayTypeRequest.h>

using AlibabaCloud::Polardb::Model::TransformDBClusterPayTypeRequest;

TransformDBClusterPayTypeRequest::TransformDBClusterPayTypeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "TransformDBClusterPayType") {
  setMethod(HttpRequest::Method::Post);
}

TransformDBClusterPayTypeRequest::~TransformDBClusterPayTypeRequest() {}

long TransformDBClusterPayTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TransformDBClusterPayTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TransformDBClusterPayTypeRequest::getClientToken() const {
  return clientToken_;
}

void TransformDBClusterPayTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string TransformDBClusterPayTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TransformDBClusterPayTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TransformDBClusterPayTypeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void TransformDBClusterPayTypeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string TransformDBClusterPayTypeRequest::getRegionId() const {
  return regionId_;
}

void TransformDBClusterPayTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string TransformDBClusterPayTypeRequest::getPeriod() const {
  return period_;
}

void TransformDBClusterPayTypeRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string TransformDBClusterPayTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TransformDBClusterPayTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TransformDBClusterPayTypeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void TransformDBClusterPayTypeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string TransformDBClusterPayTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TransformDBClusterPayTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TransformDBClusterPayTypeRequest::getOwnerId() const {
  return ownerId_;
}

void TransformDBClusterPayTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TransformDBClusterPayTypeRequest::getUsedTime() const {
  return usedTime_;
}

void TransformDBClusterPayTypeRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string TransformDBClusterPayTypeRequest::getPayType() const {
  return payType_;
}

void TransformDBClusterPayTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

