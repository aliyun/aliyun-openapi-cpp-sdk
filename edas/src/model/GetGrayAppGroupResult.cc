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

#include <alibabacloud/edas/model/GetGrayAppGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetGrayAppGroupResult::GetGrayAppGroupResult() :
	ServiceResult()
{}

GetGrayAppGroupResult::GetGrayAppGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGrayAppGroupResult::~GetGrayAppGroupResult()
{}

void GetGrayAppGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AppId"].isNull())
			dataObject.appId = valueDataDataItem["AppId"].asString();
		if(!valueDataDataItem["AppName"].isNull())
			dataObject.appName = valueDataDataItem["AppName"].asString();
		if(!valueDataDataItem["RegionId"].isNull())
			dataObject.regionId = valueDataDataItem["RegionId"].asString();
		if(!valueDataDataItem["RegionName"].isNull())
			dataObject.regionName = valueDataDataItem["RegionName"].asString();
		auto allGroupListNode = valueDataDataItem["GroupList"]["GroupListItem"];
		for (auto valueDataDataItemGroupListGroupListItem : allGroupListNode)
		{
			DataItem::GroupListItem groupListObject;
			if(!valueDataDataItemGroupListGroupListItem["Id"].isNull())
				groupListObject.id = valueDataDataItemGroupListGroupListItem["Id"].asString();
			if(!valueDataDataItemGroupListGroupListItem["GroupName"].isNull())
				groupListObject.groupName = valueDataDataItemGroupListGroupListItem["GroupName"].asString();
			if(!valueDataDataItemGroupListGroupListItem["PackageVersion"].isNull())
				groupListObject.packageVersion = valueDataDataItemGroupListGroupListItem["PackageVersion"].asString();
			if(!valueDataDataItemGroupListGroupListItem["Instances"].isNull())
				groupListObject.instances = std::stoi(valueDataDataItemGroupListGroupListItem["Instances"].asString());
			if(!valueDataDataItemGroupListGroupListItem["ClusterId"].isNull())
				groupListObject.clusterId = valueDataDataItemGroupListGroupListItem["ClusterId"].asString();
			if(!valueDataDataItemGroupListGroupListItem["DpathPointcutName"].isNull())
				groupListObject.dpathPointcutName = valueDataDataItemGroupListGroupListItem["DpathPointcutName"].asString();
			dataObject.groupList.push_back(groupListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetGrayAppGroupResult::getMessage()const
{
	return message_;
}

std::vector<GetGrayAppGroupResult::DataItem> GetGrayAppGroupResult::getData()const
{
	return data_;
}

int GetGrayAppGroupResult::getCode()const
{
	return code_;
}

