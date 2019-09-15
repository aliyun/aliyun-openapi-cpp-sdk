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

#include <alibabacloud/aegis/model/DescribeScreenCityMonitorDataRequest.h>

using AlibabaCloud::Aegis::Model::DescribeScreenCityMonitorDataRequest;

DescribeScreenCityMonitorDataRequest::DescribeScreenCityMonitorDataRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeScreenCityMonitorData")
{}

DescribeScreenCityMonitorDataRequest::~DescribeScreenCityMonitorDataRequest()
{}

std::string DescribeScreenCityMonitorDataRequest::getDateType()const
{
	return dateType_;
}

void DescribeScreenCityMonitorDataRequest::setDateType(const std::string& dateType)
{
	dateType_ = dateType;
	setCoreParameter("DateType", dateType);
}

int DescribeScreenCityMonitorDataRequest::getScreenId()const
{
	return screenId_;
}

void DescribeScreenCityMonitorDataRequest::setScreenId(int screenId)
{
	screenId_ = screenId;
	setCoreParameter("ScreenId", std::to_string(screenId));
}

std::string DescribeScreenCityMonitorDataRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeScreenCityMonitorDataRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

