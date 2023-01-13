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

#include <alibabacloud/cbn/model/ModifyCenRouteMapRequest.h>

using AlibabaCloud::Cbn::Model::ModifyCenRouteMapRequest;

ModifyCenRouteMapRequest::ModifyCenRouteMapRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ModifyCenRouteMap") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCenRouteMapRequest::~ModifyCenRouteMapRequest() {}

long ModifyCenRouteMapRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCenRouteMapRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCenRouteMapRequest::getCommunityMatchMode() const {
  return communityMatchMode_;
}

void ModifyCenRouteMapRequest::setCommunityMatchMode(const std::string &communityMatchMode) {
  communityMatchMode_ = communityMatchMode;
  setParameter(std::string("CommunityMatchMode"), communityMatchMode);
}

std::string ModifyCenRouteMapRequest::getMapResult() const {
  return mapResult_;
}

void ModifyCenRouteMapRequest::setMapResult(const std::string &mapResult) {
  mapResult_ = mapResult;
  setParameter(std::string("MapResult"), mapResult);
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationRegionIds() const {
  return destinationRegionIds_;
}

void ModifyCenRouteMapRequest::setDestinationRegionIds(const std::vector<std::string> &destinationRegionIds) {
  destinationRegionIds_ = destinationRegionIds;
}

int ModifyCenRouteMapRequest::getNextPriority() const {
  return nextPriority_;
}

void ModifyCenRouteMapRequest::setNextPriority(int nextPriority) {
  nextPriority_ = nextPriority;
  setParameter(std::string("NextPriority"), std::to_string(nextPriority));
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationCidrBlocks() const {
  return destinationCidrBlocks_;
}

void ModifyCenRouteMapRequest::setDestinationCidrBlocks(const std::vector<std::string> &destinationCidrBlocks) {
  destinationCidrBlocks_ = destinationCidrBlocks;
}

std::vector<std::string> ModifyCenRouteMapRequest::getOriginalRouteTableIds() const {
  return originalRouteTableIds_;
}

void ModifyCenRouteMapRequest::setOriginalRouteTableIds(const std::vector<std::string> &originalRouteTableIds) {
  originalRouteTableIds_ = originalRouteTableIds;
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceInstanceIds() const {
  return sourceInstanceIds_;
}

void ModifyCenRouteMapRequest::setSourceInstanceIds(const std::vector<std::string> &sourceInstanceIds) {
  sourceInstanceIds_ = sourceInstanceIds;
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceRegionIds() const {
  return sourceRegionIds_;
}

void ModifyCenRouteMapRequest::setSourceRegionIds(const std::vector<std::string> &sourceRegionIds) {
  sourceRegionIds_ = sourceRegionIds;
}

std::string ModifyCenRouteMapRequest::getGatewayZoneId() const {
  return gatewayZoneId_;
}

void ModifyCenRouteMapRequest::setGatewayZoneId(const std::string &gatewayZoneId) {
  gatewayZoneId_ = gatewayZoneId;
  setParameter(std::string("GatewayZoneId"), gatewayZoneId);
}

std::vector<int> ModifyCenRouteMapRequest::getMatchAsns() const {
  return matchAsns_;
}

void ModifyCenRouteMapRequest::setMatchAsns(const std::vector<int> &matchAsns) {
  matchAsns_ = matchAsns;
}

int ModifyCenRouteMapRequest::getPreference() const {
  return preference_;
}

void ModifyCenRouteMapRequest::setPreference(int preference) {
  preference_ = preference;
  setParameter(std::string("Preference"), std::to_string(preference));
}

long ModifyCenRouteMapRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCenRouteMapRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyCenRouteMapRequest::getPriority() const {
  return priority_;
}

void ModifyCenRouteMapRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string ModifyCenRouteMapRequest::getVersion() const {
  return version_;
}

void ModifyCenRouteMapRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationChildInstanceTypes() const {
  return destinationChildInstanceTypes_;
}

void ModifyCenRouteMapRequest::setDestinationChildInstanceTypes(const std::vector<std::string> &destinationChildInstanceTypes) {
  destinationChildInstanceTypes_ = destinationChildInstanceTypes;
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceRouteTableIds() const {
  return sourceRouteTableIds_;
}

void ModifyCenRouteMapRequest::setSourceRouteTableIds(const std::vector<std::string> &sourceRouteTableIds) {
  sourceRouteTableIds_ = sourceRouteTableIds;
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceChildInstanceTypes() const {
  return sourceChildInstanceTypes_;
}

void ModifyCenRouteMapRequest::setSourceChildInstanceTypes(const std::vector<std::string> &sourceChildInstanceTypes) {
  sourceChildInstanceTypes_ = sourceChildInstanceTypes;
}

std::string ModifyCenRouteMapRequest::getCommunityOperateMode() const {
  return communityOperateMode_;
}

void ModifyCenRouteMapRequest::setCommunityOperateMode(const std::string &communityOperateMode) {
  communityOperateMode_ = communityOperateMode;
  setParameter(std::string("CommunityOperateMode"), communityOperateMode);
}

std::vector<std::string> ModifyCenRouteMapRequest::getOperateCommunitySet() const {
  return operateCommunitySet_;
}

void ModifyCenRouteMapRequest::setOperateCommunitySet(const std::vector<std::string> &operateCommunitySet) {
  operateCommunitySet_ = operateCommunitySet;
}

std::vector<std::string> ModifyCenRouteMapRequest::getRouteTypes() const {
  return routeTypes_;
}

void ModifyCenRouteMapRequest::setRouteTypes(const std::vector<std::string> &routeTypes) {
  routeTypes_ = routeTypes;
}

std::string ModifyCenRouteMapRequest::getMatchAddressType() const {
  return matchAddressType_;
}

void ModifyCenRouteMapRequest::setMatchAddressType(const std::string &matchAddressType) {
  matchAddressType_ = matchAddressType;
  setParameter(std::string("MatchAddressType"), matchAddressType);
}

std::string ModifyCenRouteMapRequest::getCidrMatchMode() const {
  return cidrMatchMode_;
}

void ModifyCenRouteMapRequest::setCidrMatchMode(const std::string &cidrMatchMode) {
  cidrMatchMode_ = cidrMatchMode;
  setParameter(std::string("CidrMatchMode"), cidrMatchMode);
}

std::string ModifyCenRouteMapRequest::getCenId() const {
  return cenId_;
}

void ModifyCenRouteMapRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string ModifyCenRouteMapRequest::getDescription() const {
  return description_;
}

void ModifyCenRouteMapRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool ModifyCenRouteMapRequest::getSourceInstanceIdsReverseMatch() const {
  return sourceInstanceIdsReverseMatch_;
}

void ModifyCenRouteMapRequest::setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) {
  sourceInstanceIdsReverseMatch_ = sourceInstanceIdsReverseMatch;
  setParameter(std::string("SourceInstanceIdsReverseMatch"), sourceInstanceIdsReverseMatch ? "true" : "false");
}

std::string ModifyCenRouteMapRequest::getGatewayRegionId() const {
  return gatewayRegionId_;
}

void ModifyCenRouteMapRequest::setGatewayRegionId(const std::string &gatewayRegionId) {
  gatewayRegionId_ = gatewayRegionId;
  setParameter(std::string("GatewayRegionId"), gatewayRegionId);
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationRouteTableIds() const {
  return destinationRouteTableIds_;
}

void ModifyCenRouteMapRequest::setDestinationRouteTableIds(const std::vector<std::string> &destinationRouteTableIds) {
  destinationRouteTableIds_ = destinationRouteTableIds;
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceZoneIds() const {
  return sourceZoneIds_;
}

void ModifyCenRouteMapRequest::setSourceZoneIds(const std::vector<std::string> &sourceZoneIds) {
  sourceZoneIds_ = sourceZoneIds;
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationInstanceIds() const {
  return destinationInstanceIds_;
}

void ModifyCenRouteMapRequest::setDestinationInstanceIds(const std::vector<std::string> &destinationInstanceIds) {
  destinationInstanceIds_ = destinationInstanceIds;
}

std::string ModifyCenRouteMapRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCenRouteMapRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCenRouteMapRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCenRouteMapRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool ModifyCenRouteMapRequest::getDestinationInstanceIdsReverseMatch() const {
  return destinationInstanceIdsReverseMatch_;
}

void ModifyCenRouteMapRequest::setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) {
  destinationInstanceIdsReverseMatch_ = destinationInstanceIdsReverseMatch;
  setParameter(std::string("DestinationInstanceIdsReverseMatch"), destinationInstanceIdsReverseMatch ? "true" : "false");
}

std::string ModifyCenRouteMapRequest::getRouteMapId() const {
  return routeMapId_;
}

void ModifyCenRouteMapRequest::setRouteMapId(const std::string &routeMapId) {
  routeMapId_ = routeMapId;
  setParameter(std::string("RouteMapId"), routeMapId);
}

std::vector<long> ModifyCenRouteMapRequest::getPrependAsPath() const {
  return prependAsPath_;
}

void ModifyCenRouteMapRequest::setPrependAsPath(const std::vector<long> &prependAsPath) {
  prependAsPath_ = prependAsPath;
}

std::string ModifyCenRouteMapRequest::getAsPathMatchMode() const {
  return asPathMatchMode_;
}

void ModifyCenRouteMapRequest::setAsPathMatchMode(const std::string &asPathMatchMode) {
  asPathMatchMode_ = asPathMatchMode;
  setParameter(std::string("AsPathMatchMode"), asPathMatchMode);
}

std::vector<std::string> ModifyCenRouteMapRequest::getMatchCommunitySet() const {
  return matchCommunitySet_;
}

void ModifyCenRouteMapRequest::setMatchCommunitySet(const std::vector<std::string> &matchCommunitySet) {
  matchCommunitySet_ = matchCommunitySet;
}

std::string ModifyCenRouteMapRequest::getCenRegionId() const {
  return cenRegionId_;
}

void ModifyCenRouteMapRequest::setCenRegionId(const std::string &cenRegionId) {
  cenRegionId_ = cenRegionId;
  setParameter(std::string("CenRegionId"), cenRegionId);
}

