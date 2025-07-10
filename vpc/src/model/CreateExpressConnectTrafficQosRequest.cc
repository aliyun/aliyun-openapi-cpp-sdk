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

#include <alibabacloud/vpc/model/CreateExpressConnectTrafficQosRequest.h>

using AlibabaCloud::Vpc::Model::CreateExpressConnectTrafficQosRequest;

CreateExpressConnectTrafficQosRequest::CreateExpressConnectTrafficQosRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateExpressConnectTrafficQos") {
  setMethod(HttpRequest::Method::Post);
}

CreateExpressConnectTrafficQosRequest::~CreateExpressConnectTrafficQosRequest() {}

std::string CreateExpressConnectTrafficQosRequest::getClientToken() const {
  return clientToken_;
}

void CreateExpressConnectTrafficQosRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateExpressConnectTrafficQosRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateExpressConnectTrafficQosRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateExpressConnectTrafficQosRequest::getRegionId() const {
  return regionId_;
}

void CreateExpressConnectTrafficQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateExpressConnectTrafficQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateExpressConnectTrafficQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateExpressConnectTrafficQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateExpressConnectTrafficQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateExpressConnectTrafficQosRequest::getOwnerId() const {
  return ownerId_;
}

void CreateExpressConnectTrafficQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateExpressConnectTrafficQosRequest::Tags> CreateExpressConnectTrafficQosRequest::getTags() const {
  return tags_;
}

void CreateExpressConnectTrafficQosRequest::setTags(const std::vector<CreateExpressConnectTrafficQosRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string CreateExpressConnectTrafficQosRequest::getQosName() const {
  return qosName_;
}

void CreateExpressConnectTrafficQosRequest::setQosName(const std::string &qosName) {
  qosName_ = qosName;
  setParameter(std::string("QosName"), qosName);
}

std::string CreateExpressConnectTrafficQosRequest::getQosDescription() const {
  return qosDescription_;
}

void CreateExpressConnectTrafficQosRequest::setQosDescription(const std::string &qosDescription) {
  qosDescription_ = qosDescription;
  setParameter(std::string("QosDescription"), qosDescription);
}

