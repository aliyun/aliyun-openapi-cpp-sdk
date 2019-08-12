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

#include <alibabacloud/aegis/model/DescribeBizStatSimpleQueryResultRequest.h>

using AlibabaCloud::Aegis::Model::DescribeBizStatSimpleQueryResultRequest;

DescribeBizStatSimpleQueryResultRequest::DescribeBizStatSimpleQueryResultRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeBizStatSimpleQueryResult")
{}

DescribeBizStatSimpleQueryResultRequest::~DescribeBizStatSimpleQueryResultRequest()
{}

std::string DescribeBizStatSimpleQueryResultRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeBizStatSimpleQueryResultRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeBizStatSimpleQueryResultRequest::getEndTime()const
{
	return endTime_;
}

void DescribeBizStatSimpleQueryResultRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeBizStatSimpleQueryResultRequest::getStartTime()const
{
	return startTime_;
}

void DescribeBizStatSimpleQueryResultRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeBizStatSimpleQueryResultRequest::getCustomTimeRange()const
{
	return customTimeRange_;
}

void DescribeBizStatSimpleQueryResultRequest::setCustomTimeRange(int customTimeRange)
{
	customTimeRange_ = customTimeRange;
	setCoreParameter("CustomTimeRange", std::to_string(customTimeRange));
}

std::string DescribeBizStatSimpleQueryResultRequest::getCustomQuery()const
{
	return customQuery_;
}

void DescribeBizStatSimpleQueryResultRequest::setCustomQuery(const std::string& customQuery)
{
	customQuery_ = customQuery;
	setCoreParameter("CustomQuery", customQuery);
}

