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

#include <alibabacloud/jarvis-public/model/DescribeAttackedIpRequest.h>

using AlibabaCloud::Jarvis_public::Model::DescribeAttackedIpRequest;

DescribeAttackedIpRequest::DescribeAttackedIpRequest() :
	RpcServiceRequest("jarvis-public", "2018-06-21", "DescribeAttackedIp")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAttackedIpRequest::~DescribeAttackedIpRequest()
{}

int DescribeAttackedIpRequest::getStartTime()const
{
	return startTime_;
}

void DescribeAttackedIpRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string DescribeAttackedIpRequest::getProductType()const
{
	return productType_;
}

void DescribeAttackedIpRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string DescribeAttackedIpRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAttackedIpRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeAttackedIpRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAttackedIpRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAttackedIpRequest::getLang()const
{
	return lang_;
}

void DescribeAttackedIpRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeAttackedIpRequest::getServerIpList()const
{
	return serverIpList_;
}

void DescribeAttackedIpRequest::setServerIpList(const std::string& serverIpList)
{
	serverIpList_ = serverIpList;
	setParameter("ServerIpList", serverIpList);
}

int DescribeAttackedIpRequest::getEndTime()const
{
	return endTime_;
}

void DescribeAttackedIpRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

int DescribeAttackedIpRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAttackedIpRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAttackedIpRequest::getRegion()const
{
	return region_;
}

void DescribeAttackedIpRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

