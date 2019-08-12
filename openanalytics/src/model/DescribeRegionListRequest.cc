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

#include <alibabacloud/openanalytics/model/DescribeRegionListRequest.h>

using AlibabaCloud::Openanalytics::Model::DescribeRegionListRequest;

DescribeRegionListRequest::DescribeRegionListRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "DescribeRegionList")
{}

DescribeRegionListRequest::~DescribeRegionListRequest()
{}

bool DescribeRegionListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRegionListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRegionListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRegionListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long DescribeRegionListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRegionListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

long DescribeRegionListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRegionListRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string DescribeRegionListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRegionListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeRegionListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRegionListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

long DescribeRegionListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRegionListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRegionListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRegionListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

