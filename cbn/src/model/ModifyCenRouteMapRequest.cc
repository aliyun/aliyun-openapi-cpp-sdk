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
{}

ModifyCenRouteMapRequest::~ModifyCenRouteMapRequest()
{}

std::vector<std::string> ModifyCenRouteMapRequest::getRouteTypes()const
{
	return routeTypes_;
}

void ModifyCenRouteMapRequest::setRouteTypes(const std::vector<std::string>& routeTypes)
{
	routeTypes_ = routeTypes;
	for(int i = 0; i!= routeTypes.size(); i++)
		setCoreParameter("RouteTypes."+ std::to_string(i), std::to_string(routeTypes.at(i)));
}

long ModifyCenRouteMapRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCenRouteMapRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyCenRouteMapRequest::getCidrMatchMode()const
{
	return cidrMatchMode_;
}

void ModifyCenRouteMapRequest::setCidrMatchMode(const std::string& cidrMatchMode)
{
	cidrMatchMode_ = cidrMatchMode;
	setCoreParameter("CidrMatchMode", std::to_string(cidrMatchMode));
}

std::string ModifyCenRouteMapRequest::getCommunityMatchMode()const
{
	return communityMatchMode_;
}

void ModifyCenRouteMapRequest::setCommunityMatchMode(const std::string& communityMatchMode)
{
	communityMatchMode_ = communityMatchMode;
	setCoreParameter("CommunityMatchMode", std::to_string(communityMatchMode));
}

std::string ModifyCenRouteMapRequest::getCenId()const
{
	return cenId_;
}

void ModifyCenRouteMapRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", std::to_string(cenId));
}

std::string ModifyCenRouteMapRequest::getMapResult()const
{
	return mapResult_;
}

void ModifyCenRouteMapRequest::setMapResult(const std::string& mapResult)
{
	mapResult_ = mapResult;
	setCoreParameter("MapResult", std::to_string(mapResult));
}

int ModifyCenRouteMapRequest::getAsPathLength()const
{
	return asPathLength_;
}

void ModifyCenRouteMapRequest::setAsPathLength(int asPathLength)
{
	asPathLength_ = asPathLength;
	setCoreParameter("AsPathLength", asPathLength);
}

std::string ModifyCenRouteMapRequest::getDescription()const
{
	return description_;
}

void ModifyCenRouteMapRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

bool ModifyCenRouteMapRequest::getSourceInstanceIdsReverseMatch()const
{
	return sourceInstanceIdsReverseMatch_;
}

void ModifyCenRouteMapRequest::setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch)
{
	sourceInstanceIdsReverseMatch_ = sourceInstanceIdsReverseMatch;
	setCoreParameter("SourceInstanceIdsReverseMatch", sourceInstanceIdsReverseMatch ? "true" : "false");
}

int ModifyCenRouteMapRequest::getNextPriority()const
{
	return nextPriority_;
}

void ModifyCenRouteMapRequest::setNextPriority(int nextPriority)
{
	nextPriority_ = nextPriority;
	setCoreParameter("NextPriority", nextPriority);
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationCidrBlocks()const
{
	return destinationCidrBlocks_;
}

void ModifyCenRouteMapRequest::setDestinationCidrBlocks(const std::vector<std::string>& destinationCidrBlocks)
{
	destinationCidrBlocks_ = destinationCidrBlocks;
	for(int i = 0; i!= destinationCidrBlocks.size(); i++)
		setCoreParameter("DestinationCidrBlocks."+ std::to_string(i), std::to_string(destinationCidrBlocks.at(i)));
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationRouteTableIds()const
{
	return destinationRouteTableIds_;
}

void ModifyCenRouteMapRequest::setDestinationRouteTableIds(const std::vector<std::string>& destinationRouteTableIds)
{
	destinationRouteTableIds_ = destinationRouteTableIds;
	for(int i = 0; i!= destinationRouteTableIds.size(); i++)
		setCoreParameter("DestinationRouteTableIds."+ std::to_string(i), std::to_string(destinationRouteTableIds.at(i)));
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceInstanceIds()const
{
	return sourceInstanceIds_;
}

void ModifyCenRouteMapRequest::setSourceInstanceIds(const std::vector<std::string>& sourceInstanceIds)
{
	sourceInstanceIds_ = sourceInstanceIds;
	for(int i = 0; i!= sourceInstanceIds.size(); i++)
		setCoreParameter("SourceInstanceIds."+ std::to_string(i), std::to_string(sourceInstanceIds.at(i)));
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceRegionIds()const
{
	return sourceRegionIds_;
}

void ModifyCenRouteMapRequest::setSourceRegionIds(const std::vector<std::string>& sourceRegionIds)
{
	sourceRegionIds_ = sourceRegionIds;
	for(int i = 0; i!= sourceRegionIds.size(); i++)
		setCoreParameter("SourceRegionIds."+ std::to_string(i), std::to_string(sourceRegionIds.at(i)));
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationInstanceIds()const
{
	return destinationInstanceIds_;
}

void ModifyCenRouteMapRequest::setDestinationInstanceIds(const std::vector<std::string>& destinationInstanceIds)
{
	destinationInstanceIds_ = destinationInstanceIds;
	for(int i = 0; i!= destinationInstanceIds.size(); i++)
		setCoreParameter("DestinationInstanceIds."+ std::to_string(i), std::to_string(destinationInstanceIds.at(i)));
}

std::vector<int> ModifyCenRouteMapRequest::getMatchAsns()const
{
	return matchAsns_;
}

void ModifyCenRouteMapRequest::setMatchAsns(const std::vector<int>& matchAsns)
{
	matchAsns_ = matchAsns;
	for(int i = 0; i!= matchAsns.size(); i++)
		setCoreParameter("MatchAsns."+ std::to_string(i), matchAsns.at(i));
}

std::string ModifyCenRouteMapRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCenRouteMapRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyCenRouteMapRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCenRouteMapRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int ModifyCenRouteMapRequest::getPreference()const
{
	return preference_;
}

void ModifyCenRouteMapRequest::setPreference(int preference)
{
	preference_ = preference;
	setCoreParameter("Preference", preference);
}

bool ModifyCenRouteMapRequest::getDestinationInstanceIdsReverseMatch()const
{
	return destinationInstanceIdsReverseMatch_;
}

void ModifyCenRouteMapRequest::setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch)
{
	destinationInstanceIdsReverseMatch_ = destinationInstanceIdsReverseMatch;
	setCoreParameter("DestinationInstanceIdsReverseMatch", destinationInstanceIdsReverseMatch ? "true" : "false");
}

std::string ModifyCenRouteMapRequest::getRouteMapId()const
{
	return routeMapId_;
}

void ModifyCenRouteMapRequest::setRouteMapId(const std::string& routeMapId)
{
	routeMapId_ = routeMapId;
	setCoreParameter("RouteMapId", std::to_string(routeMapId));
}

long ModifyCenRouteMapRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCenRouteMapRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int ModifyCenRouteMapRequest::getPriority()const
{
	return priority_;
}

void ModifyCenRouteMapRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::vector<std::string> ModifyCenRouteMapRequest::getDestinationChildInstanceTypes()const
{
	return destinationChildInstanceTypes_;
}

void ModifyCenRouteMapRequest::setDestinationChildInstanceTypes(const std::vector<std::string>& destinationChildInstanceTypes)
{
	destinationChildInstanceTypes_ = destinationChildInstanceTypes;
	for(int i = 0; i!= destinationChildInstanceTypes.size(); i++)
		setCoreParameter("DestinationChildInstanceTypes."+ std::to_string(i), std::to_string(destinationChildInstanceTypes.at(i)));
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceRouteTableIds()const
{
	return sourceRouteTableIds_;
}

void ModifyCenRouteMapRequest::setSourceRouteTableIds(const std::vector<std::string>& sourceRouteTableIds)
{
	sourceRouteTableIds_ = sourceRouteTableIds;
	for(int i = 0; i!= sourceRouteTableIds.size(); i++)
		setCoreParameter("SourceRouteTableIds."+ std::to_string(i), std::to_string(sourceRouteTableIds.at(i)));
}

std::string ModifyCenRouteMapRequest::getAsPathMatchMode()const
{
	return asPathMatchMode_;
}

void ModifyCenRouteMapRequest::setAsPathMatchMode(const std::string& asPathMatchMode)
{
	asPathMatchMode_ = asPathMatchMode;
	setCoreParameter("AsPathMatchMode", std::to_string(asPathMatchMode));
}

std::vector<std::string> ModifyCenRouteMapRequest::getSourceChildInstanceTypes()const
{
	return sourceChildInstanceTypes_;
}

void ModifyCenRouteMapRequest::setSourceChildInstanceTypes(const std::vector<std::string>& sourceChildInstanceTypes)
{
	sourceChildInstanceTypes_ = sourceChildInstanceTypes;
	for(int i = 0; i!= sourceChildInstanceTypes.size(); i++)
		setCoreParameter("SourceChildInstanceTypes."+ std::to_string(i), std::to_string(sourceChildInstanceTypes.at(i)));
}

std::vector<std::string> ModifyCenRouteMapRequest::getMatchCommunitySet()const
{
	return matchCommunitySet_;
}

void ModifyCenRouteMapRequest::setMatchCommunitySet(const std::vector<std::string>& matchCommunitySet)
{
	matchCommunitySet_ = matchCommunitySet;
	for(int i = 0; i!= matchCommunitySet.size(); i++)
		setCoreParameter("MatchCommunitySet."+ std::to_string(i), std::to_string(matchCommunitySet.at(i)));
}

std::string ModifyCenRouteMapRequest::getCommunityOperateMode()const
{
	return communityOperateMode_;
}

void ModifyCenRouteMapRequest::setCommunityOperateMode(const std::string& communityOperateMode)
{
	communityOperateMode_ = communityOperateMode;
	setCoreParameter("CommunityOperateMode", std::to_string(communityOperateMode));
}

std::string ModifyCenRouteMapRequest::getCenRegionId()const
{
	return cenRegionId_;
}

void ModifyCenRouteMapRequest::setCenRegionId(const std::string& cenRegionId)
{
	cenRegionId_ = cenRegionId;
	setCoreParameter("CenRegionId", std::to_string(cenRegionId));
}

std::vector<std::string> ModifyCenRouteMapRequest::getOperateCommunitySet()const
{
	return operateCommunitySet_;
}

void ModifyCenRouteMapRequest::setOperateCommunitySet(const std::vector<std::string>& operateCommunitySet)
{
	operateCommunitySet_ = operateCommunitySet;
	for(int i = 0; i!= operateCommunitySet.size(); i++)
		setCoreParameter("OperateCommunitySet."+ std::to_string(i), std::to_string(operateCommunitySet.at(i)));
}

