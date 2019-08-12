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

#include <alibabacloud/cms/model/DescribeSiteMonitorISPAreaCityRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorISPAreaCityRequest;

DescribeSiteMonitorISPAreaCityRequest::DescribeSiteMonitorISPAreaCityRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DescribeSiteMonitorISPAreaCity")
{}

DescribeSiteMonitorISPAreaCityRequest::~DescribeSiteMonitorISPAreaCityRequest()
{}

std::string DescribeSiteMonitorISPAreaCityRequest::getCity()const
{
	return city_;
}

void DescribeSiteMonitorISPAreaCityRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

std::string DescribeSiteMonitorISPAreaCityRequest::getIsp()const
{
	return isp_;
}

void DescribeSiteMonitorISPAreaCityRequest::setIsp(const std::string& isp)
{
	isp_ = isp;
	setCoreParameter("Isp", std::to_string(isp));
}

