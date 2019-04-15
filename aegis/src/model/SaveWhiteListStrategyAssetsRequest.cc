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

#include <alibabacloud/aegis/model/SaveWhiteListStrategyAssetsRequest.h>

using AlibabaCloud::Aegis::Model::SaveWhiteListStrategyAssetsRequest;

SaveWhiteListStrategyAssetsRequest::SaveWhiteListStrategyAssetsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "SaveWhiteListStrategyAssets")
{}

SaveWhiteListStrategyAssetsRequest::~SaveWhiteListStrategyAssetsRequest()
{}

std::string SaveWhiteListStrategyAssetsRequest::getOperations()const
{
	return operations_;
}

void SaveWhiteListStrategyAssetsRequest::setOperations(const std::string& operations)
{
	operations_ = operations;
	setCoreParameter("Operations", operations);
}

int SaveWhiteListStrategyAssetsRequest::getRelationType()const
{
	return relationType_;
}

void SaveWhiteListStrategyAssetsRequest::setRelationType(int relationType)
{
	relationType_ = relationType;
	setCoreParameter("RelationType", std::to_string(relationType));
}

std::string SaveWhiteListStrategyAssetsRequest::getSourceIp()const
{
	return sourceIp_;
}

void SaveWhiteListStrategyAssetsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long SaveWhiteListStrategyAssetsRequest::getStrategyId()const
{
	return strategyId_;
}

void SaveWhiteListStrategyAssetsRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string SaveWhiteListStrategyAssetsRequest::getLang()const
{
	return lang_;
}

void SaveWhiteListStrategyAssetsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

