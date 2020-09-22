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

#include <alibabacloud/vs/model/DescribeDevicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

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
	auto allDevicesNode = value["Devices"]["Device"];
	for (auto valueDevicesDevice : allDevicesNode)
	{
		Device devicesObject;
		if(!valueDevicesDevice["Id"].isNull())
			devicesObject.id = valueDevicesDevice["Id"].asString();
		if(!valueDevicesDevice["Name"].isNull())
			devicesObject.name = valueDevicesDevice["Name"].asString();
		if(!valueDevicesDevice["Description"].isNull())
			devicesObject.description = valueDevicesDevice["Description"].asString();
		if(!valueDevicesDevice["GroupId"].isNull())
			devicesObject.groupId = valueDevicesDevice["GroupId"].asString();
		if(!valueDevicesDevice["ParentId"].isNull())
			devicesObject.parentId = valueDevicesDevice["ParentId"].asString();
		if(!valueDevicesDevice["DirectoryId"].isNull())
			devicesObject.directoryId = valueDevicesDevice["DirectoryId"].asString();
		if(!valueDevicesDevice["Type"].isNull())
			devicesObject.type = valueDevicesDevice["Type"].asString();
		if(!valueDevicesDevice["AutoStart"].isNull())
			devicesObject.autoStart = valueDevicesDevice["AutoStart"].asString() == "true";
		if(!valueDevicesDevice["Enabled"].isNull())
			devicesObject.enabled = valueDevicesDevice["Enabled"].asString() == "true";
		if(!valueDevicesDevice["Protocol"].isNull())
			devicesObject.protocol = valueDevicesDevice["Protocol"].asString();
		if(!valueDevicesDevice["Status"].isNull())
			devicesObject.status = valueDevicesDevice["Status"].asString();
		if(!valueDevicesDevice["GbId"].isNull())
			devicesObject.gbId = valueDevicesDevice["GbId"].asString();
		if(!valueDevicesDevice["Ip"].isNull())
			devicesObject.ip = valueDevicesDevice["Ip"].asString();
		if(!valueDevicesDevice["Port"].isNull())
			devicesObject.port = std::stol(valueDevicesDevice["Port"].asString());
		if(!valueDevicesDevice["Url"].isNull())
			devicesObject.url = valueDevicesDevice["Url"].asString();
		if(!valueDevicesDevice["Username"].isNull())
			devicesObject.username = valueDevicesDevice["Username"].asString();
		if(!valueDevicesDevice["Password"].isNull())
			devicesObject.password = valueDevicesDevice["Password"].asString();
		if(!valueDevicesDevice["Vendor"].isNull())
			devicesObject.vendor = valueDevicesDevice["Vendor"].asString();
		if(!valueDevicesDevice["Dsn"].isNull())
			devicesObject.dsn = valueDevicesDevice["Dsn"].asString();
		if(!valueDevicesDevice["Longitude"].isNull())
			devicesObject.longitude = valueDevicesDevice["Longitude"].asString();
		if(!valueDevicesDevice["Latitude"].isNull())
			devicesObject.latitude = valueDevicesDevice["Latitude"].asString();
		if(!valueDevicesDevice["AutoPos"].isNull())
			devicesObject.autoPos = valueDevicesDevice["AutoPos"].asString() == "true";
		if(!valueDevicesDevice["AlarmMethod"].isNull())
			devicesObject.alarmMethod = valueDevicesDevice["AlarmMethod"].asString();
		if(!valueDevicesDevice["PosInterval"].isNull())
			devicesObject.posInterval = std::stol(valueDevicesDevice["PosInterval"].asString());
		if(!valueDevicesDevice["CreatedTime"].isNull())
			devicesObject.createdTime = valueDevicesDevice["CreatedTime"].asString();
		if(!valueDevicesDevice["RegisteredTime"].isNull())
			devicesObject.registeredTime = valueDevicesDevice["RegisteredTime"].asString();
		if(!valueDevicesDevice["ChannelSyncTime"].isNull())
			devicesObject.channelSyncTime = valueDevicesDevice["ChannelSyncTime"].asString();
		if(!valueDevicesDevice["Params"].isNull())
			devicesObject.params = valueDevicesDevice["Params"].asString();
		auto statsNode = value["Stats"];
		if(!statsNode["ChannelNum"].isNull())
			devicesObject.stats.channelNum = std::stol(statsNode["ChannelNum"].asString());
		if(!statsNode["StreamNum"].isNull())
			devicesObject.stats.streamNum = std::stol(statsNode["StreamNum"].asString());
		if(!statsNode["OnlineNum"].isNull())
			devicesObject.stats.onlineNum = std::stol(statsNode["OnlineNum"].asString());
		if(!statsNode["OfflineNum"].isNull())
			devicesObject.stats.offlineNum = std::stol(statsNode["OfflineNum"].asString());
		if(!statsNode["FailedNum"].isNull())
			devicesObject.stats.failedNum = std::stol(statsNode["FailedNum"].asString());
		auto directoryNode = value["Directory"];
		if(!directoryNode["Id"].isNull())
			devicesObject.directory.id = directoryNode["Id"].asString();
		if(!directoryNode["Name"].isNull())
			devicesObject.directory.name = directoryNode["Name"].asString();
		if(!directoryNode["Description"].isNull())
			devicesObject.directory.description = directoryNode["Description"].asString();
		if(!directoryNode["GroupId"].isNull())
			devicesObject.directory.groupId = directoryNode["GroupId"].asString();
		if(!directoryNode["ParentId"].isNull())
			devicesObject.directory.parentId = directoryNode["ParentId"].asString();
		if(!directoryNode["CreatedTime"].isNull())
			devicesObject.directory.createdTime = directoryNode["CreatedTime"].asString();
		devices_.push_back(devicesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageCount"].isNull())
		pageCount_ = std::stol(value["PageCount"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeDevicesResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDevicesResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDevicesResult::getPageNum()const
{
	return pageNum_;
}

long DescribeDevicesResult::getPageCount()const
{
	return pageCount_;
}

std::vector<DescribeDevicesResult::Device> DescribeDevicesResult::getDevices()const
{
	return devices_;
}

