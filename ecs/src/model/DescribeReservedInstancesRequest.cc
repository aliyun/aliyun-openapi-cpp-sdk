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

#include <alibabacloud/ecs/model/DescribeReservedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeReservedInstancesRequest;

DescribeReservedInstancesRequest::DescribeReservedInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeReservedInstances")
{}

DescribeReservedInstancesRequest::~DescribeReservedInstancesRequest()
{}

long DescribeReservedInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReservedInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeReservedInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeReservedInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeReservedInstancesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeReservedInstancesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeReservedInstancesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeReservedInstancesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeReservedInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeReservedInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeReservedInstancesRequest::getCallerType()const
{
	return callerType_;
}

void DescribeReservedInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeReservedInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeReservedInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeReservedInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReservedInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeReservedInstancesRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeReservedInstancesRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setCoreParameter("LockReason", std::to_string(lockReason));
}

std::string DescribeReservedInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReservedInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeReservedInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReservedInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeReservedInstancesRequest::getEnable()const
{
	return enable_;
}

void DescribeReservedInstancesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeReservedInstancesRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeReservedInstancesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeReservedInstancesRequest::getScope()const
{
	return scope_;
}

void DescribeReservedInstancesRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", std::to_string(scope));
}

int DescribeReservedInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeReservedInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeReservedInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeReservedInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeReservedInstancesRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeReservedInstancesRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string DescribeReservedInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeReservedInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeReservedInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeReservedInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeReservedInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeReservedInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeReservedInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReservedInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeReservedInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReservedInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeReservedInstancesRequest::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

void DescribeReservedInstancesRequest::setInstanceTypeFamily(const std::string& instanceTypeFamily)
{
	instanceTypeFamily_ = instanceTypeFamily;
	setCoreParameter("InstanceTypeFamily", std::to_string(instanceTypeFamily));
}

std::string DescribeReservedInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeReservedInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeReservedInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReservedInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeReservedInstancesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeReservedInstancesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeReservedInstancesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeReservedInstancesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeReservedInstancesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeReservedInstancesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> DescribeReservedInstancesRequest::getReservedInstanceId()const
{
	return reservedInstanceId_;
}

void DescribeReservedInstancesRequest::setReservedInstanceId(const std::vector<std::string>& reservedInstanceId)
{
	reservedInstanceId_ = reservedInstanceId;
	for(int i = 0; i!= reservedInstanceId.size(); i++)
		setCoreParameter("ReservedInstanceId."+ std::to_string(i), std::to_string(reservedInstanceId.at(i)));
}

std::string DescribeReservedInstancesRequest::getOfferingType()const
{
	return offeringType_;
}

void DescribeReservedInstancesRequest::setOfferingType(const std::string& offeringType)
{
	offeringType_ = offeringType;
	setCoreParameter("OfferingType", std::to_string(offeringType));
}

std::string DescribeReservedInstancesRequest::getRequestId()const
{
	return requestId_;
}

void DescribeReservedInstancesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeReservedInstancesRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeReservedInstancesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string DescribeReservedInstancesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeReservedInstancesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string DescribeReservedInstancesRequest::getReservedInstanceName()const
{
	return reservedInstanceName_;
}

void DescribeReservedInstancesRequest::setReservedInstanceName(const std::string& reservedInstanceName)
{
	reservedInstanceName_ = reservedInstanceName;
	setCoreParameter("ReservedInstanceName", std::to_string(reservedInstanceName));
}

std::vector<std::string> DescribeReservedInstancesRequest::getStatus()const
{
	return status_;
}

void DescribeReservedInstancesRequest::setStatus(const std::vector<std::string>& status)
{
	status_ = status;
	for(int i = 0; i!= status.size(); i++)
		setCoreParameter("Status."+ std::to_string(i), std::to_string(status.at(i)));
}

