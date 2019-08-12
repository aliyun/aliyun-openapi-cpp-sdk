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

#include <alibabacloud/jarvis-public/model/DescribeCountAttackEventRequest.h>

using AlibabaCloud::Jarvis_public::Model::DescribeCountAttackEventRequest;

DescribeCountAttackEventRequest::DescribeCountAttackEventRequest() :
	RpcServiceRequest("jarvis-public", "2018-06-21", "DescribeCountAttackEvent")
{}

DescribeCountAttackEventRequest::~DescribeCountAttackEventRequest()
{}

std::string DescribeCountAttackEventRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCountAttackEventRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeCountAttackEventRequest::getServerIpList()const
{
	return serverIpList_;
}

void DescribeCountAttackEventRequest::setServerIpList(const std::string& serverIpList)
{
	serverIpList_ = serverIpList;
	setCoreParameter("ServerIpList", std::to_string(serverIpList));
}

int DescribeCountAttackEventRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCountAttackEventRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeCountAttackEventRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCountAttackEventRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

int DescribeCountAttackEventRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCountAttackEventRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

int DescribeCountAttackEventRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCountAttackEventRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeCountAttackEventRequest::getLang()const
{
	return lang_;
}

void DescribeCountAttackEventRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeCountAttackEventRequest::getRegion()const
{
	return region_;
}

void DescribeCountAttackEventRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}

std::string DescribeCountAttackEventRequest::getProductType()const
{
	return productType_;
}

void DescribeCountAttackEventRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", std::to_string(productType));
}

