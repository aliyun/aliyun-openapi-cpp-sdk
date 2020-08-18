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

#include <alibabacloud/onsmqtt/model/BatchQuerySessionByClientIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OnsMqtt;
using namespace AlibabaCloud::OnsMqtt::Model;

BatchQuerySessionByClientIdsResult::BatchQuerySessionByClientIdsResult() :
	ServiceResult()
{}

BatchQuerySessionByClientIdsResult::BatchQuerySessionByClientIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchQuerySessionByClientIdsResult::~BatchQuerySessionByClientIdsResult()
{}

void BatchQuerySessionByClientIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnlineStatusListNode = value["OnlineStatusList"]["OnlineStatusListItem"];
	for (auto valueOnlineStatusListOnlineStatusListItem : allOnlineStatusListNode)
	{
		OnlineStatusListItem onlineStatusListObject;
		if(!valueOnlineStatusListOnlineStatusListItem["ClientId"].isNull())
			onlineStatusListObject.clientId = valueOnlineStatusListOnlineStatusListItem["ClientId"].asString();
		if(!valueOnlineStatusListOnlineStatusListItem["OnlineStatus"].isNull())
			onlineStatusListObject.onlineStatus = valueOnlineStatusListOnlineStatusListItem["OnlineStatus"].asString() == "true";
		onlineStatusList_.push_back(onlineStatusListObject);
	}

}

std::vector<BatchQuerySessionByClientIdsResult::OnlineStatusListItem> BatchQuerySessionByClientIdsResult::getOnlineStatusList()const
{
	return onlineStatusList_;
}

