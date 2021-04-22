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

ModifyCenRouteMapRequest::ModifyCenRouteMapRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ModifyCenRouteMap")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyCenRouteMapRequest::~ModifyCenRouteMapRequest()
{}

long ModifyCenRouteMapRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCenRouteMapRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyCenRouteMapRequest::getCommunityMatchMode()const
{
	return communityMatchMode_;
}

void ModifyCenRouteMapRequest::setCommunityMatchMode(const std::string& communityMatchMode)
{
	communityMatchMode_ = communityMatchMode;
	setParameter("CommunityMatchMode", communityMatchMode);
}

std::string ModifyCenRouteMapRequest::getMapResult()const
{
	return mapResult_;
}

void ModifyCenRouteMapRequest::setMapResult(const std::string& mapResult)
{
	mapResult_ = mapResult;
	setParameter("MapResult", mapResult);
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationRegionIds()const
{
	return destinationRegionIds_;
}

void ModifyCenRouteMapRequest::setDestinationRegionIds(const std::vector<std::string>& destinationRegionIds)
{
	destinationRegionIds_ = destinationRegionIds;
	for(int dep1 = 0; dep1!= destinationRegionIds.size(); dep1++) {
		setParameter("DestinationRegionIds."+ std::to_string(dep1), destinationRegionIds.at(dep1));
	}
}

int ModifyCenRouteMapRequest::getNextPriority()const
{
	return nextPriority_;
}

void ModifyCenRouteMapRequest::setNextPriority(int nextPriority)
{
	nextPriority_ = nextPriority;
	setParameter("NextPriority", std::to_string(nextPriority));
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationCidrBlocks()const
{
	return destinationCidrBlocks_;
}

void ModifyCenRouteMapRequest::setDestinationCidrBlocks(const std::vector<std::string>& destinationCidrBlocks)
{
	destinationCidrBlocks_ = destinationCidrBlocks;
	for(int dep1 = 0; dep1!= destinationCidrBlocks.size(); dep1++) {
		setParameter("DestinationCidrBlocks."+ std::to_string(dep1), destinationCidrBlocks.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getOriginalRouteTableIds()const
{
	return originalRouteTableIds_;
}

void ModifyCenRouteMapRequest::setOriginalRouteTableIds(const std::vector<std::string>& originalRouteTableIds)
{
	originalRouteTableIds_ = originalRouteTableIds;
	for(int dep1 = 0; dep1!= originalRouteTableIds.size(); dep1++) {
		setParameter("OriginalRouteTableIds."+ std::to_string(dep1), originalRouteTableIds.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceInstanceIds()const
{
	return sourceInstanceIds_;
}

void ModifyCenRouteMapRequest::setSourceInstanceIds(const std::vector<std::string>& sourceInstanceIds)
{
	sourceInstanceIds_ = sourceInstanceIds;
	for(int dep1 = 0; dep1!= sourceInstanceIds.size(); dep1++) {
		setParameter("SourceInstanceIds."+ std::to_string(dep1), sourceInstanceIds.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceRegionIds()const
{
	return sourceRegionIds_;
}

void ModifyCenRouteMapRequest::setSourceRegionIds(const std::vector<std::string>& sourceRegionIds)
{
	sourceRegionIds_ = sourceRegionIds;
	for(int dep1 = 0; dep1!= sourceRegionIds.size(); dep1++) {
		setParameter("SourceRegionIds."+ std::to_string(dep1), sourceRegionIds.at(dep1));
	}
}

std::string ModifyCenRouteMapRequest::getGatewayZoneId()const
{
	return gatewayZoneId_;
}

void ModifyCenRouteMapRequest::setGatewayZoneId(const std::string& gatewayZoneId)
{
	gatewayZoneId_ = gatewayZoneId;
	setParameter("GatewayZoneId", gatewayZoneId);
}

std::vector<int> ModifyCenRouteMapRequest::getMatchAsns()const
{
	return matchAsns_;
}

void ModifyCenRouteMapRequest::setMatchAsns(const std::vector<int>& matchAsns)
{
	matchAsns_ = matchAsns;
	for(int dep1 = 0; dep1!= matchAsns.size(); dep1++) {
		setParameter("MatchAsns."+ std::to_string(dep1), std::to_string(matchAsns.at(dep1)));
	}
}

int ModifyCenRouteMapRequest::getPreference()const
{
	return preference_;
}

void ModifyCenRouteMapRequest::setPreference(int preference)
{
	preference_ = preference;
	setParameter("Preference", std::to_string(preference));
}

long ModifyCenRouteMapRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCenRouteMapRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ModifyCenRouteMapRequest::getPriority()const
{
	return priority_;
}

void ModifyCenRouteMapRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationChildInstanceTypes()const
{
	return destinationChildInstanceTypes_;
}

void ModifyCenRouteMapRequest::setDestinationChildInstanceTypes(const std::vector<std::string>& destinationChildInstanceTypes)
{
	destinationChildInstanceTypes_ = destinationChildInstanceTypes;
	for(int dep1 = 0; dep1!= destinationChildInstanceTypes.size(); dep1++) {
		setParameter("DestinationChildInstanceTypes."+ std::to_string(dep1), destinationChildInstanceTypes.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceRouteTableIds()const
{
	return sourceRouteTableIds_;
}

void ModifyCenRouteMapRequest::setSourceRouteTableIds(const std::vector<std::string>& sourceRouteTableIds)
{
	sourceRouteTableIds_ = sourceRouteTableIds;
	for(int dep1 = 0; dep1!= sourceRouteTableIds.size(); dep1++) {
		setParameter("SourceRouteTableIds."+ std::to_string(dep1), sourceRouteTableIds.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceChildInstanceTypes()const
{
	return sourceChildInstanceTypes_;
}

void ModifyCenRouteMapRequest::setSourceChildInstanceTypes(const std::vector<std::string>& sourceChildInstanceTypes)
{
	sourceChildInstanceTypes_ = sourceChildInstanceTypes;
	for(int dep1 = 0; dep1!= sourceChildInstanceTypes.size(); dep1++) {
		setParameter("SourceChildInstanceTypes."+ std::to_string(dep1), sourceChildInstanceTypes.at(dep1));
	}
}

std::string ModifyCenRouteMapRequest::getCommunityOperateMode()const
{
	return communityOperateMode_;
}

void ModifyCenRouteMapRequest::setCommunityOperateMode(const std::string& communityOperateMode)
{
	communityOperateMode_ = communityOperateMode;
	setParameter("CommunityOperateMode", communityOperateMode);
}

std::vector<std::string> ModifyCenRouteMapRequest::getOperateCommunitySet()const
{
	return operateCommunitySet_;
}

void ModifyCenRouteMapRequest::setOperateCommunitySet(const std::vector<std::string>& operateCommunitySet)
{
	operateCommunitySet_ = operateCommunitySet;
	for(int dep1 = 0; dep1!= operateCommunitySet.size(); dep1++) {
		setParameter("OperateCommunitySet."+ std::to_string(dep1), operateCommunitySet.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getRouteTypes()const
{
	return routeTypes_;
}

void ModifyCenRouteMapRequest::setRouteTypes(const std::vector<std::string>& routeTypes)
{
	routeTypes_ = routeTypes;
	for(int dep1 = 0; dep1!= routeTypes.size(); dep1++) {
		setParameter("RouteTypes."+ std::to_string(dep1), routeTypes.at(dep1));
	}
}

std::string ModifyCenRouteMapRequest::getMatchAddressType()const
{
	return matchAddressType_;
}

void ModifyCenRouteMapRequest::setMatchAddressType(const std::string& matchAddressType)
{
	matchAddressType_ = matchAddressType;
	setParameter("MatchAddressType", matchAddressType);
}

std::string ModifyCenRouteMapRequest::getCidrMatchMode()const
{
	return cidrMatchMode_;
}

void ModifyCenRouteMapRequest::setCidrMatchMode(const std::string& cidrMatchMode)
{
	cidrMatchMode_ = cidrMatchMode;
	setParameter("CidrMatchMode", cidrMatchMode);
}

std::string ModifyCenRouteMapRequest::getCenId()const
{
	return cenId_;
}

void ModifyCenRouteMapRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string ModifyCenRouteMapRequest::getDescription()const
{
	return description_;
}

void ModifyCenRouteMapRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool ModifyCenRouteMapRequest::getSourceInstanceIdsReverseMatch()const
{
	return sourceInstanceIdsReverseMatch_;
}

void ModifyCenRouteMapRequest::setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch)
{
	sourceInstanceIdsReverseMatch_ = sourceInstanceIdsReverseMatch;
	setParameter("SourceInstanceIdsReverseMatch", sourceInstanceIdsReverseMatch ? "true" : "false");
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationRouteTableIds()const
{
	return destinationRouteTableIds_;
}

void ModifyCenRouteMapRequest::setDestinationRouteTableIds(const std::vector<std::string>& destinationRouteTableIds)
{
	destinationRouteTableIds_ = destinationRouteTableIds;
	for(int dep1 = 0; dep1!= destinationRouteTableIds.size(); dep1++) {
		setParameter("DestinationRouteTableIds."+ std::to_string(dep1), destinationRouteTableIds.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceZoneIds()const
{
	return sourceZoneIds_;
}

void ModifyCenRouteMapRequest::setSourceZoneIds(const std::vector<std::string>& sourceZoneIds)
{
	sourceZoneIds_ = sourceZoneIds;
	for(int dep1 = 0; dep1!= sourceZoneIds.size(); dep1++) {
		setParameter("SourceZoneIds."+ std::to_string(dep1), sourceZoneIds.at(dep1));
	}
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationInstanceIds()const
{
	return destinationInstanceIds_;
}

void ModifyCenRouteMapRequest::setDestinationInstanceIds(const std::vector<std::string>& destinationInstanceIds)
{
	destinationInstanceIds_ = destinationInstanceIds;
	for(int dep1 = 0; dep1!= destinationInstanceIds.size(); dep1++) {
		setParameter("DestinationInstanceIds."+ std::to_string(dep1), destinationInstanceIds.at(dep1));
	}
}

std::string ModifyCenRouteMapRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCenRouteMapRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCenRouteMapRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCenRouteMapRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool ModifyCenRouteMapRequest::getDestinationInstanceIdsReverseMatch()const
{
	return destinationInstanceIdsReverseMatch_;
}

void ModifyCenRouteMapRequest::setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch)
{
	destinationInstanceIdsReverseMatch_ = destinationInstanceIdsReverseMatch;
	setParameter("DestinationInstanceIdsReverseMatch", destinationInstanceIdsReverseMatch ? "true" : "false");
}

std::string ModifyCenRouteMapRequest::getRouteMapId()const
{
	return routeMapId_;
}

void ModifyCenRouteMapRequest::setRouteMapId(const std::string& routeMapId)
{
	routeMapId_ = routeMapId;
	setParameter("RouteMapId", routeMapId);
}

std::vector<long> ModifyCenRouteMapRequest::getPrependAsPath()const
{
	return prependAsPath_;
}

void ModifyCenRouteMapRequest::setPrependAsPath(const std::vector<long>& prependAsPath)
{
	prependAsPath_ = prependAsPath;
	for(int dep1 = 0; dep1!= prependAsPath.size(); dep1++) {
		setParameter("PrependAsPath."+ std::to_string(dep1), std::to_string(prependAsPath.at(dep1)));
	}
}

std::string ModifyCenRouteMapRequest::getAsPathMatchMode()const
{
	return asPathMatchMode_;
}

void ModifyCenRouteMapRequest::setAsPathMatchMode(const std::string& asPathMatchMode)
{
	asPathMatchMode_ = asPathMatchMode;
	setParameter("AsPathMatchMode", asPathMatchMode);
}

std::vector<std::string> ModifyCenRouteMapRequest::getMatchCommunitySet()const
{
	return matchCommunitySet_;
}

void ModifyCenRouteMapRequest::setMatchCommunitySet(const std::vector<std::string>& matchCommunitySet)
{
	matchCommunitySet_ = matchCommunitySet;
	for(int dep1 = 0; dep1!= matchCommunitySet.size(); dep1++) {
		setParameter("MatchCommunitySet."+ std::to_string(dep1), matchCommunitySet.at(dep1));
	}
}

std::string ModifyCenRouteMapRequest::getCenRegionId()const
{
	return cenRegionId_;
}

void ModifyCenRouteMapRequest::setCenRegionId(const std::string& cenRegionId)
{
	cenRegionId_ = cenRegionId;
	setParameter("CenRegionId", cenRegionId);
}

