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

#include <alibabacloud/cbn/model/CreateCenRouteMapRequest.h>

using AlibabaCloud::Cbn::Model::CreateCenRouteMapRequest;

CreateCenRouteMapRequest::CreateCenRouteMapRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateCenRouteMap") {
  setMethod(HttpRequest::Method::Post);
}

CreateCenRouteMapRequest::~CreateCenRouteMapRequest() {}

long CreateCenRouteMapRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCenRouteMapRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCenRouteMapRequest::getCommunityMatchMode() const {
  return communityMatchMode_;
}

void CreateCenRouteMapRequest::setCommunityMatchMode(const std::string &communityMatchMode) {
  communityMatchMode_ = communityMatchMode;
  setParameter(std::string("CommunityMatchMode"), communityMatchMode);
}

std::string CreateCenRouteMapRequest::getMapResult() const {
  return mapResult_;
}

void CreateCenRouteMapRequest::setMapResult(const std::string &mapResult) {
  mapResult_ = mapResult;
  setParameter(std::string("MapResult"), mapResult);
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationRegionIds() const {
  return destinationRegionIds_;
}

void CreateCenRouteMapRequest::setDestinationRegionIds(const std::vector<std::string> &destinationRegionIds) {
  destinationRegionIds_ = destinationRegionIds;
}

int CreateCenRouteMapRequest::getNextPriority() const {
  return nextPriority_;
}

void CreateCenRouteMapRequest::setNextPriority(int nextPriority) {
  nextPriority_ = nextPriority;
  setParameter(std::string("NextPriority"), std::to_string(nextPriority));
}

bool CreateCenRouteMapRequest::getSystemPolicy() const {
  return systemPolicy_;
}

void CreateCenRouteMapRequest::setSystemPolicy(bool systemPolicy) {
  systemPolicy_ = systemPolicy;
  setParameter(std::string("SystemPolicy"), systemPolicy ? "true" : "false");
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationCidrBlocks() const {
  return destinationCidrBlocks_;
}

void CreateCenRouteMapRequest::setDestinationCidrBlocks(const std::vector<std::string> &destinationCidrBlocks) {
  destinationCidrBlocks_ = destinationCidrBlocks;
}

std::vector<std::string> CreateCenRouteMapRequest::getOriginalRouteTableIds() const {
  return originalRouteTableIds_;
}

void CreateCenRouteMapRequest::setOriginalRouteTableIds(const std::vector<std::string> &originalRouteTableIds) {
  originalRouteTableIds_ = originalRouteTableIds;
}

std::string CreateCenRouteMapRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void CreateCenRouteMapRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceInstanceIds() const {
  return sourceInstanceIds_;
}

void CreateCenRouteMapRequest::setSourceInstanceIds(const std::vector<std::string> &sourceInstanceIds) {
  sourceInstanceIds_ = sourceInstanceIds;
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceRegionIds() const {
  return sourceRegionIds_;
}

void CreateCenRouteMapRequest::setSourceRegionIds(const std::vector<std::string> &sourceRegionIds) {
  sourceRegionIds_ = sourceRegionIds;
}

std::string CreateCenRouteMapRequest::getGatewayZoneId() const {
  return gatewayZoneId_;
}

void CreateCenRouteMapRequest::setGatewayZoneId(const std::string &gatewayZoneId) {
  gatewayZoneId_ = gatewayZoneId;
  setParameter(std::string("GatewayZoneId"), gatewayZoneId);
}

std::vector<long> CreateCenRouteMapRequest::getMatchAsns() const {
  return matchAsns_;
}

void CreateCenRouteMapRequest::setMatchAsns(const std::vector<long> &matchAsns) {
  matchAsns_ = matchAsns;
}

int CreateCenRouteMapRequest::getPreference() const {
  return preference_;
}

void CreateCenRouteMapRequest::setPreference(int preference) {
  preference_ = preference;
  setParameter(std::string("Preference"), std::to_string(preference));
}

long CreateCenRouteMapRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCenRouteMapRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateCenRouteMapRequest::getPriority() const {
  return priority_;
}

void CreateCenRouteMapRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateCenRouteMapRequest::getVersion() const {
  return version_;
}

void CreateCenRouteMapRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationChildInstanceTypes() const {
  return destinationChildInstanceTypes_;
}

void CreateCenRouteMapRequest::setDestinationChildInstanceTypes(const std::vector<std::string> &destinationChildInstanceTypes) {
  destinationChildInstanceTypes_ = destinationChildInstanceTypes;
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceRouteTableIds() const {
  return sourceRouteTableIds_;
}

void CreateCenRouteMapRequest::setSourceRouteTableIds(const std::vector<std::string> &sourceRouteTableIds) {
  sourceRouteTableIds_ = sourceRouteTableIds;
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceChildInstanceTypes() const {
  return sourceChildInstanceTypes_;
}

void CreateCenRouteMapRequest::setSourceChildInstanceTypes(const std::vector<std::string> &sourceChildInstanceTypes) {
  sourceChildInstanceTypes_ = sourceChildInstanceTypes;
}

std::string CreateCenRouteMapRequest::getCommunityOperateMode() const {
  return communityOperateMode_;
}

void CreateCenRouteMapRequest::setCommunityOperateMode(const std::string &communityOperateMode) {
  communityOperateMode_ = communityOperateMode;
  setParameter(std::string("CommunityOperateMode"), communityOperateMode);
}

std::vector<std::string> CreateCenRouteMapRequest::getOperateCommunitySet() const {
  return operateCommunitySet_;
}

void CreateCenRouteMapRequest::setOperateCommunitySet(const std::vector<std::string> &operateCommunitySet) {
  operateCommunitySet_ = operateCommunitySet;
}

std::vector<std::string> CreateCenRouteMapRequest::getRouteTypes() const {
  return routeTypes_;
}

void CreateCenRouteMapRequest::setRouteTypes(const std::vector<std::string> &routeTypes) {
  routeTypes_ = routeTypes;
}

std::string CreateCenRouteMapRequest::getMatchAddressType() const {
  return matchAddressType_;
}

void CreateCenRouteMapRequest::setMatchAddressType(const std::string &matchAddressType) {
  matchAddressType_ = matchAddressType;
  setParameter(std::string("MatchAddressType"), matchAddressType);
}

std::string CreateCenRouteMapRequest::getCidrMatchMode() const {
  return cidrMatchMode_;
}

void CreateCenRouteMapRequest::setCidrMatchMode(const std::string &cidrMatchMode) {
  cidrMatchMode_ = cidrMatchMode;
  setParameter(std::string("CidrMatchMode"), cidrMatchMode);
}

std::string CreateCenRouteMapRequest::getCenId() const {
  return cenId_;
}

void CreateCenRouteMapRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string CreateCenRouteMapRequest::getDescription() const {
  return description_;
}

void CreateCenRouteMapRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool CreateCenRouteMapRequest::getSourceInstanceIdsReverseMatch() const {
  return sourceInstanceIdsReverseMatch_;
}

void CreateCenRouteMapRequest::setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch) {
  sourceInstanceIdsReverseMatch_ = sourceInstanceIdsReverseMatch;
  setParameter(std::string("SourceInstanceIdsReverseMatch"), sourceInstanceIdsReverseMatch ? "true" : "false");
}

std::string CreateCenRouteMapRequest::getGatewayRegionId() const {
  return gatewayRegionId_;
}

void CreateCenRouteMapRequest::setGatewayRegionId(const std::string &gatewayRegionId) {
  gatewayRegionId_ = gatewayRegionId;
  setParameter(std::string("GatewayRegionId"), gatewayRegionId);
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationRouteTableIds() const {
  return destinationRouteTableIds_;
}

void CreateCenRouteMapRequest::setDestinationRouteTableIds(const std::vector<std::string> &destinationRouteTableIds) {
  destinationRouteTableIds_ = destinationRouteTableIds;
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceZoneIds() const {
  return sourceZoneIds_;
}

void CreateCenRouteMapRequest::setSourceZoneIds(const std::vector<std::string> &sourceZoneIds) {
  sourceZoneIds_ = sourceZoneIds;
}

std::string CreateCenRouteMapRequest::getTransmitDirection() const {
  return transmitDirection_;
}

void CreateCenRouteMapRequest::setTransmitDirection(const std::string &transmitDirection) {
  transmitDirection_ = transmitDirection;
  setParameter(std::string("TransmitDirection"), transmitDirection);
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationInstanceIds() const {
  return destinationInstanceIds_;
}

void CreateCenRouteMapRequest::setDestinationInstanceIds(const std::vector<std::string> &destinationInstanceIds) {
  destinationInstanceIds_ = destinationInstanceIds;
}

std::string CreateCenRouteMapRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCenRouteMapRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCenRouteMapRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCenRouteMapRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool CreateCenRouteMapRequest::getDestinationInstanceIdsReverseMatch() const {
  return destinationInstanceIdsReverseMatch_;
}

void CreateCenRouteMapRequest::setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch) {
  destinationInstanceIdsReverseMatch_ = destinationInstanceIdsReverseMatch;
  setParameter(std::string("DestinationInstanceIdsReverseMatch"), destinationInstanceIdsReverseMatch ? "true" : "false");
}

std::vector<long> CreateCenRouteMapRequest::getPrependAsPath() const {
  return prependAsPath_;
}

void CreateCenRouteMapRequest::setPrependAsPath(const std::vector<long> &prependAsPath) {
  prependAsPath_ = prependAsPath;
}

std::string CreateCenRouteMapRequest::getAsPathMatchMode() const {
  return asPathMatchMode_;
}

void CreateCenRouteMapRequest::setAsPathMatchMode(const std::string &asPathMatchMode) {
  asPathMatchMode_ = asPathMatchMode;
  setParameter(std::string("AsPathMatchMode"), asPathMatchMode);
}

std::vector<std::string> CreateCenRouteMapRequest::getMatchCommunitySet() const {
  return matchCommunitySet_;
}

void CreateCenRouteMapRequest::setMatchCommunitySet(const std::vector<std::string> &matchCommunitySet) {
  matchCommunitySet_ = matchCommunitySet;
}

std::string CreateCenRouteMapRequest::getCenRegionId() const {
  return cenRegionId_;
}

void CreateCenRouteMapRequest::setCenRegionId(const std::string &cenRegionId) {
  cenRegionId_ = cenRegionId;
  setParameter(std::string("CenRegionId"), cenRegionId);
}

