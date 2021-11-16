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

#include <alibabacloud/ddoscoo/model/DescribeDDoSEventsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDDoSEventsRequest;

DescribeDDoSEventsRequest::DescribeDDoSEventsRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeDDoSEvents")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDDoSEventsRequest::~DescribeDDoSEventsRequest()
{}

long DescribeDDoSEventsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDDoSEventsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeDDoSEventsRequest::getEip()const
{
	return eip_;
}

void DescribeDDoSEventsRequest::setEip(const std::string& eip)
{
	eip_ = eip;
	setParameter("Eip", eip);
}

std::string DescribeDDoSEventsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDDoSEventsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDDoSEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDDoSEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeDDoSEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDDoSEventsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

int DescribeDDoSEventsRequest::getOffset()const
{
	return offset_;
}

void DescribeDDoSEventsRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

long DescribeDDoSEventsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDDoSEventsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

