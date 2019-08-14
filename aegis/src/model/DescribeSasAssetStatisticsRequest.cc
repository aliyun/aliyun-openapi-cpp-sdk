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

#include <alibabacloud/aegis/model/DescribeSasAssetStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeSasAssetStatisticsRequest;

DescribeSasAssetStatisticsRequest::DescribeSasAssetStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeSasAssetStatistics")
{}

DescribeSasAssetStatisticsRequest::~DescribeSasAssetStatisticsRequest()
{}

std::string DescribeSasAssetStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSasAssetStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeSasAssetStatisticsRequest::getStatisticsColumn()const
{
	return statisticsColumn_;
}

void DescribeSasAssetStatisticsRequest::setStatisticsColumn(const std::string& statisticsColumn)
{
	statisticsColumn_ = statisticsColumn;
	setCoreParameter("StatisticsColumn", statisticsColumn);
}

int DescribeSasAssetStatisticsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSasAssetStatisticsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSasAssetStatisticsRequest::getFrom()const
{
	return from_;
}

void DescribeSasAssetStatisticsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

int DescribeSasAssetStatisticsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeSasAssetStatisticsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeSasAssetStatisticsRequest::getUuids()const
{
	return uuids_;
}

void DescribeSasAssetStatisticsRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

