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

#include <alibabacloud/ecd/model/DescribeDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeDevicesResult::DescribeDevicesResult() :
	ServiceResult()
{}

DescribeDevicesResult::DescribeDevicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDevicesResult::~DescribeDevicesResult()
{}

void DescribeDevicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDevicesNode = value["Devices"]["DevicesItem"];
	for (auto valueDevicesDevicesItem : allDevicesNode)
	{
		DevicesItem devicesObject;
		if(!valueDevicesDevicesItem["DeviceId"].isNull())
			devicesObject.deviceId = valueDevicesDevicesItem["DeviceId"].asString();
		auto allEndUserListNode = valueDevicesDevicesItem["EndUserList"]["EndUserListItem"];
		for (auto valueDevicesDevicesItemEndUserListEndUserListItem : allEndUserListNode)
		{
			DevicesItem::EndUserListItem endUserListObject;
			if(!valueDevicesDevicesItemEndUserListEndUserListItem["EndUserId"].isNull())
				endUserListObject.endUserId = valueDevicesDevicesItemEndUserListEndUserListItem["EndUserId"].asString();
			if(!valueDevicesDevicesItemEndUserListEndUserListItem["UserType"].isNull())
				endUserListObject.userType = valueDevicesDevicesItemEndUserListEndUserListItem["UserType"].asString();
			if(!valueDevicesDevicesItemEndUserListEndUserListItem["DirectoryId"].isNull())
				endUserListObject.directoryId = valueDevicesDevicesItemEndUserListEndUserListItem["DirectoryId"].asString();
			if(!valueDevicesDevicesItemEndUserListEndUserListItem["AdDomain"].isNull())
				endUserListObject.adDomain = valueDevicesDevicesItemEndUserListEndUserListItem["AdDomain"].asString();
			devicesObject.endUserList.push_back(endUserListObject);
		}
		devices_.push_back(devicesObject);
	}

}

std::vector<DescribeDevicesResult::DevicesItem> DescribeDevicesResult::getDevices()const
{
	return devices_;
}

