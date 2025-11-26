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

#include <alibabacloud/outboundbot/model/ListBeebotIntentUserSayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListBeebotIntentUserSayResult::ListBeebotIntentUserSayResult() :
	ServiceResult()
{}

ListBeebotIntentUserSayResult::ListBeebotIntentUserSayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBeebotIntentUserSayResult::~ListBeebotIntentUserSayResult()
{}

void ListBeebotIntentUserSayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserSaysNode = value["UserSays"]["userSay"];
	for (auto valueUserSaysuserSay : allUserSaysNode)
	{
		UserSay userSaysObject;
		if(!valueUserSaysuserSay["UserSayId"].isNull())
			userSaysObject.userSayId = valueUserSaysuserSay["UserSayId"].asString();
		if(!valueUserSaysuserSay["Content"].isNull())
			userSaysObject.content = valueUserSaysuserSay["Content"].asString();
		if(!valueUserSaysuserSay["CreateTime"].isNull())
			userSaysObject.createTime = valueUserSaysuserSay["CreateTime"].asString();
		if(!valueUserSaysuserSay["ModifyTime"].isNull())
			userSaysObject.modifyTime = valueUserSaysuserSay["ModifyTime"].asString();
		if(!valueUserSaysuserSay["IntentId"].isNull())
			userSaysObject.intentId = std::stol(valueUserSaysuserSay["IntentId"].asString());
		userSays_.push_back(userSaysObject);
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

std::string ListBeebotIntentUserSayResult::getBeebotRequestId()const
{
	return beebotRequestId_;
}

int ListBeebotIntentUserSayResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListBeebotIntentUserSayResult::UserSay> ListBeebotIntentUserSayResult::getUserSays()const
{
	return userSays_;
}

std::string ListBeebotIntentUserSayResult::getMessage()const
{
	return message_;
}

int ListBeebotIntentUserSayResult::getPageSize()const
{
	return pageSize_;
}

int ListBeebotIntentUserSayResult::getPageNumber()const
{
	return pageNumber_;
}

int ListBeebotIntentUserSayResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListBeebotIntentUserSayResult::getCode()const
{
	return code_;
}

bool ListBeebotIntentUserSayResult::getSuccess()const
{
	return success_;
}

