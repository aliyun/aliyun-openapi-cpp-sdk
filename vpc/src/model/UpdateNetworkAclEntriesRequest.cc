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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
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
		setCoreParameter(str + ".NetworkAclEntryName", std::to_string(obj.networkAclEntryName));
		setCoreParameter(str + ".NetworkAclEntryId", std::to_string(obj.networkAclEntryId));
		setCoreParameter(str + ".Policy", std::to_string(obj.policy));
		setCoreParameter(str + ".Protocol", std::to_string(obj.protocol));
		setCoreParameter(str + ".DestinationCidrIp", std::to_string(obj.destinationCidrIp));
		setCoreParameter(str + ".Port", std::to_string(obj.port));
		setCoreParameter(str + ".EntryType", std::to_string(obj.entryType));
		setCoreParameter(str + ".Description", std::to_string(obj.description));
	}
}

std::string UpdateNetworkAclEntriesRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateNetworkAclEntriesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long UpdateNetworkAclEntriesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateNetworkAclEntriesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool UpdateNetworkAclEntriesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateNetworkAclEntriesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateNetworkAclEntriesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateNetworkAclEntriesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string UpdateNetworkAclEntriesRequest::getCallerType()const
{
	return callerType_;
}

void UpdateNetworkAclEntriesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string UpdateNetworkAclEntriesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UpdateNetworkAclEntriesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string UpdateNetworkAclEntriesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateNetworkAclEntriesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string UpdateNetworkAclEntriesRequest::getRegionId()const
{
	return regionId_;
}

void UpdateNetworkAclEntriesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string UpdateNetworkAclEntriesRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateNetworkAclEntriesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool UpdateNetworkAclEntriesRequest::getEnable()const
{
	return enable_;
}

void UpdateNetworkAclEntriesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string UpdateNetworkAclEntriesRequest::getRequestContent()const
{
	return requestContent_;
}

void UpdateNetworkAclEntriesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string UpdateNetworkAclEntriesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UpdateNetworkAclEntriesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string UpdateNetworkAclEntriesRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void UpdateNetworkAclEntriesRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", std::to_string(networkAclId));
}

std::string UpdateNetworkAclEntriesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UpdateNetworkAclEntriesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
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

long UpdateNetworkAclEntriesRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateNetworkAclEntriesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string UpdateNetworkAclEntriesRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateNetworkAclEntriesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string UpdateNetworkAclEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateNetworkAclEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
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

std::string UpdateNetworkAclEntriesRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateNetworkAclEntriesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long UpdateNetworkAclEntriesRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateNetworkAclEntriesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool UpdateNetworkAclEntriesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateNetworkAclEntriesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UpdateNetworkAclEntriesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateNetworkAclEntriesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateNetworkAclEntriesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateNetworkAclEntriesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateNetworkAclEntriesRequest::getRequestId()const
{
	return requestId_;
}

void UpdateNetworkAclEntriesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
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
		setCoreParameter(str + ".NetworkAclEntryName", std::to_string(obj.networkAclEntryName));
		setCoreParameter(str + ".NetworkAclEntryId", std::to_string(obj.networkAclEntryId));
		setCoreParameter(str + ".Policy", std::to_string(obj.policy));
		setCoreParameter(str + ".Protocol", std::to_string(obj.protocol));
		setCoreParameter(str + ".SourceCidrIp", std::to_string(obj.sourceCidrIp));
		setCoreParameter(str + ".Port", std::to_string(obj.port));
		setCoreParameter(str + ".EntryType", std::to_string(obj.entryType));
		setCoreParameter(str + ".Description", std::to_string(obj.description));
	}
}

