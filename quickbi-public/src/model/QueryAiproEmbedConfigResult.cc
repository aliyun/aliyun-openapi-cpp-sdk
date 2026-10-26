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

#include <alibabacloud/quickbi-public/model/QueryAiproEmbedConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryAiproEmbedConfigResult::QueryAiproEmbedConfigResult() :
	ServiceResult()
{}

QueryAiproEmbedConfigResult::QueryAiproEmbedConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAiproEmbedConfigResult::~QueryAiproEmbedConfigResult()
{}

void QueryAiproEmbedConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["Status"].isNull())
			resultObject.status = std::stoi(valueResultData["Status"].asString());
		if(!valueResultData["ChatHistoryStatus"].isNull())
			resultObject.chatHistoryStatus = std::stoi(valueResultData["ChatHistoryStatus"].asString());
		if(!valueResultData["NextToken"].isNull())
			resultObject.nextToken = valueResultData["NextToken"].asString();
		if(!valueResultData["Config"].isNull())
			resultObject.config = valueResultData["Config"].asString();
		if(!valueResultData["MemoryEnabled"].isNull())
			resultObject.memoryEnabled = std::stoi(valueResultData["MemoryEnabled"].asString());
		if(!valueResultData["MaxResults"].isNull())
			resultObject.maxResults = std::stoi(valueResultData["MaxResults"].asString());
		if(!valueResultData["UploadEnabled"].isNull())
			resultObject.uploadEnabled = std::stoi(valueResultData["UploadEnabled"].asString());
		if(!valueResultData["AgentName"].isNull())
			resultObject.agentName = valueResultData["AgentName"].asString();
		if(!valueResultData["ShowName"].isNull())
			resultObject.showName = valueResultData["ShowName"].asString();
		if(!valueResultData["AiProId"].isNull())
			resultObject.aiProId = valueResultData["AiProId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryAiproEmbedConfigResult::getSuccess()const
{
	return success_;
}

std::vector<QueryAiproEmbedConfigResult::Data> QueryAiproEmbedConfigResult::getResult()const
{
	return result_;
}

