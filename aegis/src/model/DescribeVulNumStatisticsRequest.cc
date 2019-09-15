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

#include <alibabacloud/aegis/model/DescribeVulNumStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulNumStatisticsRequest;

DescribeVulNumStatisticsRequest::DescribeVulNumStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulNumStatistics")
{}

DescribeVulNumStatisticsRequest::~DescribeVulNumStatisticsRequest()
{}

long DescribeVulNumStatisticsRequest::getStartTs()const
{
	return startTs_;
}

void DescribeVulNumStatisticsRequest::setStartTs(long startTs)
{
	startTs_ = startTs;
	setCoreParameter("StartTs", std::to_string(startTs));
}

long DescribeVulNumStatisticsRequest::getCreateTsStart()const
{
	return createTsStart_;
}

void DescribeVulNumStatisticsRequest::setCreateTsStart(long createTsStart)
{
	createTsStart_ = createTsStart;
	setCoreParameter("CreateTsStart", std::to_string(createTsStart));
}

std::string DescribeVulNumStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulNumStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeVulNumStatisticsRequest::getEndTs()const
{
	return endTs_;
}

void DescribeVulNumStatisticsRequest::setEndTs(long endTs)
{
	endTs_ = endTs;
	setCoreParameter("EndTs", std::to_string(endTs));
}

std::string DescribeVulNumStatisticsRequest::getFrom()const
{
	return from_;
}

void DescribeVulNumStatisticsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeVulNumStatisticsRequest::getIncludeApp()const
{
	return includeApp_;
}

void DescribeVulNumStatisticsRequest::setIncludeApp(const std::string& includeApp)
{
	includeApp_ = includeApp;
	setCoreParameter("IncludeApp", includeApp);
}

long DescribeVulNumStatisticsRequest::getCreateTsEnd()const
{
	return createTsEnd_;
}

void DescribeVulNumStatisticsRequest::setCreateTsEnd(long createTsEnd)
{
	createTsEnd_ = createTsEnd;
	setCoreParameter("CreateTsEnd", std::to_string(createTsEnd));
}

std::string DescribeVulNumStatisticsRequest::getUuids()const
{
	return uuids_;
}

void DescribeVulNumStatisticsRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

