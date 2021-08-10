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

#include <alibabacloud/dts/model/DescribeConsumerChannelRequest.h>

using AlibabaCloud::Dts::Model::DescribeConsumerChannelRequest;

DescribeConsumerChannelRequest::DescribeConsumerChannelRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeConsumerChannel")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeConsumerChannelRequest::~DescribeConsumerChannelRequest()
{}

int DescribeConsumerChannelRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeConsumerChannelRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeConsumerChannelRequest::getRegionId()const
{
	return regionId_;
}

void DescribeConsumerChannelRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeConsumerChannelRequest::getParentChannelId()const
{
	return parentChannelId_;
}

void DescribeConsumerChannelRequest::setParentChannelId(const std::string& parentChannelId)
{
	parentChannelId_ = parentChannelId;
	setParameter("ParentChannelId", parentChannelId);
}

int DescribeConsumerChannelRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeConsumerChannelRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeConsumerChannelRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void DescribeConsumerChannelRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

std::string DescribeConsumerChannelRequest::getDtsInstanceId()const
{
	return dtsInstanceId_;
}

void DescribeConsumerChannelRequest::setDtsInstanceId(const std::string& dtsInstanceId)
{
	dtsInstanceId_ = dtsInstanceId;
	setParameter("DtsInstanceId", dtsInstanceId);
}

