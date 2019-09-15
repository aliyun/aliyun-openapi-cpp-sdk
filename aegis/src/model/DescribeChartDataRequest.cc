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

#include <alibabacloud/aegis/model/DescribeChartDataRequest.h>

using AlibabaCloud::Aegis::Model::DescribeChartDataRequest;

DescribeChartDataRequest::DescribeChartDataRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeChartData")
{}

DescribeChartDataRequest::~DescribeChartDataRequest()
{}

long DescribeChartDataRequest::getTimeEnd()const
{
	return timeEnd_;
}

void DescribeChartDataRequest::setTimeEnd(long timeEnd)
{
	timeEnd_ = timeEnd;
	setCoreParameter("TimeEnd", std::to_string(timeEnd));
}

std::string DescribeChartDataRequest::getRangeUnit()const
{
	return rangeUnit_;
}

void DescribeChartDataRequest::setRangeUnit(const std::string& rangeUnit)
{
	rangeUnit_ = rangeUnit;
	setCoreParameter("RangeUnit", rangeUnit);
}

std::string DescribeChartDataRequest::getCharId()const
{
	return charId_;
}

void DescribeChartDataRequest::setCharId(const std::string& charId)
{
	charId_ = charId;
	setCoreParameter("CharId", charId);
}

std::string DescribeChartDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeChartDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeChartDataRequest::getLang()const
{
	return lang_;
}

void DescribeChartDataRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeChartDataRequest::getTimeStart()const
{
	return timeStart_;
}

void DescribeChartDataRequest::setTimeStart(long timeStart)
{
	timeStart_ = timeStart;
	setCoreParameter("TimeStart", std::to_string(timeStart));
}

