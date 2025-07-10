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

#include <alibabacloud/vpc/model/GetVSwitchCidrReservationUsageRequest.h>

using AlibabaCloud::Vpc::Model::GetVSwitchCidrReservationUsageRequest;

GetVSwitchCidrReservationUsageRequest::GetVSwitchCidrReservationUsageRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "GetVSwitchCidrReservationUsage") {
  setMethod(HttpRequest::Method::Post);
}

GetVSwitchCidrReservationUsageRequest::~GetVSwitchCidrReservationUsageRequest() {}

long GetVSwitchCidrReservationUsageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetVSwitchCidrReservationUsageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetVSwitchCidrReservationUsageRequest::getNextToken() const {
  return nextToken_;
}

void GetVSwitchCidrReservationUsageRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetVSwitchCidrReservationUsageRequest::getRegionId() const {
  return regionId_;
}

void GetVSwitchCidrReservationUsageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetVSwitchCidrReservationUsageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetVSwitchCidrReservationUsageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetVSwitchCidrReservationUsageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetVSwitchCidrReservationUsageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetVSwitchCidrReservationUsageRequest::getOwnerId() const {
  return ownerId_;
}

void GetVSwitchCidrReservationUsageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long GetVSwitchCidrReservationUsageRequest::getMaxResults() const {
  return maxResults_;
}

void GetVSwitchCidrReservationUsageRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string GetVSwitchCidrReservationUsageRequest::getVSwitchCidrReservationId() const {
  return vSwitchCidrReservationId_;
}

void GetVSwitchCidrReservationUsageRequest::setVSwitchCidrReservationId(const std::string &vSwitchCidrReservationId) {
  vSwitchCidrReservationId_ = vSwitchCidrReservationId;
  setParameter(std::string("VSwitchCidrReservationId"), vSwitchCidrReservationId);
}

