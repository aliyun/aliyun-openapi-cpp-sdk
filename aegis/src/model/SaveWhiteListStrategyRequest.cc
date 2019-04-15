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

#include <alibabacloud/aegis/model/SaveWhiteListStrategyRequest.h>

using AlibabaCloud::Aegis::Model::SaveWhiteListStrategyRequest;

SaveWhiteListStrategyRequest::SaveWhiteListStrategyRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "SaveWhiteListStrategy")
{}

SaveWhiteListStrategyRequest::~SaveWhiteListStrategyRequest()
{}

std::string SaveWhiteListStrategyRequest::getStrategyName()const
{
	return strategyName_;
}

void SaveWhiteListStrategyRequest::setStrategyName(const std::string& strategyName)
{
	strategyName_ = strategyName;
	setCoreParameter("StrategyName", strategyName);
}

std::string SaveWhiteListStrategyRequest::getSourceIp()const
{
	return sourceIp_;
}

void SaveWhiteListStrategyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int SaveWhiteListStrategyRequest::getStudyTime()const
{
	return studyTime_;
}

void SaveWhiteListStrategyRequest::setStudyTime(int studyTime)
{
	studyTime_ = studyTime;
	setCoreParameter("StudyTime", std::to_string(studyTime));
}

long SaveWhiteListStrategyRequest::getStrategyId()const
{
	return strategyId_;
}

void SaveWhiteListStrategyRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string SaveWhiteListStrategyRequest::getLang()const
{
	return lang_;
}

void SaveWhiteListStrategyRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

