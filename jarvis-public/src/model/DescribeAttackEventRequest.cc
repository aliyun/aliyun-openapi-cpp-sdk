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

#include <alibabacloud/jarvis-public/model/DescribeAttackEventRequest.h>

using AlibabaCloud::Jarvis_public::Model::DescribeAttackEventRequest;

DescribeAttackEventRequest::DescribeAttackEventRequest() :
	RpcServiceRequest("jarvis-public", "2018-06-21", "DescribeAttackEvent")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAttackEventRequest::~DescribeAttackEventRequest()
{}

int DescribeAttackEventRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAttackEventRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeAttackEventRequest::getProductType()const
{
	return productType_;
}

void DescribeAttackEventRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string DescribeAttackEventRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAttackEventRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeAttackEventRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAttackEventRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAttackEventRequest::getLang()const
{
	return lang_;
}

void DescribeAttackEventRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeAttackEventRequest::getServerIpList()const
{
	return serverIpList_;
}

void DescribeAttackEventRequest::setServerIpList(const std::string& serverIpList)
{
	serverIpList_ = serverIpList;
	setParameter("ServerIpList", serverIpList);
}

int DescribeAttackEventRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAttackEventRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int DescribeAttackEventRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAttackEventRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAttackEventRequest::getRegion()const
{
	return region_;
}

void DescribeAttackEventRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

