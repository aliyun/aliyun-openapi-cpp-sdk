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

#include <alibabacloud/cbn/model/ActiveFlowLogRequest.h>

using AlibabaCloud::Cbn::Model::ActiveFlowLogRequest;

ActiveFlowLogRequest::ActiveFlowLogRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ActiveFlowLog") {
  setMethod(HttpRequest::Method::Post);
}

ActiveFlowLogRequest::~ActiveFlowLogRequest() {}

long ActiveFlowLogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ActiveFlowLogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ActiveFlowLogRequest::getClientToken() const {
  return clientToken_;
}

void ActiveFlowLogRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ActiveFlowLogRequest::getCenId() const {
  return cenId_;
}

void ActiveFlowLogRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ActiveFlowLogRequest::getRegionId() const {
  return regionId_;
}

void ActiveFlowLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ActiveFlowLogRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ActiveFlowLogRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ActiveFlowLogRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ActiveFlowLogRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ActiveFlowLogRequest::getOwnerId() const {
  return ownerId_;
}

void ActiveFlowLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ActiveFlowLogRequest::getVersion() const {
  return version_;
}

void ActiveFlowLogRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ActiveFlowLogRequest::getFlowLogId() const {
  return flowLogId_;
}

void ActiveFlowLogRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

