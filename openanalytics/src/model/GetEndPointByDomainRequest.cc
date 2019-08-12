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

#include <alibabacloud/openanalytics/model/GetEndPointByDomainRequest.h>

using AlibabaCloud::Openanalytics::Model::GetEndPointByDomainRequest;

GetEndPointByDomainRequest::GetEndPointByDomainRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetEndPointByDomain")
{}

GetEndPointByDomainRequest::~GetEndPointByDomainRequest()
{}

bool GetEndPointByDomainRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetEndPointByDomainRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string GetEndPointByDomainRequest::getRegionID()const
{
	return regionID_;
}

void GetEndPointByDomainRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setCoreParameter("RegionID", regionID);
}

std::string GetEndPointByDomainRequest::getRequestId()const
{
	return requestId_;
}

void GetEndPointByDomainRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long GetEndPointByDomainRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetEndPointByDomainRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

long GetEndPointByDomainRequest::getCallerBid()const
{
	return callerBid_;
}

void GetEndPointByDomainRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string GetEndPointByDomainRequest::getCallerType()const
{
	return callerType_;
}

void GetEndPointByDomainRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool GetEndPointByDomainRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetEndPointByDomainRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

long GetEndPointByDomainRequest::getCallerUid()const
{
	return callerUid_;
}

void GetEndPointByDomainRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string GetEndPointByDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetEndPointByDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long GetEndPointByDomainRequest::getUserID()const
{
	return userID_;
}

void GetEndPointByDomainRequest::setUserID(long userID)
{
	userID_ = userID;
	setCoreParameter("UserID", userID);
}

std::string GetEndPointByDomainRequest::getDomainURL()const
{
	return domainURL_;
}

void GetEndPointByDomainRequest::setDomainURL(const std::string& domainURL)
{
	domainURL_ = domainURL;
	setCoreParameter("DomainURL", domainURL);
}

