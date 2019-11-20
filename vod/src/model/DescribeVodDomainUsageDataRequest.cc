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

#include <alibabacloud/vod/model/DescribeVodDomainUsageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainUsageDataRequest;

DescribeVodDomainUsageDataRequest::DescribeVodDomainUsageDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainUsageData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVodDomainUsageDataRequest::~DescribeVodDomainUsageDataRequest()
{}

std::string DescribeVodDomainUsageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodDomainUsageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeVodDomainUsageDataRequest::getType()const
{
	return type_;
}

void DescribeVodDomainUsageDataRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeVodDomainUsageDataRequest::getArea()const
{
	return area_;
}

void DescribeVodDomainUsageDataRequest::setArea(const std::string& area)
{
	area_ = area;
	setCoreParameter("Area", area);
}

std::string DescribeVodDomainUsageDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainUsageDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeVodDomainUsageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodDomainUsageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeVodDomainUsageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainUsageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodDomainUsageDataRequest::getField()const
{
	return field_;
}

void DescribeVodDomainUsageDataRequest::setField(const std::string& field)
{
	field_ = field;
	setCoreParameter("Field", field);
}

