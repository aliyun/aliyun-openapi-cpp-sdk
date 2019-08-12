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

#include <alibabacloud/live/model/DescribeUpBpsPeakOfLineRequest.h>

using AlibabaCloud::Live::Model::DescribeUpBpsPeakOfLineRequest;

DescribeUpBpsPeakOfLineRequest::DescribeUpBpsPeakOfLineRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeUpBpsPeakOfLine")
{}

DescribeUpBpsPeakOfLineRequest::~DescribeUpBpsPeakOfLineRequest()
{}

std::string DescribeUpBpsPeakOfLineRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUpBpsPeakOfLineRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeUpBpsPeakOfLineRequest::getLine()const
{
	return line_;
}

void DescribeUpBpsPeakOfLineRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", std::to_string(line));
}

std::string DescribeUpBpsPeakOfLineRequest::getDomainName()const
{
	return domainName_;
}

void DescribeUpBpsPeakOfLineRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeUpBpsPeakOfLineRequest::getEndTime()const
{
	return endTime_;
}

void DescribeUpBpsPeakOfLineRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeUpBpsPeakOfLineRequest::getStartTime()const
{
	return startTime_;
}

void DescribeUpBpsPeakOfLineRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeUpBpsPeakOfLineRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUpBpsPeakOfLineRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeUpBpsPeakOfLineRequest::getDomainSwitch()const
{
	return domainSwitch_;
}

void DescribeUpBpsPeakOfLineRequest::setDomainSwitch(const std::string& domainSwitch)
{
	domainSwitch_ = domainSwitch;
	setCoreParameter("DomainSwitch", std::to_string(domainSwitch));
}

