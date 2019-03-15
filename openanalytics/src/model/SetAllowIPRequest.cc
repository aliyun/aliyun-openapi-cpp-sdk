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

#include <alibabacloud/openanalytics/model/SetAllowIPRequest.h>

using AlibabaCloud::Openanalytics::Model::SetAllowIPRequest;

SetAllowIPRequest::SetAllowIPRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "SetAllowIP")
{}

SetAllowIPRequest::~SetAllowIPRequest()
{}

long SetAllowIPRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetAllowIPRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

long SetAllowIPRequest::getCallerBid()const
{
	return callerBid_;
}

void SetAllowIPRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", std::to_string(callerBid));
}

std::string SetAllowIPRequest::getCallerType()const
{
	return callerType_;
}

void SetAllowIPRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool SetAllowIPRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetAllowIPRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string SetAllowIPRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetAllowIPRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool SetAllowIPRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetAllowIPRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetAllowIPRequest::getRegionID()const
{
	return regionID_;
}

void SetAllowIPRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string SetAllowIPRequest::getRequestId()const
{
	return requestId_;
}

void SetAllowIPRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetAllowIPRequest::getCallerUid()const
{
	return callerUid_;
}

void SetAllowIPRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

long SetAllowIPRequest::getUserID()const
{
	return userID_;
}

void SetAllowIPRequest::setUserID(long userID)
{
	userID_ = userID;
	setParameter("UserID", std::to_string(userID));
}

std::string SetAllowIPRequest::getNetworkType()const
{
	return networkType_;
}

void SetAllowIPRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string SetAllowIPRequest::getAllowIP()const
{
	return allowIP_;
}

void SetAllowIPRequest::setAllowIP(const std::string& allowIP)
{
	allowIP_ = allowIP;
	setParameter("AllowIP", allowIP);
}

bool SetAllowIPRequest::getAppend()const
{
	return append_;
}

void SetAllowIPRequest::setAppend(bool append)
{
	append_ = append;
	setParameter("Append", std::to_string(append));
}

