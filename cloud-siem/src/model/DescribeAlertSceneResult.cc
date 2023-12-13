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

#include <alibabacloud/cloud-siem/model/DescribeAlertSceneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAlertSceneResult::DescribeAlertSceneResult() :
	ServiceResult()
{}

DescribeAlertSceneResult::DescribeAlertSceneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlertSceneResult::~DescribeAlertSceneResult()
{}

void DescribeAlertSceneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AlertType"].isNull())
			dataObject.alertType = valueDataDataItem["AlertType"].asString();
		if(!valueDataDataItem["AlertTypeId"].isNull())
			dataObject.alertTypeId = valueDataDataItem["AlertTypeId"].asString();
		if(!valueDataDataItem["AlertName"].isNull())
			dataObject.alertName = valueDataDataItem["AlertName"].asString();
		if(!valueDataDataItem["AlertNameId"].isNull())
			dataObject.alertNameId = valueDataDataItem["AlertNameId"].asString();
		if(!valueDataDataItem["AlertTile"].isNull())
			dataObject.alertTile = valueDataDataItem["AlertTile"].asString();
		if(!valueDataDataItem["AlertTileId"].isNull())
			dataObject.alertTileId = valueDataDataItem["AlertTileId"].asString();
		auto allTargetsNode = valueDataDataItem["Targets"]["Target"];
		for (auto valueDataDataItemTargetsTarget : allTargetsNode)
		{
			DataItem::Target targetsObject;
			if(!valueDataDataItemTargetsTarget["Type"].isNull())
				targetsObject.type = valueDataDataItemTargetsTarget["Type"].asString();
			if(!valueDataDataItemTargetsTarget["Name"].isNull())
				targetsObject.name = valueDataDataItemTargetsTarget["Name"].asString();
			if(!valueDataDataItemTargetsTarget["Value"].isNull())
				targetsObject.value = valueDataDataItemTargetsTarget["Value"].asString();
			auto allValues = value["Values"]["Value"];
			for (auto value : allValues)
				targetsObject.values.push_back(value.asString());
			dataObject.targets.push_back(targetsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAlertSceneResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAlertSceneResult::DataItem> DescribeAlertSceneResult::getData()const
{
	return data_;
}

int DescribeAlertSceneResult::getCode()const
{
	return code_;
}

bool DescribeAlertSceneResult::getSuccess()const
{
	return success_;
}

