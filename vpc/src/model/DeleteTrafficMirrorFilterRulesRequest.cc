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

#include <alibabacloud/vpc/model/DeleteTrafficMirrorFilterRulesRequest.h>

using AlibabaCloud::Vpc::Model::DeleteTrafficMirrorFilterRulesRequest;

DeleteTrafficMirrorFilterRulesRequest::DeleteTrafficMirrorFilterRulesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DeleteTrafficMirrorFilterRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTrafficMirrorFilterRulesRequest::~DeleteTrafficMirrorFilterRulesRequest() {}

long DeleteTrafficMirrorFilterRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTrafficMirrorFilterRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTrafficMirrorFilterRulesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTrafficMirrorFilterRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTrafficMirrorFilterRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteTrafficMirrorFilterRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTrafficMirrorFilterRulesRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTrafficMirrorFilterRulesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTrafficMirrorFilterRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTrafficMirrorFilterRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTrafficMirrorFilterRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTrafficMirrorFilterRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTrafficMirrorFilterRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTrafficMirrorFilterRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTrafficMirrorFilterRulesRequest::getTrafficMirrorFilterId() const {
  return trafficMirrorFilterId_;
}

void DeleteTrafficMirrorFilterRulesRequest::setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId) {
  trafficMirrorFilterId_ = trafficMirrorFilterId;
  setParameter(std::string("TrafficMirrorFilterId"), trafficMirrorFilterId);
}

std::vector<std::string> DeleteTrafficMirrorFilterRulesRequest::getTrafficMirrorFilterRuleIds() const {
  return trafficMirrorFilterRuleIds_;
}

void DeleteTrafficMirrorFilterRulesRequest::setTrafficMirrorFilterRuleIds(const std::vector<std::string> &trafficMirrorFilterRuleIds) {
  trafficMirrorFilterRuleIds_ = trafficMirrorFilterRuleIds;
}

