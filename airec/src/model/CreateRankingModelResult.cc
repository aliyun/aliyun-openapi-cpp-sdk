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

#include <alibabacloud/airec/model/CreateRankingModelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

CreateRankingModelResult::CreateRankingModelResult() :
	ServiceResult()
{}

CreateRankingModelResult::CreateRankingModelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRankingModelResult::~CreateRankingModelResult()
{}

void CreateRankingModelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["rankingModelId"].isNull())
		result_.rankingModelId = resultNode["rankingModelId"].asString();
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = resultNode["gmtModified"].asString();
	if(!resultNode["meta"].isNull())
		result_.meta = resultNode["meta"].asString();
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = resultNode["gmtCreate"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::string CreateRankingModelResult::getRequestId()const
{
	return requestId_;
}

std::string CreateRankingModelResult::getMessage()const
{
	return message_;
}

std::string CreateRankingModelResult::getCode()const
{
	return code_;
}

CreateRankingModelResult::Result CreateRankingModelResult::getResult()const
{
	return result_;
}

