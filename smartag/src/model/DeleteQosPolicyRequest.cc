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

#include <alibabacloud/smartag/model/DeleteQosPolicyRequest.h>

using AlibabaCloud::Smartag::Model::DeleteQosPolicyRequest;

DeleteQosPolicyRequest::DeleteQosPolicyRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteQosPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQosPolicyRequest::~DeleteQosPolicyRequest() {}

long DeleteQosPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteQosPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteQosPolicyRequest::getQosPolicyId() const {
  return qosPolicyId_;
}

void DeleteQosPolicyRequest::setQosPolicyId(const std::string &qosPolicyId) {
  qosPolicyId_ = qosPolicyId;
  setParameter(std::string("QosPolicyId"), qosPolicyId);
}

std::string DeleteQosPolicyRequest::getRegionId() const {
  return regionId_;
}

void DeleteQosPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteQosPolicyRequest::getQosId() const {
  return qosId_;
}

void DeleteQosPolicyRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DeleteQosPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteQosPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteQosPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteQosPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteQosPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteQosPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

