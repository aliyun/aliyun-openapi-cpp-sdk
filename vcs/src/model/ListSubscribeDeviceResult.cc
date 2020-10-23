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

#include <alibabacloud/vcs/model/ListSubscribeDeviceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListSubscribeDeviceResult::ListSubscribeDeviceResult() :
	ServiceResult()
{}

ListSubscribeDeviceResult::ListSubscribeDeviceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSubscribeDeviceResult::~ListSubscribeDeviceResult()
{}

void ListSubscribeDeviceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allSubscribeListNode = dataNode["SubscribeList"]["SubscribeListItem"];
	for (auto dataNodeSubscribeListSubscribeListItem : allSubscribeListNode)
	{
		Data::SubscribeListItem subscribeListItemObject;
		if(!dataNodeSubscribeListSubscribeListItem["UserId"].isNull())
			subscribeListItemObject.userId = dataNodeSubscribeListSubscribeListItem["UserId"].asString();
		if(!dataNodeSubscribeListSubscribeListItem["DeviceId"].isNull())
			subscribeListItemObject.deviceId = dataNodeSubscribeListSubscribeListItem["DeviceId"].asString();
		if(!dataNodeSubscribeListSubscribeListItem["PushConfig"].isNull())
			subscribeListItemObject.pushConfig = dataNodeSubscribeListSubscribeListItem["PushConfig"].asString();
		if(!dataNodeSubscribeListSubscribeListItem["CreateTime"].isNull())
			subscribeListItemObject.createTime = dataNodeSubscribeListSubscribeListItem["CreateTime"].asString();
		if(!dataNodeSubscribeListSubscribeListItem["UpdateTime"].isNull())
			subscribeListItemObject.updateTime = dataNodeSubscribeListSubscribeListItem["UpdateTime"].asString();
		data_.subscribeList.push_back(subscribeListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSubscribeDeviceResult::getMessage()const
{
	return message_;
}

ListSubscribeDeviceResult::Data ListSubscribeDeviceResult::getData()const
{
	return data_;
}

std::string ListSubscribeDeviceResult::getCode()const
{
	return code_;
}

