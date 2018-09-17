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

#include <alibabacloud/live/model/DescribeRoomListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeRoomListResult::DescribeRoomListResult() :
	ServiceResult()
{}

DescribeRoomListResult::DescribeRoomListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRoomListResult::~DescribeRoomListResult()
{}

void DescribeRoomListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRoomList = value["RoomList"]["Room"];
	for (auto value : allRoomList)
	{
		Room roomListObject;
		if(!value["RoomId"].isNull())
			roomListObject.roomId = value["RoomId"].asString();
		if(!value["AnchorId"].isNull())
			roomListObject.anchorId = value["AnchorId"].asString();
		if(!value["RoomStatus"].isNull())
			roomListObject.roomStatus = std::stoi(value["RoomStatus"].asString());
		if(!value["CreateTime"].isNull())
			roomListObject.createTime = value["CreateTime"].asString();
		roomList_.push_back(roomListObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeRoomListResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeRoomListResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeRoomListResult::Room> DescribeRoomListResult::getRoomList()const
{
	return roomList_;
}

