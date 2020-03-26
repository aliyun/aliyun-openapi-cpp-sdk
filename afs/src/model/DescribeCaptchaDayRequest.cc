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

#include <alibabacloud/afs/model/DescribeCaptchaDayRequest.h>

using AlibabaCloud::Afs::Model::DescribeCaptchaDayRequest;

DescribeCaptchaDayRequest::DescribeCaptchaDayRequest() :
	RpcServiceRequest("afs", "2018-01-12", "DescribeCaptchaDay")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCaptchaDayRequest::~DescribeCaptchaDayRequest()
{}

std::string DescribeCaptchaDayRequest::getType()const
{
	return type_;
}

void DescribeCaptchaDayRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeCaptchaDayRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCaptchaDayRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeCaptchaDayRequest::getConfigName()const
{
	return configName_;
}

void DescribeCaptchaDayRequest::setConfigName(const std::string& configName)
{
	configName_ = configName;
	setParameter("ConfigName", configName);
}

std::string DescribeCaptchaDayRequest::getRefExtId()const
{
	return refExtId_;
}

void DescribeCaptchaDayRequest::setRefExtId(const std::string& refExtId)
{
	refExtId_ = refExtId;
	setParameter("RefExtId", refExtId);
}

std::string DescribeCaptchaDayRequest::getTime()const
{
	return time_;
}

void DescribeCaptchaDayRequest::setTime(const std::string& time)
{
	time_ = time;
	setParameter("Time", time);
}

