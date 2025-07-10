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

#include <alibabacloud/vpc/model/ListVSwitchCidrReservationsRequest.h>

using AlibabaCloud::Vpc::Model::ListVSwitchCidrReservationsRequest;

ListVSwitchCidrReservationsRequest::ListVSwitchCidrReservationsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListVSwitchCidrReservations") {
  setMethod(HttpRequest::Method::Post);
}

ListVSwitchCidrReservationsRequest::~ListVSwitchCidrReservationsRequest() {}

long ListVSwitchCidrReservationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListVSwitchCidrReservationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListVSwitchCidrReservationsRequest::getVSwitchCidrReservationType() const {
  return vSwitchCidrReservationType_;
}

void ListVSwitchCidrReservationsRequest::setVSwitchCidrReservationType(const std::string &vSwitchCidrReservationType) {
  vSwitchCidrReservationType_ = vSwitchCidrReservationType;
  setParameter(std::string("VSwitchCidrReservationType"), vSwitchCidrReservationType);
}

std::string ListVSwitchCidrReservationsRequest::getNextToken() const {
  return nextToken_;
}

void ListVSwitchCidrReservationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListVSwitchCidrReservationsRequest::getVSwitchCidrReservationIds() const {
  return vSwitchCidrReservationIds_;
}

void ListVSwitchCidrReservationsRequest::setVSwitchCidrReservationIds(const std::vector<std::string> &vSwitchCidrReservationIds) {
  vSwitchCidrReservationIds_ = vSwitchCidrReservationIds;
}

std::string ListVSwitchCidrReservationsRequest::getRegionId() const {
  return regionId_;
}

void ListVSwitchCidrReservationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListVSwitchCidrReservationsRequest::getIpVersion() const {
  return ipVersion_;
}

void ListVSwitchCidrReservationsRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::string ListVSwitchCidrReservationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListVSwitchCidrReservationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListVSwitchCidrReservationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListVSwitchCidrReservationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListVSwitchCidrReservationsRequest::getOwnerId() const {
  return ownerId_;
}

void ListVSwitchCidrReservationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ListVSwitchCidrReservationsRequest::Tags> ListVSwitchCidrReservationsRequest::getTags() const {
  return tags_;
}

void ListVSwitchCidrReservationsRequest::setTags(const std::vector<ListVSwitchCidrReservationsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string ListVSwitchCidrReservationsRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ListVSwitchCidrReservationsRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

long ListVSwitchCidrReservationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVSwitchCidrReservationsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

