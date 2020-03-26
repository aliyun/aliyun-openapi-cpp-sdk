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

#include <alibabacloud/geoip/model/DescribeGeoipInstanceStatisticsRequest.h>

using AlibabaCloud::Geoip::Model::DescribeGeoipInstanceStatisticsRequest;

DescribeGeoipInstanceStatisticsRequest::DescribeGeoipInstanceStatisticsRequest() :
	RpcServiceRequest("geoip", "2020-01-01", "DescribeGeoipInstanceStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGeoipInstanceStatisticsRequest::~DescribeGeoipInstanceStatisticsRequest()
{}

std::string DescribeGeoipInstanceStatisticsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeGeoipInstanceStatisticsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeGeoipInstanceStatisticsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeGeoipInstanceStatisticsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeGeoipInstanceStatisticsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeGeoipInstanceStatisticsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeGeoipInstanceStatisticsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeGeoipInstanceStatisticsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeGeoipInstanceStatisticsRequest::getLang()const
{
	return lang_;
}

void DescribeGeoipInstanceStatisticsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

