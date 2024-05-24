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

#include <alibabacloud/live/model/BatchGetOnlineUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

BatchGetOnlineUsersResult::BatchGetOnlineUsersResult() :
	ServiceResult()
{}

BatchGetOnlineUsersResult::BatchGetOnlineUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetOnlineUsersResult::~BatchGetOnlineUsersResult()
{}

void BatchGetOnlineUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allOnlineUsersNode = resultNode["OnlineUsers"]["onlineUsersItem"];
	for (auto resultNodeOnlineUsersonlineUsersItem : allOnlineUsersNode)
	{
		Result::OnlineUsersItem onlineUsersItemObject;
		if(!resultNodeOnlineUsersonlineUsersItem["JoinTime"].isNull())
			onlineUsersItemObject.joinTime = std::stol(resultNodeOnlineUsersonlineUsersItem["JoinTime"].asString());
		if(!resultNodeOnlineUsersonlineUsersItem["Online"].isNull())
			onlineUsersItemObject.online = resultNodeOnlineUsersonlineUsersItem["Online"].asString() == "true";
		if(!resultNodeOnlineUsersonlineUsersItem["UserId"].isNull())
			onlineUsersItemObject.userId = resultNodeOnlineUsersonlineUsersItem["UserId"].asString();
		result_.onlineUsers.push_back(onlineUsersItemObject);
	}

}

BatchGetOnlineUsersResult::Result BatchGetOnlineUsersResult::getResult()const
{
	return result_;
}

