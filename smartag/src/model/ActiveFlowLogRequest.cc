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

#include <alibabacloud/smartag/model/ActiveFlowLogRequest.h>

using AlibabaCloud::Smartag::Model::ActiveFlowLogRequest;

ActiveFlowLogRequest::ActiveFlowLogRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ActiveFlowLog") {
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

std::string ActiveFlowLogRequest::getFlowLogId() const {
  return flowLogId_;
}

void ActiveFlowLogRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

