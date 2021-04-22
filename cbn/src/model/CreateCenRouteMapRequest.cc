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

CreateCenRouteMapRequest::CreateCenRouteMapRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "CreateCenRouteMap")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCenRouteMapRequest::~CreateCenRouteMapRequest()
{}

long CreateCenRouteMapRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCenRouteMapRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCenRouteMapRequest::getCommunityMatchMode()const
{
	return communityMatchMode_;
}

void CreateCenRouteMapRequest::setCommunityMatchMode(const std::string& communityMatchMode)
{
	communityMatchMode_ = communityMatchMode;
	setParameter("CommunityMatchMode", communityMatchMode);
}

std::string CreateCenRouteMapRequest::getMapResult()const
{
	return mapResult_;
}

void CreateCenRouteMapRequest::setMapResult(const std::string& mapResult)
{
	mapResult_ = mapResult;
	setParameter("MapResult", mapResult);
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationRegionIds()const
{
	return destinationRegionIds_;
}

void CreateCenRouteMapRequest::setDestinationRegionIds(const std::vector<std::string>& destinationRegionIds)
{
	destinationRegionIds_ = destinationRegionIds;
	for(int dep1 = 0; dep1!= destinationRegionIds.size(); dep1++) {
		setParameter("DestinationRegionIds."+ std::to_string(dep1), destinationRegionIds.at(dep1));
	}
}

int CreateCenRouteMapRequest::getNextPriority()const
{
	return nextPriority_;
}

void CreateCenRouteMapRequest::setNextPriority(int nextPriority)
{
	nextPriority_ = nextPriority;
	setParameter("NextPriority", std::to_string(nextPriority));
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationCidrBlocks()const
{
	return destinationCidrBlocks_;
}

void CreateCenRouteMapRequest::setDestinationCidrBlocks(const std::vector<std::string>& destinationCidrBlocks)
{
	destinationCidrBlocks_ = destinationCidrBlocks;
	for(int dep1 = 0; dep1!= destinationCidrBlocks.size(); dep1++) {
		setParameter("DestinationCidrBlocks."+ std::to_string(dep1), destinationCidrBlocks.at(dep1));
	}
}

bool CreateCenRouteMapRequest::getSystemPolicy()const
{
	return systemPolicy_;
}

void CreateCenRouteMapRequest::setSystemPolicy(bool systemPolicy)
{
	systemPolicy_ = systemPolicy;
	setParameter("SystemPolicy", systemPolicy ? "true" : "false");
}

std::vector<std::string> CreateCenRouteMapRequest::getOriginalRouteTableIds()const
{
	return originalRouteTableIds_;
}

void CreateCenRouteMapRequest::setOriginalRouteTableIds(const std::vector<std::string>& originalRouteTableIds)
{
	originalRouteTableIds_ = originalRouteTableIds;
	for(int dep1 = 0; dep1!= originalRouteTableIds.size(); dep1++) {
		setParameter("OriginalRouteTableIds."+ std::to_string(dep1), originalRouteTableIds.at(dep1));
	}
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceInstanceIds()const
{
	return sourceInstanceIds_;
}

void CreateCenRouteMapRequest::setSourceInstanceIds(const std::vector<std::string>& sourceInstanceIds)
{
	sourceInstanceIds_ = sourceInstanceIds;
	for(int dep1 = 0; dep1!= sourceInstanceIds.size(); dep1++) {
		setParameter("SourceInstanceIds."+ std::to_string(dep1), sourceInstanceIds.at(dep1));
	}
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceRegionIds()const
{
	return sourceRegionIds_;
}

void CreateCenRouteMapRequest::setSourceRegionIds(const std::vector<std::string>& sourceRegionIds)
{
	sourceRegionIds_ = sourceRegionIds;
	for(int dep1 = 0; dep1!= sourceRegionIds.size(); dep1++) {
		setParameter("SourceRegionIds."+ std::to_string(dep1), sourceRegionIds.at(dep1));
	}
}

std::string CreateCenRouteMapRequest::getGatewayZoneId()const
{
	return gatewayZoneId_;
}

void CreateCenRouteMapRequest::setGatewayZoneId(const std::string& gatewayZoneId)
{
	gatewayZoneId_ = gatewayZoneId;
	setParameter("GatewayZoneId", gatewayZoneId);
}

std::vector<long> CreateCenRouteMapRequest::getMatchAsns()const
{
	return matchAsns_;
}

void CreateCenRouteMapRequest::setMatchAsns(const std::vector<long>& matchAsns)
{
	matchAsns_ = matchAsns;
	for(int dep1 = 0; dep1!= matchAsns.size(); dep1++) {
		setParameter("MatchAsns."+ std::to_string(dep1), std::to_string(matchAsns.at(dep1)));
	}
}

int CreateCenRouteMapRequest::getPreference()const
{
	return preference_;
}

void CreateCenRouteMapRequest::setPreference(int preference)
{
	preference_ = preference;
	setParameter("Preference", std::to_string(preference));
}

long CreateCenRouteMapRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCenRouteMapRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateCenRouteMapRequest::getPriority()const
{
	return priority_;
}

void CreateCenRouteMapRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationChildInstanceTypes()const
{
	return destinationChildInstanceTypes_;
}

void CreateCenRouteMapRequest::setDestinationChildInstanceTypes(const std::vector<std::string>& destinationChildInstanceTypes)
{
	destinationChildInstanceTypes_ = destinationChildInstanceTypes;
	for(int dep1 = 0; dep1!= destinationChildInstanceTypes.size(); dep1++) {
		setParameter("DestinationChildInstanceTypes."+ std::to_string(dep1), destinationChildInstanceTypes.at(dep1));
	}
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceRouteTableIds()const
{
	return sourceRouteTableIds_;
}

void CreateCenRouteMapRequest::setSourceRouteTableIds(const std::vector<std::string>& sourceRouteTableIds)
{
	sourceRouteTableIds_ = sourceRouteTableIds;
	for(int dep1 = 0; dep1!= sourceRouteTableIds.size(); dep1++) {
		setParameter("SourceRouteTableIds."+ std::to_string(dep1), sourceRouteTableIds.at(dep1));
	}
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceChildInstanceTypes()const
{
	return sourceChildInstanceTypes_;
}

void CreateCenRouteMapRequest::setSourceChildInstanceTypes(const std::vector<std::string>& sourceChildInstanceTypes)
{
	sourceChildInstanceTypes_ = sourceChildInstanceTypes;
	for(int dep1 = 0; dep1!= sourceChildInstanceTypes.size(); dep1++) {
		setParameter("SourceChildInstanceTypes."+ std::to_string(dep1), sourceChildInstanceTypes.at(dep1));
	}
}

std::string CreateCenRouteMapRequest::getCommunityOperateMode()const
{
	return communityOperateMode_;
}

void CreateCenRouteMapRequest::setCommunityOperateMode(const std::string& communityOperateMode)
{
	communityOperateMode_ = communityOperateMode;
	setParameter("CommunityOperateMode", communityOperateMode);
}

std::vector<std::string> CreateCenRouteMapRequest::getOperateCommunitySet()const
{
	return operateCommunitySet_;
}

void CreateCenRouteMapRequest::setOperateCommunitySet(const std::vector<std::string>& operateCommunitySet)
{
	operateCommunitySet_ = operateCommunitySet;
	for(int dep1 = 0; dep1!= operateCommunitySet.size(); dep1++) {
		setParameter("OperateCommunitySet."+ std::to_string(dep1), operateCommunitySet.at(dep1));
	}
}

std::vector<std::string> CreateCenRouteMapRequest::getRouteTypes()const
{
	return routeTypes_;
}

void CreateCenRouteMapRequest::setRouteTypes(const std::vector<std::string>& routeTypes)
{
	routeTypes_ = routeTypes;
	for(int dep1 = 0; dep1!= routeTypes.size(); dep1++) {
		setParameter("RouteTypes."+ std::to_string(dep1), routeTypes.at(dep1));
	}
}

std::string CreateCenRouteMapRequest::getMatchAddressType()const
{
	return matchAddressType_;
}

void CreateCenRouteMapRequest::setMatchAddressType(const std::string& matchAddressType)
{
	matchAddressType_ = matchAddressType;
	setParameter("MatchAddressType", matchAddressType);
}

std::string CreateCenRouteMapRequest::getCidrMatchMode()const
{
	return cidrMatchMode_;
}

void CreateCenRouteMapRequest::setCidrMatchMode(const std::string& cidrMatchMode)
{
	cidrMatchMode_ = cidrMatchMode;
	setParameter("CidrMatchMode", cidrMatchMode);
}

std::string CreateCenRouteMapRequest::getCenId()const
{
	return cenId_;
}

void CreateCenRouteMapRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string CreateCenRouteMapRequest::getDescription()const
{
	return description_;
}

void CreateCenRouteMapRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool CreateCenRouteMapRequest::getSourceInstanceIdsReverseMatch()const
{
	return sourceInstanceIdsReverseMatch_;
}

void CreateCenRouteMapRequest::setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch)
{
	sourceInstanceIdsReverseMatch_ = sourceInstanceIdsReverseMatch;
	setParameter("SourceInstanceIdsReverseMatch", sourceInstanceIdsReverseMatch ? "true" : "false");
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationRouteTableIds()const
{
	return destinationRouteTableIds_;
}

void CreateCenRouteMapRequest::setDestinationRouteTableIds(const std::vector<std::string>& destinationRouteTableIds)
{
	destinationRouteTableIds_ = destinationRouteTableIds;
	for(int dep1 = 0; dep1!= destinationRouteTableIds.size(); dep1++) {
		setParameter("DestinationRouteTableIds."+ std::to_string(dep1), destinationRouteTableIds.at(dep1));
	}
}

std::vector<std::string> CreateCenRouteMapRequest::getSourceZoneIds()const
{
	return sourceZoneIds_;
}

void CreateCenRouteMapRequest::setSourceZoneIds(const std::vector<std::string>& sourceZoneIds)
{
	sourceZoneIds_ = sourceZoneIds;
	for(int dep1 = 0; dep1!= sourceZoneIds.size(); dep1++) {
		setParameter("SourceZoneIds."+ std::to_string(dep1), sourceZoneIds.at(dep1));
	}
}

std::string CreateCenRouteMapRequest::getTransmitDirection()const
{
	return transmitDirection_;
}

void CreateCenRouteMapRequest::setTransmitDirection(const std::string& transmitDirection)
{
	transmitDirection_ = transmitDirection;
	setParameter("TransmitDirection", transmitDirection);
}

std::vector<std::string> CreateCenRouteMapRequest::getDestinationInstanceIds()const
{
	return destinationInstanceIds_;
}

void CreateCenRouteMapRequest::setDestinationInstanceIds(const std::vector<std::string>& destinationInstanceIds)
{
	destinationInstanceIds_ = destinationInstanceIds;
	for(int dep1 = 0; dep1!= destinationInstanceIds.size(); dep1++) {
		setParameter("DestinationInstanceIds."+ std::to_string(dep1), destinationInstanceIds.at(dep1));
	}
}

std::string CreateCenRouteMapRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCenRouteMapRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCenRouteMapRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCenRouteMapRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool CreateCenRouteMapRequest::getDestinationInstanceIdsReverseMatch()const
{
	return destinationInstanceIdsReverseMatch_;
}

void CreateCenRouteMapRequest::setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch)
{
	destinationInstanceIdsReverseMatch_ = destinationInstanceIdsReverseMatch;
	setParameter("DestinationInstanceIdsReverseMatch", destinationInstanceIdsReverseMatch ? "true" : "false");
}

std::vector<long> CreateCenRouteMapRequest::getPrependAsPath()const
{
	return prependAsPath_;
}

void CreateCenRouteMapRequest::setPrependAsPath(const std::vector<long>& prependAsPath)
{
	prependAsPath_ = prependAsPath;
	for(int dep1 = 0; dep1!= prependAsPath.size(); dep1++) {
		setParameter("PrependAsPath."+ std::to_string(dep1), std::to_string(prependAsPath.at(dep1)));
	}
}

std::string CreateCenRouteMapRequest::getAsPathMatchMode()const
{
	return asPathMatchMode_;
}

void CreateCenRouteMapRequest::setAsPathMatchMode(const std::string& asPathMatchMode)
{
	asPathMatchMode_ = asPathMatchMode;
	setParameter("AsPathMatchMode", asPathMatchMode);
}

std::vector<std::string> CreateCenRouteMapRequest::getMatchCommunitySet()const
{
	return matchCommunitySet_;
}

void CreateCenRouteMapRequest::setMatchCommunitySet(const std::vector<std::string>& matchCommunitySet)
{
	matchCommunitySet_ = matchCommunitySet;
	for(int dep1 = 0; dep1!= matchCommunitySet.size(); dep1++) {
		setParameter("MatchCommunitySet."+ std::to_string(dep1), matchCommunitySet.at(dep1));
	}
}

std::string CreateCenRouteMapRequest::getCenRegionId()const
{
	return cenRegionId_;
}

void CreateCenRouteMapRequest::setCenRegionId(const std::string& cenRegionId)
{
	cenRegionId_ = cenRegionId;
	setParameter("CenRegionId", cenRegionId);
}

