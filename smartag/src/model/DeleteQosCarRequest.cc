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

#include <alibabacloud/smartag/model/DeleteQosCarRequest.h>

using AlibabaCloud::Smartag::Model::DeleteQosCarRequest;

DeleteQosCarRequest::DeleteQosCarRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteQosCar") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQosCarRequest::~DeleteQosCarRequest() {}

long DeleteQosCarRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteQosCarRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteQosCarRequest::getRegionId() const {
  return regionId_;
}

void DeleteQosCarRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteQosCarRequest::getQosId() const {
  return qosId_;
}

void DeleteQosCarRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DeleteQosCarRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteQosCarRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteQosCarRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteQosCarRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteQosCarRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteQosCarRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteQosCarRequest::getQosCarId() const {
  return qosCarId_;
}

void DeleteQosCarRequest::setQosCarId(const std::string &qosCarId) {
  qosCarId_ = qosCarId;
  setParameter(std::string("QosCarId"), qosCarId);
}

