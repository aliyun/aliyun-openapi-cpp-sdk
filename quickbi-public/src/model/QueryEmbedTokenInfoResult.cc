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

#include <alibabacloud/quickbi-public/model/QueryEmbedTokenInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryEmbedTokenInfoResult::QueryEmbedTokenInfoResult() :
	ServiceResult()
{}

QueryEmbedTokenInfoResult::QueryEmbedTokenInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEmbedTokenInfoResult::~QueryEmbedTokenInfoResult()
{}

void QueryEmbedTokenInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AccessToken"].isNull())
		result_.accessToken = resultNode["AccessToken"].asString();
	if(!resultNode["TokeType"].isNull())
		result_.tokeType = std::stol(resultNode["TokeType"].asString());
	if(!resultNode["InvalidTime"].isNull())
		result_.invalidTime = resultNode["InvalidTime"].asString();
	if(!resultNode["RegisterTime"].isNull())
		result_.registerTime = resultNode["RegisterTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryEmbedTokenInfoResult::getSuccess()const
{
	return success_;
}

QueryEmbedTokenInfoResult::Result QueryEmbedTokenInfoResult::getResult()const
{
	return result_;
}

