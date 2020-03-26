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

#include <alibabacloud/afs/model/DescribeCaptchaRiskRequest.h>

using AlibabaCloud::Afs::Model::DescribeCaptchaRiskRequest;

DescribeCaptchaRiskRequest::DescribeCaptchaRiskRequest() :
	RpcServiceRequest("afs", "2018-01-12", "DescribeCaptchaRisk")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCaptchaRiskRequest::~DescribeCaptchaRiskRequest()
{}

std::string DescribeCaptchaRiskRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCaptchaRiskRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeCaptchaRiskRequest::getConfigName()const
{
	return configName_;
}

void DescribeCaptchaRiskRequest::setConfigName(const std::string& configName)
{
	configName_ = configName;
	setParameter("ConfigName", configName);
}

std::string DescribeCaptchaRiskRequest::getRefExtId()const
{
	return refExtId_;
}

void DescribeCaptchaRiskRequest::setRefExtId(const std::string& refExtId)
{
	refExtId_ = refExtId;
	setParameter("RefExtId", refExtId);
}

std::string DescribeCaptchaRiskRequest::getTime()const
{
	return time_;
}

void DescribeCaptchaRiskRequest::setTime(const std::string& time)
{
	time_ = time;
	setParameter("Time", time);
}

