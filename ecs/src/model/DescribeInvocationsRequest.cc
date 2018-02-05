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

#include <alibabacloud/ecs/model/DescribeInvocationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInvocationsRequest;

DescribeInvocationsRequest::DescribeInvocationsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInvocations")
{}

DescribeInvocationsRequest::~DescribeInvocationsRequest()
{}

long DescribeInvocationsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInvocationsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInvocationsRequest::getInvokeStatus()const
{
	return invokeStatus_;
}

void DescribeInvocationsRequest::setInvokeStatus(const std::string& invokeStatus)
{
	invokeStatus_ = invokeStatus;
	setParameter("InvokeStatus", invokeStatus);
}

long DescribeInvocationsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeInvocationsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeInvocationsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeInvocationsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeInvocationsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeInvocationsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeInvocationsRequest::getCommandId()const
{
	return commandId_;
}

void DescribeInvocationsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

std::string DescribeInvocationsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeInvocationsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeInvocationsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeInvocationsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

long DescribeInvocationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInvocationsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInvocationsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInvocationsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInvocationsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInvocationsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeInvocationsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInvocationsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeInvocationsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInvocationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeInvocationsRequest::getEnable()const
{
	return enable_;
}

void DescribeInvocationsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DescribeInvocationsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeInvocationsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeInvocationsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInvocationsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInvocationsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeInvocationsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeInvocationsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeInvocationsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeInvocationsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeInvocationsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeInvocationsRequest::getInvokeId()const
{
	return invokeId_;
}

void DescribeInvocationsRequest::setInvokeId(const std::string& invokeId)
{
	invokeId_ = invokeId;
	setParameter("InvokeId", invokeId);
}

std::string DescribeInvocationsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeInvocationsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

bool DescribeInvocationsRequest::getTimed()const
{
	return timed_;
}

void DescribeInvocationsRequest::setTimed(bool timed)
{
	timed_ = timed;
	setParameter("Timed", std::to_string(timed));
}

std::string DescribeInvocationsRequest::getCommandName()const
{
	return commandName_;
}

void DescribeInvocationsRequest::setCommandName(const std::string& commandName)
{
	commandName_ = commandName;
	setParameter("CommandName", commandName);
}

std::string DescribeInvocationsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInvocationsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInvocationsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInvocationsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeInvocationsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeInvocationsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeInvocationsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInvocationsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeInvocationsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeInvocationsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeInvocationsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeInvocationsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeInvocationsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeInvocationsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeInvocationsRequest::getCommandType()const
{
	return commandType_;
}

void DescribeInvocationsRequest::setCommandType(const std::string& commandType)
{
	commandType_ = commandType;
	setParameter("CommandType", commandType);
}

std::string DescribeInvocationsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInvocationsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeInvocationsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeInvocationsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

