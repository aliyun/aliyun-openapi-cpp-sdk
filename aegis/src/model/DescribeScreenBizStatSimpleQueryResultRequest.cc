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

#include <alibabacloud/aegis/model/DescribeScreenBizStatSimpleQueryResultRequest.h>

using AlibabaCloud::Aegis::Model::DescribeScreenBizStatSimpleQueryResultRequest;

DescribeScreenBizStatSimpleQueryResultRequest::DescribeScreenBizStatSimpleQueryResultRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeScreenBizStatSimpleQueryResult")
{}

DescribeScreenBizStatSimpleQueryResultRequest::~DescribeScreenBizStatSimpleQueryResultRequest()
{}

std::string DescribeScreenBizStatSimpleQueryResultRequest::getRangeUnit()const
{
	return rangeUnit_;
}

void DescribeScreenBizStatSimpleQueryResultRequest::setRangeUnit(const std::string& rangeUnit)
{
	rangeUnit_ = rangeUnit;
	setCoreParameter("RangeUnit", rangeUnit);
}

long DescribeScreenBizStatSimpleQueryResultRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScreenBizStatSimpleQueryResultRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

long DescribeScreenBizStatSimpleQueryResultRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScreenBizStatSimpleQueryResultRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeScreenBizStatSimpleQueryResultRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeScreenBizStatSimpleQueryResultRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeScreenBizStatSimpleQueryResultRequest::getCustomQuery()const
{
	return customQuery_;
}

void DescribeScreenBizStatSimpleQueryResultRequest::setCustomQuery(const std::string& customQuery)
{
	customQuery_ = customQuery;
	setCoreParameter("CustomQuery", customQuery);
}

int DescribeScreenBizStatSimpleQueryResultRequest::getRangeValue()const
{
	return rangeValue_;
}

void DescribeScreenBizStatSimpleQueryResultRequest::setRangeValue(int rangeValue)
{
	rangeValue_ = rangeValue;
	setCoreParameter("RangeValue", std::to_string(rangeValue));
}

