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

#include <alibabacloud/aegis/model/DescribeWhiteListStrategyStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWhiteListStrategyStatisticsRequest;

DescribeWhiteListStrategyStatisticsRequest::DescribeWhiteListStrategyStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWhiteListStrategyStatistics")
{}

DescribeWhiteListStrategyStatisticsRequest::~DescribeWhiteListStrategyStatisticsRequest()
{}

std::string DescribeWhiteListStrategyStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhiteListStrategyStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeWhiteListStrategyStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWhiteListStrategyStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeWhiteListStrategyStatisticsRequest::getStrategyIds()const
{
	return strategyIds_;
}

void DescribeWhiteListStrategyStatisticsRequest::setStrategyIds(const std::string& strategyIds)
{
	strategyIds_ = strategyIds;
	setCoreParameter("StrategyIds", std::to_string(strategyIds));
}

int DescribeWhiteListStrategyStatisticsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWhiteListStrategyStatisticsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeWhiteListStrategyStatisticsRequest::getLang()const
{
	return lang_;
}

void DescribeWhiteListStrategyStatisticsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

