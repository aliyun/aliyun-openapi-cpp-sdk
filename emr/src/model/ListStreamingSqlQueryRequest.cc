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

#include <alibabacloud/emr/model/ListStreamingSqlQueryRequest.h>

using AlibabaCloud::Emr::Model::ListStreamingSqlQueryRequest;

ListStreamingSqlQueryRequest::ListStreamingSqlQueryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListStreamingSqlQuery")
{}

ListStreamingSqlQueryRequest::~ListStreamingSqlQueryRequest()
{}

std::string ListStreamingSqlQueryRequest::getApp_ip()const
{
	return app_ip_;
}

void ListStreamingSqlQueryRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long ListStreamingSqlQueryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListStreamingSqlQueryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ListStreamingSqlQueryRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListStreamingSqlQueryRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ListStreamingSqlQueryRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListStreamingSqlQueryRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ListStreamingSqlQueryRequest::getCallerBid()const
{
	return callerBid_;
}

void ListStreamingSqlQueryRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string ListStreamingSqlQueryRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListStreamingSqlQueryRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool ListStreamingSqlQueryRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListStreamingSqlQueryRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ListStreamingSqlQueryRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListStreamingSqlQueryRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string ListStreamingSqlQueryRequest::getCallerType()const
{
	return callerType_;
}

void ListStreamingSqlQueryRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ListStreamingSqlQueryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListStreamingSqlQueryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ListStreamingSqlQueryRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListStreamingSqlQueryRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ListStreamingSqlQueryRequest::getInstanceId()const
{
	return instanceId_;
}

void ListStreamingSqlQueryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListStreamingSqlQueryRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListStreamingSqlQueryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListStreamingSqlQueryRequest::getRegionId()const
{
	return regionId_;
}

void ListStreamingSqlQueryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListStreamingSqlQueryRequest::getRequestId()const
{
	return requestId_;
}

void ListStreamingSqlQueryRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long ListStreamingSqlQueryRequest::getCallerUid()const
{
	return callerUid_;
}

void ListStreamingSqlQueryRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

