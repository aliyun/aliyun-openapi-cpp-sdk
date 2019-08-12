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

#include <alibabacloud/openanalytics/model/GetProductStatusRequest.h>

using AlibabaCloud::Openanalytics::Model::GetProductStatusRequest;

GetProductStatusRequest::GetProductStatusRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetProductStatus")
{}

GetProductStatusRequest::~GetProductStatusRequest()
{}

long GetProductStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetProductStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

long GetProductStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void GetProductStatusRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string GetProductStatusRequest::getCallerType()const
{
	return callerType_;
}

void GetProductStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool GetProductStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetProductStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

std::string GetProductStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetProductStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool GetProductStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetProductStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string GetProductStatusRequest::getRegionID()const
{
	return regionID_;
}

void GetProductStatusRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setCoreParameter("RegionID", regionID);
}

std::string GetProductStatusRequest::getRequestId()const
{
	return requestId_;
}

void GetProductStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long GetProductStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void GetProductStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string GetProductStatusRequest::getProductCode()const
{
	return productCode_;
}

void GetProductStatusRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string GetProductStatusRequest::getProductAccessKey()const
{
	return productAccessKey_;
}

void GetProductStatusRequest::setProductAccessKey(const std::string& productAccessKey)
{
	productAccessKey_ = productAccessKey;
	setCoreParameter("ProductAccessKey", productAccessKey);
}

std::string GetProductStatusRequest::getTargetUid()const
{
	return targetUid_;
}

void GetProductStatusRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setCoreParameter("TargetUid", targetUid);
}

std::string GetProductStatusRequest::getTargetArnRole()const
{
	return targetArnRole_;
}

void GetProductStatusRequest::setTargetArnRole(const std::string& targetArnRole)
{
	targetArnRole_ = targetArnRole;
	setCoreParameter("TargetArnRole", targetArnRole);
}

