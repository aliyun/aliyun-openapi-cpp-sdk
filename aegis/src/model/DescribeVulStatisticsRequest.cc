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

#include <alibabacloud/aegis/model/DescribeVulStatisticsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeVulStatisticsRequest;

DescribeVulStatisticsRequest::DescribeVulStatisticsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeVulStatistics")
{}

DescribeVulStatisticsRequest::~DescribeVulStatisticsRequest()
{}

std::string DescribeVulStatisticsRequest::getStartModifyTimePatch()const
{
	return startModifyTimePatch_;
}

void DescribeVulStatisticsRequest::setStartModifyTimePatch(const std::string& startModifyTimePatch)
{
	startModifyTimePatch_ = startModifyTimePatch;
	setCoreParameter("StartModifyTimePatch", startModifyTimePatch);
}

std::string DescribeVulStatisticsRequest::getDistribution()const
{
	return distribution_;
}

void DescribeVulStatisticsRequest::setDistribution(const std::string& distribution)
{
	distribution_ = distribution;
	setCoreParameter("Distribution", distribution);
}

std::string DescribeVulStatisticsRequest::getUuid()const
{
	return uuid_;
}

void DescribeVulStatisticsRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string DescribeVulStatisticsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeVulStatisticsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeVulStatisticsRequest::getEndFindTimePatch()const
{
	return endFindTimePatch_;
}

void DescribeVulStatisticsRequest::setEndFindTimePatch(const std::string& endFindTimePatch)
{
	endFindTimePatch_ = endFindTimePatch;
	setCoreParameter("EndFindTimePatch", endFindTimePatch);
}

std::string DescribeVulStatisticsRequest::getFrom()const
{
	return from_;
}

void DescribeVulStatisticsRequest::setFrom(const std::string& from)
{
	from_ = from;
	setCoreParameter("From", from);
}

std::string DescribeVulStatisticsRequest::getEndModifyTimePatch()const
{
	return endModifyTimePatch_;
}

void DescribeVulStatisticsRequest::setEndModifyTimePatch(const std::string& endModifyTimePatch)
{
	endModifyTimePatch_ = endModifyTimePatch;
	setCoreParameter("EndModifyTimePatch", endModifyTimePatch);
}

std::string DescribeVulStatisticsRequest::getRemarkPatch()const
{
	return remarkPatch_;
}

void DescribeVulStatisticsRequest::setRemarkPatch(const std::string& remarkPatch)
{
	remarkPatch_ = remarkPatch;
	setCoreParameter("RemarkPatch", remarkPatch);
}

std::string DescribeVulStatisticsRequest::getStartFindTimePatch()const
{
	return startFindTimePatch_;
}

void DescribeVulStatisticsRequest::setStartFindTimePatch(const std::string& startFindTimePatch)
{
	startFindTimePatch_ = startFindTimePatch;
	setCoreParameter("StartFindTimePatch", startFindTimePatch);
}

