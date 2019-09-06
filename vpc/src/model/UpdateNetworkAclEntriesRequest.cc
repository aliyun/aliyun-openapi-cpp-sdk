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
{}

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
	int i = 0;
	for(int i = 0; i!= egressAclEntries.size(); i++)	{
		auto obj = egressAclEntries.at(i);
		std::string str ="EgressAclEntries."+ std::to_string(i);
		setCoreParameter(str + ".NetworkAclEntryName", obj.networkAclEntryName);
		setCoreParameter(str + ".NetworkAclEntryId", obj.networkAclEntryId);
		setCoreParameter(str + ".Policy", obj.policy);
		setCoreParameter(str + ".Protocol", obj.protocol);
		setCoreParameter(str + ".DestinationCidrIp", obj.destinationCidrIp);
		setCoreParameter(str + ".Port", obj.port);
		setCoreParameter(str + ".EntryType", obj.entryType);
		setCoreParameter(str + ".Description", obj.description);
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
	int i = 0;
	for(int i = 0; i!= ingressAclEntries.size(); i++)	{
		auto obj = ingressAclEntries.at(i);
		std::string str ="IngressAclEntries."+ std::to_string(i);
		setCoreParameter(str + ".NetworkAclEntryName", obj.networkAclEntryName);
		setCoreParameter(str + ".NetworkAclEntryId", obj.networkAclEntryId);
		setCoreParameter(str + ".Policy", obj.policy);
		setCoreParameter(str + ".Protocol", obj.protocol);
		setCoreParameter(str + ".SourceCidrIp", obj.sourceCidrIp);
		setCoreParameter(str + ".Port", obj.port);
		setCoreParameter(str + ".EntryType", obj.entryType);
		setCoreParameter(str + ".Description", obj.description);
	}
}

