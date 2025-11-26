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

#include <alibabacloud/outboundbot/model/ListBeebotIntentLgfResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListBeebotIntentLgfResult::ListBeebotIntentLgfResult() :
	ServiceResult()
{}

ListBeebotIntentLgfResult::ListBeebotIntentLgfResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBeebotIntentLgfResult::~ListBeebotIntentLgfResult()
{}

void ListBeebotIntentLgfResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLgfsNode = value["Lgfs"]["lgf"];
	for (auto valueLgfslgf : allLgfsNode)
	{
		Lgf lgfsObject;
		if(!valueLgfslgf["LgfId"].isNull())
			lgfsObject.lgfId = std::stol(valueLgfslgf["LgfId"].asString());
		if(!valueLgfslgf["CreateTime"].isNull())
			lgfsObject.createTime = valueLgfslgf["CreateTime"].asString();
		if(!valueLgfslgf["ModifyTime"].isNull())
			lgfsObject.modifyTime = valueLgfslgf["ModifyTime"].asString();
		if(!valueLgfslgf["RuleText"].isNull())
			lgfsObject.ruleText = valueLgfslgf["RuleText"].asString();
		if(!valueLgfslgf["IntentId"].isNull())
			lgfsObject.intentId = std::stol(valueLgfslgf["IntentId"].asString());
		lgfs_.push_back(lgfsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["BeebotRequestId"].isNull())
		beebotRequestId_ = value["BeebotRequestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::string ListBeebotIntentLgfResult::getBeebotRequestId()const
{
	return beebotRequestId_;
}

int ListBeebotIntentLgfResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBeebotIntentLgfResult::getMessage()const
{
	return message_;
}

int ListBeebotIntentLgfResult::getPageSize()const
{
	return pageSize_;
}

int ListBeebotIntentLgfResult::getPageNumber()const
{
	return pageNumber_;
}

int ListBeebotIntentLgfResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListBeebotIntentLgfResult::Lgf> ListBeebotIntentLgfResult::getLgfs()const
{
	return lgfs_;
}

std::string ListBeebotIntentLgfResult::getCode()const
{
	return code_;
}

bool ListBeebotIntentLgfResult::getSuccess()const
{
	return success_;
}

