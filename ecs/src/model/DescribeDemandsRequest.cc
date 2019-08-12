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

#include <alibabacloud/ecs/model/DescribeDemandsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDemandsRequest;

DescribeDemandsRequest::DescribeDemandsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDemands")
{}

DescribeDemandsRequest::~DescribeDemandsRequest()
{}

long DescribeDemandsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDemandsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeDemandsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDemandsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDemandsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDemandsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDemandsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDemandsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDemandsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDemandsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDemandsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDemandsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

int DescribeDemandsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDemandsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeDemandsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDemandsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDemandsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDemandsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDemandsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDemandsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeDemandsRequest::getEnable()const
{
	return enable_;
}

void DescribeDemandsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string DescribeDemandsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDemandsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeDemandsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDemandsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeDemandsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDemandsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDemandsRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeDemandsRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::vector<DescribeDemandsRequest::Tag> DescribeDemandsRequest::getTag()const
{
	return tag_;
}

void DescribeDemandsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Key", std::to_string(obj.key));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

std::string DescribeDemandsRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeDemandsRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeDemandsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDemandsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDemandsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDemandsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDemandsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDemandsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

bool DescribeDemandsRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeDemandsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun);
}

std::string DescribeDemandsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDemandsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDemandsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDemandsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDemandsRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeDemandsRequest::setInstanceTypeFamily(const std::string& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	setCoreParameter("InstanceTypeFamily", instanceTypeFamily);
}

std::string DescribeDemandsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDemandsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDemandsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDemandsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::vector<std::string> DescribeDemandsRequest::getDemandStatus()const
{
	return demandStatus_;
}

void DescribeDemandsRequest::setDemandStatus(const std::vector<std::string>& demandStatus)
{
	demandStatus_ = demandStatus;
	for(int i = 0; i!= demandStatus.size(); i++)
		setCoreParameter("DemandStatus."+ std::to_string(i), std::to_string(demandStatus.at(i)));
}

bool DescribeDemandsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDemandsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDemandsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDemandsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDemandsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDemandsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDemandsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDemandsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDemandsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeDemandsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string DescribeDemandsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDemandsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

