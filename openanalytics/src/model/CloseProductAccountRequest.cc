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

#include <alibabacloud/openanalytics/model/CloseProductAccountRequest.h>

using AlibabaCloud::Openanalytics::Model::CloseProductAccountRequest;

CloseProductAccountRequest::CloseProductAccountRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "CloseProductAccount")
{}

CloseProductAccountRequest::~CloseProductAccountRequest()
{}

long CloseProductAccountRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CloseProductAccountRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

long CloseProductAccountRequest::getCallerBid()const
{
	return callerBid_;
}

void CloseProductAccountRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string CloseProductAccountRequest::getCallerType()const
{
	return callerType_;
}

void CloseProductAccountRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool CloseProductAccountRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CloseProductAccountRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string CloseProductAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloseProductAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool CloseProductAccountRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CloseProductAccountRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CloseProductAccountRequest::getRegionID()const
{
	return regionID_;
}

void CloseProductAccountRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setCoreParameter("RegionID", std::to_string(regionID));
}

std::string CloseProductAccountRequest::getRequestId()const
{
	return requestId_;
}

void CloseProductAccountRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long CloseProductAccountRequest::getCallerUid()const
{
	return callerUid_;
}

void CloseProductAccountRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CloseProductAccountRequest::getProductCode()const
{
	return productCode_;
}

void CloseProductAccountRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", std::to_string(productCode));
}

std::string CloseProductAccountRequest::getProductAccessKey()const
{
	return productAccessKey_;
}

void CloseProductAccountRequest::setProductAccessKey(const std::string& productAccessKey)
{
	productAccessKey_ = productAccessKey;
	setCoreParameter("ProductAccessKey", std::to_string(productAccessKey));
}

std::string CloseProductAccountRequest::getTargetUid()const
{
	return targetUid_;
}

void CloseProductAccountRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setCoreParameter("TargetUid", std::to_string(targetUid));
}

std::string CloseProductAccountRequest::getTargetArnRole()const
{
	return targetArnRole_;
}

void CloseProductAccountRequest::setTargetArnRole(const std::string& targetArnRole)
{
	targetArnRole_ = targetArnRole;
	setCoreParameter("TargetArnRole", std::to_string(targetArnRole));
}

