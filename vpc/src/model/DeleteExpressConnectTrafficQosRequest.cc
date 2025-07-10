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

#include <alibabacloud/vpc/model/DeleteExpressConnectTrafficQosRequest.h>

using AlibabaCloud::Vpc::Model::DeleteExpressConnectTrafficQosRequest;

DeleteExpressConnectTrafficQosRequest::DeleteExpressConnectTrafficQosRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteExpressConnectTrafficQos") {
  setMethod(HttpRequest::Method::Post);
}

DeleteExpressConnectTrafficQosRequest::~DeleteExpressConnectTrafficQosRequest() {}

std::string DeleteExpressConnectTrafficQosRequest::getClientToken() const {
  return clientToken_;
}

void DeleteExpressConnectTrafficQosRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteExpressConnectTrafficQosRequest::getRegionId() const {
  return regionId_;
}

void DeleteExpressConnectTrafficQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteExpressConnectTrafficQosRequest::getQosId() const {
  return qosId_;
}

void DeleteExpressConnectTrafficQosRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string DeleteExpressConnectTrafficQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteExpressConnectTrafficQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteExpressConnectTrafficQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteExpressConnectTrafficQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteExpressConnectTrafficQosRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteExpressConnectTrafficQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

