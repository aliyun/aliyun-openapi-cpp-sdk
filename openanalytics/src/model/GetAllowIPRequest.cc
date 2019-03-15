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

#include <alibabacloud/openanalytics/model/GetAllowIPRequest.h>

using AlibabaCloud::Openanalytics::Model::GetAllowIPRequest;

GetAllowIPRequest::GetAllowIPRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetAllowIP")
{}

GetAllowIPRequest::~GetAllowIPRequest()
{}

bool GetAllowIPRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetAllowIPRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string GetAllowIPRequest::getRegionID()const
{
	return regionID_;
}

void GetAllowIPRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string GetAllowIPRequest::getRequestId()const
{
	return requestId_;
}

void GetAllowIPRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long GetAllowIPRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetAllowIPRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

long GetAllowIPRequest::getCallerBid()const
{
	return callerBid_;
}

void GetAllowIPRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", std::to_string(callerBid));
}

std::string GetAllowIPRequest::getCallerType()const
{
	return callerType_;
}

void GetAllowIPRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool GetAllowIPRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetAllowIPRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

long GetAllowIPRequest::getCallerUid()const
{
	return callerUid_;
}

void GetAllowIPRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string GetAllowIPRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetAllowIPRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long GetAllowIPRequest::getUserID()const
{
	return userID_;
}

void GetAllowIPRequest::setUserID(long userID)
{
	userID_ = userID;
	setParameter("UserID", std::to_string(userID));
}

std::string GetAllowIPRequest::getNetworkType()const
{
	return networkType_;
}

void GetAllowIPRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

