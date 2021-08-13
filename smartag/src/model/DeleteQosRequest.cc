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

#include <alibabacloud/smartag/model/DeleteQosRequest.h>

using AlibabaCloud::Smartag::Model::DeleteQosRequest;

DeleteQosRequest::DeleteQosRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteQos") {
  setMethod(HttpRequest::Method::Post);
}

DeleteQosRequest::~DeleteQosRequest() {}

long DeleteQosRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteQosRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteQosRequest::getRegionId() const {
  return regionId_;
}

void DeleteQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteQosRequest::getQosId() const {
  return qosId_;
}

void DeleteQosRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DeleteQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteQosRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

