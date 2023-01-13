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

#include <alibabacloud/cbn/model/DeleteCenInterRegionTrafficQosQueueRequest.h>

using AlibabaCloud::Cbn::Model::DeleteCenInterRegionTrafficQosQueueRequest;

DeleteCenInterRegionTrafficQosQueueRequest::DeleteCenInterRegionTrafficQosQueueRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteCenInterRegionTrafficQosQueue") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCenInterRegionTrafficQosQueueRequest::~DeleteCenInterRegionTrafficQosQueueRequest() {}

long DeleteCenInterRegionTrafficQosQueueRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCenInterRegionTrafficQosQueueRequest::getClientToken() const {
  return clientToken_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool DeleteCenInterRegionTrafficQosQueueRequest::getDryRun() const {
  return dryRun_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteCenInterRegionTrafficQosQueueRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCenInterRegionTrafficQosQueueRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteCenInterRegionTrafficQosQueueRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteCenInterRegionTrafficQosQueueRequest::getVersion() const {
  return version_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteCenInterRegionTrafficQosQueueRequest::getQosQueueId() const {
  return qosQueueId_;
}

void DeleteCenInterRegionTrafficQosQueueRequest::setQosQueueId(const std::string &qosQueueId) {
  qosQueueId_ = qosQueueId;
  setParameter(std::string("QosQueueId"), qosQueueId);
}

