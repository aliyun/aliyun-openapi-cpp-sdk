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

#include <alibabacloud/vpc/model/UpdateNetworkAclEntriesRequest.h>

using AlibabaCloud::Vpc::Model::UpdateNetworkAclEntriesRequest;

UpdateNetworkAclEntriesRequest::UpdateNetworkAclEntriesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UpdateNetworkAclEntries")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateNetworkAclEntriesRequest::~UpdateNetworkAclEntriesRequest()
{}

long UpdateNetworkAclEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateNetworkAclEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> UpdateNetworkAclEntriesRequest::getEgressAclEntries()const
{
	return egressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setEgressAclEntries(const std::vector<EgressAclEntries>& egressAclEntries)
{
	egressAclEntries_ = egressAclEntries;
	for(int dep1 = 0; dep1!= egressAclEntries.size(); dep1++) {
		auto egressAclEntriesObj = egressAclEntries.at(dep1);
		std::string egressAclEntriesObjStr = "EgressAclEntries." + std::to_string(dep1);
		setCoreParameter(egressAclEntriesObjStr + ".NetworkAclEntryName", egressAclEntriesObj.networkAclEntryName);
		setCoreParameter(egressAclEntriesObjStr + ".NetworkAclEntryId", egressAclEntriesObj.networkAclEntryId);
		setCoreParameter(egressAclEntriesObjStr + ".Policy", egressAclEntriesObj.policy);
		setCoreParameter(egressAclEntriesObjStr + ".Protocol", egressAclEntriesObj.protocol);
		setCoreParameter(egressAclEntriesObjStr + ".DestinationCidrIp", egressAclEntriesObj.destinationCidrIp);
		setCoreParameter(egressAclEntriesObjStr + ".Port", egressAclEntriesObj.port);
		setCoreParameter(egressAclEntriesObjStr + ".EntryType", egressAclEntriesObj.entryType);
		setCoreParameter(egressAclEntriesObjStr + ".Description", egressAclEntriesObj.description);
	}
}

std::string UpdateNetworkAclEntriesRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateNetworkAclEntriesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string UpdateNetworkAclEntriesRequest::getRegionId()const
{
	return regionId_;
}

void UpdateNetworkAclEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateNetworkAclEntriesRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void UpdateNetworkAclEntriesRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

bool UpdateNetworkAclEntriesRequest::getUpdateIngressAclEntries()const
{
	return updateIngressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setUpdateIngressAclEntries(bool updateIngressAclEntries)
{
	updateIngressAclEntries_ = updateIngressAclEntries;
	setCoreParameter("UpdateIngressAclEntries", updateIngressAclEntries ? "true" : "false");
}

std::string UpdateNetworkAclEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateNetworkAclEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool UpdateNetworkAclEntriesRequest::getUpdateEgressAclEntries()const
{
	return updateEgressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setUpdateEgressAclEntries(bool updateEgressAclEntries)
{
	updateEgressAclEntries_ = updateEgressAclEntries;
	setCoreParameter("UpdateEgressAclEntries", updateEgressAclEntries ? "true" : "false");
}

long UpdateNetworkAclEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateNetworkAclEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> UpdateNetworkAclEntriesRequest::getIngressAclEntries()const
{
	return ingressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setIngressAclEntries(const std::vector<IngressAclEntries>& ingressAclEntries)
{
	ingressAclEntries_ = ingressAclEntries;
	for(int dep1 = 0; dep1!= ingressAclEntries.size(); dep1++) {
		auto ingressAclEntriesObj = ingressAclEntries.at(dep1);
		std::string ingressAclEntriesObjStr = "IngressAclEntries." + std::to_string(dep1);
		setCoreParameter(ingressAclEntriesObjStr + ".NetworkAclEntryName", ingressAclEntriesObj.networkAclEntryName);
		setCoreParameter(ingressAclEntriesObjStr + ".NetworkAclEntryId", ingressAclEntriesObj.networkAclEntryId);
		setCoreParameter(ingressAclEntriesObjStr + ".Policy", ingressAclEntriesObj.policy);
		setCoreParameter(ingressAclEntriesObjStr + ".Protocol", ingressAclEntriesObj.protocol);
		setCoreParameter(ingressAclEntriesObjStr + ".SourceCidrIp", ingressAclEntriesObj.sourceCidrIp);
		setCoreParameter(ingressAclEntriesObjStr + ".Port", ingressAclEntriesObj.port);
		setCoreParameter(ingressAclEntriesObjStr + ".EntryType", ingressAclEntriesObj.entryType);
		setCoreParameter(ingressAclEntriesObjStr + ".Description", ingressAclEntriesObj.description);
	}
}

