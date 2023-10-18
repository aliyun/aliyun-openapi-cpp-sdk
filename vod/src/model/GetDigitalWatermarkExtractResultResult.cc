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

#include <alibabacloud/vod/model/GetDigitalWatermarkExtractResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetDigitalWatermarkExtractResultResult::GetDigitalWatermarkExtractResultResult() :
	ServiceResult()
{}

GetDigitalWatermarkExtractResultResult::GetDigitalWatermarkExtractResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDigitalWatermarkExtractResultResult::~GetDigitalWatermarkExtractResultResult()
{}

void GetDigitalWatermarkExtractResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAiExtractResultListNode = value["AiExtractResultList"]["AiExtractResult"];
	for (auto valueAiExtractResultListAiExtractResult : allAiExtractResultListNode)
	{
		AiExtractResult aiExtractResultListObject;
		if(!valueAiExtractResultListAiExtractResult["JobId"].isNull())
			aiExtractResultListObject.jobId = valueAiExtractResultListAiExtractResult["JobId"].asString();
		if(!valueAiExtractResultListAiExtractResult["CreateTime"].isNull())
			aiExtractResultListObject.createTime = valueAiExtractResultListAiExtractResult["CreateTime"].asString();
		if(!valueAiExtractResultListAiExtractResult["ModifyTime"].isNull())
			aiExtractResultListObject.modifyTime = valueAiExtractResultListAiExtractResult["ModifyTime"].asString();
		if(!valueAiExtractResultListAiExtractResult["Status"].isNull())
			aiExtractResultListObject.status = valueAiExtractResultListAiExtractResult["Status"].asString();
		if(!valueAiExtractResultListAiExtractResult["ErrorMessage"].isNull())
			aiExtractResultListObject.errorMessage = valueAiExtractResultListAiExtractResult["ErrorMessage"].asString();
		if(!valueAiExtractResultListAiExtractResult["WaterMarkText"].isNull())
			aiExtractResultListObject.waterMarkText = valueAiExtractResultListAiExtractResult["WaterMarkText"].asString();
		aiExtractResultList_.push_back(aiExtractResultListObject);
	}

}

std::vector<GetDigitalWatermarkExtractResultResult::AiExtractResult> GetDigitalWatermarkExtractResultResult::getAiExtractResultList()const
{
	return aiExtractResultList_;
}

