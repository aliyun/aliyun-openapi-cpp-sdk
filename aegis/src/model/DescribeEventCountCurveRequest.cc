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

#include <alibabacloud/aegis/model/DescribeEventCountCurveRequest.h>

using AlibabaCloud::Aegis::Model::DescribeEventCountCurveRequest;

DescribeEventCountCurveRequest::DescribeEventCountCurveRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeEventCountCurve")
{}

DescribeEventCountCurveRequest::~DescribeEventCountCurveRequest()
{}

std::string DescribeEventCountCurveRequest::getTypes()const
{
	return types_;
}

void DescribeEventCountCurveRequest::setTypes(const std::string& types)
{
	types_ = types;
	setCoreParameter("Types", types);
}

int DescribeEventCountCurveRequest::getLastDays()const
{
	return lastDays_;
}

void DescribeEventCountCurveRequest::setLastDays(int lastDays)
{
	lastDays_ = lastDays;
	setCoreParameter("LastDays", std::to_string(lastDays));
}

std::string DescribeEventCountCurveRequest::getHealthEventLevels()const
{
	return healthEventLevels_;
}

void DescribeEventCountCurveRequest::setHealthEventLevels(const std::string& healthEventLevels)
{
	healthEventLevels_ = healthEventLevels;
	setCoreParameter("HealthEventLevels", healthEventLevels);
}

std::string DescribeEventCountCurveRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventCountCurveRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeEventCountCurveRequest::getVulEventLevels()const
{
	return vulEventLevels_;
}

void DescribeEventCountCurveRequest::setVulEventLevels(const std::string& vulEventLevels)
{
	vulEventLevels_ = vulEventLevels;
	setCoreParameter("VulEventLevels", vulEventLevels);
}

std::string DescribeEventCountCurveRequest::getSuspiciousEventLevels()const
{
	return suspiciousEventLevels_;
}

void DescribeEventCountCurveRequest::setSuspiciousEventLevels(const std::string& suspiciousEventLevels)
{
	suspiciousEventLevels_ = suspiciousEventLevels;
	setCoreParameter("SuspiciousEventLevels", suspiciousEventLevels);
}

