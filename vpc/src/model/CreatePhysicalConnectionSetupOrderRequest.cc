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

#include <alibabacloud/vpc/model/CreatePhysicalConnectionSetupOrderRequest.h>

using AlibabaCloud::Vpc::Model::CreatePhysicalConnectionSetupOrderRequest;

CreatePhysicalConnectionSetupOrderRequest::CreatePhysicalConnectionSetupOrderRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreatePhysicalConnectionSetupOrder") {
  setMethod(HttpRequest::Method::Post);
}

CreatePhysicalConnectionSetupOrderRequest::~CreatePhysicalConnectionSetupOrderRequest() {}

std::string CreatePhysicalConnectionSetupOrderRequest::getAccessPointId() const {
  return accessPointId_;
}

void CreatePhysicalConnectionSetupOrderRequest::setAccessPointId(const std::string &accessPointId) {
  accessPointId_ = accessPointId;
  setParameter(std::string("AccessPointId"), accessPointId);
}

long CreatePhysicalConnectionSetupOrderRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreatePhysicalConnectionSetupOrderRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreatePhysicalConnectionSetupOrderRequest::getPortType() const {
  return portType_;
}

void CreatePhysicalConnectionSetupOrderRequest::setPortType(const std::string &portType) {
  portType_ = portType;
  setParameter(std::string("PortType"), portType);
}

std::string CreatePhysicalConnectionSetupOrderRequest::getClientToken() const {
  return clientToken_;
}

void CreatePhysicalConnectionSetupOrderRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreatePhysicalConnectionSetupOrderRequest::getRegionId() const {
  return regionId_;
}

void CreatePhysicalConnectionSetupOrderRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePhysicalConnectionSetupOrderRequest::getRedundantPhysicalConnectionId() const {
  return redundantPhysicalConnectionId_;
}

void CreatePhysicalConnectionSetupOrderRequest::setRedundantPhysicalConnectionId(const std::string &redundantPhysicalConnectionId) {
  redundantPhysicalConnectionId_ = redundantPhysicalConnectionId;
  setParameter(std::string("RedundantPhysicalConnectionId"), redundantPhysicalConnectionId);
}

bool CreatePhysicalConnectionSetupOrderRequest::getAutoPay() const {
  return autoPay_;
}

void CreatePhysicalConnectionSetupOrderRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

std::string CreatePhysicalConnectionSetupOrderRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreatePhysicalConnectionSetupOrderRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreatePhysicalConnectionSetupOrderRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreatePhysicalConnectionSetupOrderRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreatePhysicalConnectionSetupOrderRequest::getOwnerId() const {
  return ownerId_;
}

void CreatePhysicalConnectionSetupOrderRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreatePhysicalConnectionSetupOrderRequest::getLineOperator() const {
  return lineOperator_;
}

void CreatePhysicalConnectionSetupOrderRequest::setLineOperator(const std::string &lineOperator) {
  lineOperator_ = lineOperator;
  setParameter(std::string("LineOperator"), lineOperator);
}

