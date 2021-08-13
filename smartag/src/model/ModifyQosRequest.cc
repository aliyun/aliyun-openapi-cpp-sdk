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

#include <alibabacloud/smartag/model/ModifyQosRequest.h>

using AlibabaCloud::Smartag::Model::ModifyQosRequest;

ModifyQosRequest::ModifyQosRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifyQos") {
  setMethod(HttpRequest::Method::Post);
}

ModifyQosRequest::~ModifyQosRequest() {}

long ModifyQosRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyQosRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyQosRequest::getRegionId() const {
  return regionId_;
}

void ModifyQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyQosRequest::getQosId() const {
  return qosId_;
}

void ModifyQosRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string ModifyQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyQosRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyQosRequest::getQosName() const {
  return qosName_;
}

void ModifyQosRequest::setQosName(const std::string &qosName) {
  qosName_ = qosName;
  setParameter(std::string("QosName"), qosName);
}

std::string ModifyQosRequest::getQosDescription() const {
  return qosDescription_;
}

void ModifyQosRequest::setQosDescription(const std::string &qosDescription) {
  qosDescription_ = qosDescription;
  setParameter(std::string("QosDescription"), qosDescription);
}

