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

#include <alibabacloud/ecs/model/DescribeNetworkInterfacesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeNetworkInterfacesRequest;

DescribeNetworkInterfacesRequest::DescribeNetworkInterfacesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeNetworkInterfaces")
{}

DescribeNetworkInterfacesRequest::~DescribeNetworkInterfacesRequest()
{}

long DescribeNetworkInterfacesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeNetworkInterfacesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeNetworkInterfacesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeNetworkInterfacesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeNetworkInterfacesRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeNetworkInterfacesRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool DescribeNetworkInterfacesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeNetworkInterfacesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeNetworkInterfacesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeNetworkInterfacesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeNetworkInterfacesRequest::getType()const
{
	return type_;
}

void DescribeNetworkInterfacesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeNetworkInterfacesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeNetworkInterfacesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeNetworkInterfacesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeNetworkInterfacesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

int DescribeNetworkInterfacesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNetworkInterfacesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeNetworkInterfacesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeNetworkInterfacesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeNetworkInterfacesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeNetworkInterfacesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeNetworkInterfacesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeNetworkInterfacesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeNetworkInterfacesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeNetworkInterfacesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeNetworkInterfacesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeNetworkInterfacesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeNetworkInterfacesRequest::getEnable()const
{
	return enable_;
}

void DescribeNetworkInterfacesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeNetworkInterfacesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeNetworkInterfacesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

int DescribeNetworkInterfacesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeNetworkInterfacesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeNetworkInterfacesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeNetworkInterfacesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::vector<DescribeNetworkInterfacesRequest::Tag> DescribeNetworkInterfacesRequest::getTag()const
{
	return tag_;
}

void DescribeNetworkInterfacesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

std::string DescribeNetworkInterfacesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeNetworkInterfacesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeNetworkInterfacesRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setParameter("NetworkInterfaceName", networkInterfaceName);
}

long DescribeNetworkInterfacesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeNetworkInterfacesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeNetworkInterfacesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeNetworkInterfacesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeNetworkInterfacesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeNetworkInterfacesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeNetworkInterfacesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeNetworkInterfacesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeNetworkInterfacesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeNetworkInterfacesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeNetworkInterfacesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeNetworkInterfacesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeNetworkInterfacesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeNetworkInterfacesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeNetworkInterfacesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeNetworkInterfacesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeNetworkInterfacesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeNetworkInterfacesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeNetworkInterfacesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeNetworkInterfacesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string DescribeNetworkInterfacesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeNetworkInterfacesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeNetworkInterfacesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeNetworkInterfacesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeNetworkInterfacesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeNetworkInterfacesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeNetworkInterfacesRequest::getPrimaryIpAddress()const
{
	return primaryIpAddress_;
}

void DescribeNetworkInterfacesRequest::setPrimaryIpAddress(const std::string& primaryIpAddress)
{
	primaryIpAddress_ = primaryIpAddress;
	setParameter("PrimaryIpAddress", primaryIpAddress);
}

std::vector<std::string> DescribeNetworkInterfacesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void DescribeNetworkInterfacesRequest::setNetworkInterfaceId(const std::vector<std::string>& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	for(int i = 0; i!= networkInterfaceId.size(); i++)
		setParameter("NetworkInterfaceId."+ std::to_string(i), networkInterfaceId.at(i));
}

