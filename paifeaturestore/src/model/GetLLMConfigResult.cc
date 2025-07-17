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

#include <alibabacloud/paifeaturestore/model/GetLLMConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetLLMConfigResult::GetLLMConfigResult() :
	ServiceResult()
{}

GetLLMConfigResult::GetLLMConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLLMConfigResult::~GetLLMConfigResult()
{}

void GetLLMConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["LLMConfigId"].isNull())
		lLMConfigId_ = value["LLMConfigId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["ApiKey"].isNull())
		apiKey_ = value["ApiKey"].asString();
	if(!value["Model"].isNull())
		model_ = value["Model"].asString();
	if(!value["BaseUrl"].isNull())
		baseUrl_ = value["BaseUrl"].asString();
	if(!value["Rps"].isNull())
		rps_ = std::stoi(value["Rps"].asString());
	if(!value["MaxTokens"].isNull())
		maxTokens_ = std::stoi(value["MaxTokens"].asString());
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();
	if(!value["BatchSize"].isNull())
		batchSize_ = std::stoi(value["BatchSize"].asString());
	if(!value["WorkspaceId"].isNull())
		workspaceId_ = value["WorkspaceId"].asString();

}

int GetLLMConfigResult::getBatchSize()const
{
	return batchSize_;
}

std::string GetLLMConfigResult::getApiKey()const
{
	return apiKey_;
}

std::string GetLLMConfigResult::getLLMConfigId()const
{
	return lLMConfigId_;
}

int GetLLMConfigResult::getRps()const
{
	return rps_;
}

int GetLLMConfigResult::getMaxTokens()const
{
	return maxTokens_;
}

std::string GetLLMConfigResult::getModel()const
{
	return model_;
}

std::string GetLLMConfigResult::getWorkspaceId()const
{
	return workspaceId_;
}

std::string GetLLMConfigResult::getBaseUrl()const
{
	return baseUrl_;
}

std::string GetLLMConfigResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetLLMConfigResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetLLMConfigResult::getName()const
{
	return name_;
}

