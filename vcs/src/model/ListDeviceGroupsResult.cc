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

#include <alibabacloud/vcs/model/ListDeviceGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListDeviceGroupsResult::ListDeviceGroupsResult() :
	ServiceResult()
{}

ListDeviceGroupsResult::ListDeviceGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDeviceGroupsResult::~ListDeviceGroupsResult()
{}

void ListDeviceGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["TotalCount"].isNull())
			dataObject.totalCount = valueDataDataItem["TotalCount"].asString();
		auto allListNode = allDataNode["List"]["ListItem"];
		for (auto allDataNodeListListItem : allListNode)
		{
			DataItem::ListItem listObject;
			if(!allDataNodeListListItem["DeviceGroup"].isNull())
				listObject.deviceGroup = allDataNodeListListItem["DeviceGroup"].asString();
			if(!allDataNodeListListItem["DeviceName"].isNull())
				listObject.deviceName = allDataNodeListListItem["DeviceName"].asString();
			if(!allDataNodeListListItem["DeviceCode"].isNull())
				listObject.deviceCode = allDataNodeListListItem["DeviceCode"].asString();
			if(!allDataNodeListListItem["BitRate"].isNull())
				listObject.bitRate = allDataNodeListListItem["BitRate"].asString();
			if(!allDataNodeListListItem["CodingFormat"].isNull())
				listObject.codingFormat = allDataNodeListListItem["CodingFormat"].asString();
			if(!allDataNodeListListItem["ResolvingPower"].isNull())
				listObject.resolvingPower = allDataNodeListListItem["ResolvingPower"].asString();
			if(!allDataNodeListListItem["DataSourceType"].isNull())
				listObject.dataSourceType = allDataNodeListListItem["DataSourceType"].asString();
			if(!allDataNodeListListItem["RegionName"].isNull())
				listObject.regionName = allDataNodeListListItem["RegionName"].asString();
			if(!allDataNodeListListItem["RegionId"].isNull())
				listObject.regionId = allDataNodeListListItem["RegionId"].asString();
			if(!allDataNodeListListItem["InstallAddress"].isNull())
				listObject.installAddress = allDataNodeListListItem["InstallAddress"].asString();
			if(!allDataNodeListListItem["DeviceSn"].isNull())
				listObject.deviceSn = allDataNodeListListItem["DeviceSn"].asString();
			if(!allDataNodeListListItem["DeviceStatus"].isNull())
				listObject.deviceStatus = allDataNodeListListItem["DeviceStatus"].asString();
			if(!allDataNodeListListItem["DeviceStreamStatus"].isNull())
				listObject.deviceStreamStatus = allDataNodeListListItem["DeviceStreamStatus"].asString();
			if(!allDataNodeListListItem["DeviceComputeStatus"].isNull())
				listObject.deviceComputeStatus = allDataNodeListListItem["DeviceComputeStatus"].asString();
			dataObject.list.push_back(listObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDeviceGroupsResult::getMessage()const
{
	return message_;
}

std::vector<ListDeviceGroupsResult::DataItem> ListDeviceGroupsResult::getData()const
{
	return data_;
}

std::string ListDeviceGroupsResult::getCode()const
{
	return code_;
}

