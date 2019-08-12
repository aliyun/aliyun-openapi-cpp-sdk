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

#include <alibabacloud/afs/model/DescribeCaptchaIpCityRequest.h>

using AlibabaCloud::Afs::Model::DescribeCaptchaIpCityRequest;

DescribeCaptchaIpCityRequest::DescribeCaptchaIpCityRequest() :
	RpcServiceRequest("afs", "2018-01-12", "DescribeCaptchaIpCity")
{}

DescribeCaptchaIpCityRequest::~DescribeCaptchaIpCityRequest()
{}

std::string DescribeCaptchaIpCityRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCaptchaIpCityRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCaptchaIpCityRequest::getConfigName()const
{
	return configName_;
}

void DescribeCaptchaIpCityRequest::setConfigName(const std::string& configName)
{
	configName_ = configName;
	setCoreParameter("ConfigName", configName);
}

std::string DescribeCaptchaIpCityRequest::getRefExtId()const
{
	return refExtId_;
}

void DescribeCaptchaIpCityRequest::setRefExtId(const std::string& refExtId)
{
	refExtId_ = refExtId;
	setCoreParameter("RefExtId", refExtId);
}

std::string DescribeCaptchaIpCityRequest::getTime()const
{
	return time_;
}

void DescribeCaptchaIpCityRequest::setTime(const std::string& time)
{
	time_ = time;
	setCoreParameter("Time", time);
}

std::string DescribeCaptchaIpCityRequest::getType()const
{
	return type_;
}

void DescribeCaptchaIpCityRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

