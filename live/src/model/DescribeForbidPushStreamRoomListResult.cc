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

#include <alibabacloud/live/model/DescribeForbidPushStreamRoomListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeForbidPushStreamRoomListResult::DescribeForbidPushStreamRoomListResult() :
	ServiceResult()
{}

DescribeForbidPushStreamRoomListResult::DescribeForbidPushStreamRoomListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeForbidPushStreamRoomListResult::~DescribeForbidPushStreamRoomListResult()
{}

void DescribeForbidPushStreamRoomListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRoomList = value["RoomList"]["Room"];
	for (auto value : allRoomList)
	{
		Room roomListObject;
		if(!value["RoomId"].isNull())
			roomListObject.roomId = value["RoomId"].asString();
		if(!value["AnchorId"].isNull())
			roomListObject.anchorId = value["AnchorId"].asString();
		if(!value["OpStartTime"].isNull())
			roomListObject.opStartTime = value["OpStartTime"].asString();
		if(!value["OpEndTime"].isNull())
			roomListObject.opEndTime = value["OpEndTime"].asString();
		roomList_.push_back(roomListObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeForbidPushStreamRoomListResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeForbidPushStreamRoomListResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeForbidPushStreamRoomListResult::Room> DescribeForbidPushStreamRoomListResult::getRoomList()const
{
	return roomList_;
}

