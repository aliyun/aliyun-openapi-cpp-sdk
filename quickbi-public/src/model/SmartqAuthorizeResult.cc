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

#include <alibabacloud/quickbi-public/model/SmartqAuthorizeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

SmartqAuthorizeResult::SmartqAuthorizeResult() :
	ServiceResult()
{}

SmartqAuthorizeResult::SmartqAuthorizeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SmartqAuthorizeResult::~SmartqAuthorizeResult()
{}

void SmartqAuthorizeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["UserId"].isNull())
			resultObject.userId = valueResultData["UserId"].asString();
		if(!valueResultData["LlmCube"].isNull())
			resultObject.llmCube = valueResultData["LlmCube"].asString();
		if(!valueResultData["LlmCubeTheme"].isNull())
			resultObject.llmCubeTheme = valueResultData["LlmCubeTheme"].asString();
		if(!valueResultData["DetailMessage"].isNull())
			resultObject.detailMessage = valueResultData["DetailMessage"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool SmartqAuthorizeResult::getSuccess()const
{
	return success_;
}

std::vector<SmartqAuthorizeResult::Data> SmartqAuthorizeResult::getResult()const
{
	return result_;
}

