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

#include <alibabacloud/ecs/model/DescribeInvocationResultsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInvocationResultsRequest;

DescribeInvocationResultsRequest::DescribeInvocationResultsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInvocationResults")
{}

DescribeInvocationResultsRequest::~DescribeInvocationResultsRequest()
{}

long DescribeInvocationResultsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInvocationResultsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeInvocationResultsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeInvocationResultsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeInvocationResultsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeInvocationResultsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeInvocationResultsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeInvocationResultsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeInvocationResultsRequest::getCommandId()const
{
	return commandId_;
}

void DescribeInvocationResultsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setCoreParameter("CommandId", commandId);
}

std::string DescribeInvocationResultsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeInvocationResultsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeInvocationResultsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeInvocationResultsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

long DescribeInvocationResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInvocationResultsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInvocationResultsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInvocationResultsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInvocationResultsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInvocationResultsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeInvocationResultsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInvocationResultsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeInvocationResultsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInvocationResultsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeInvocationResultsRequest::getEnable()const
{
	return enable_;
}

void DescribeInvocationResultsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeInvocationResultsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeInvocationResultsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeInvocationResultsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInvocationResultsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInvocationResultsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeInvocationResultsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeInvocationResultsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeInvocationResultsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeInvocationResultsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeInvocationResultsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeInvocationResultsRequest::getInvokeId()const
{
	return invokeId_;
}

void DescribeInvocationResultsRequest::setInvokeId(const std::string& invokeId)
{
	invokeId_ = invokeId;
	setCoreParameter("InvokeId", invokeId);
}

std::string DescribeInvocationResultsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeInvocationResultsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeInvocationResultsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInvocationResultsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInvocationResultsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInvocationResultsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInvocationResultsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeInvocationResultsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeInvocationResultsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInvocationResultsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeInvocationResultsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeInvocationResultsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeInvocationResultsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeInvocationResultsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeInvocationResultsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeInvocationResultsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeInvocationResultsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInvocationResultsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInvocationResultsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeInvocationResultsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeInvocationResultsRequest::getInvokeRecordStatus()const
{
	return invokeRecordStatus_;
}

void DescribeInvocationResultsRequest::setInvokeRecordStatus(const std::string& invokeRecordStatus)
{
	invokeRecordStatus_ = invokeRecordStatus;
	setCoreParameter("InvokeRecordStatus", invokeRecordStatus);
}

