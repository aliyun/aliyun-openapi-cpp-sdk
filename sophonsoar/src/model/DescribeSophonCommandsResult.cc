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

#include <alibabacloud/sophonsoar/model/DescribeSophonCommandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeSophonCommandsResult::DescribeSophonCommandsResult() :
	ServiceResult()
{}

DescribeSophonCommandsResult::DescribeSophonCommandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSophonCommandsResult::~DescribeSophonCommandsResult()
{}

void DescribeSophonCommandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["DisplayName"].isNull())
			dataObject.displayName = valueDataDataItem["DisplayName"].asString();
		if(!valueDataDataItem["CommandEntity"].isNull())
			dataObject.commandEntity = valueDataDataItem["CommandEntity"].asString();
		if(!valueDataDataItem["CommandTag"].isNull())
			dataObject.commandTag = valueDataDataItem["CommandTag"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["ActionType"].isNull())
			dataObject.actionType = valueDataDataItem["ActionType"].asString();
		if(!valueDataDataItem["TaskConfig"].isNull())
			dataObject.taskConfig = valueDataDataItem["TaskConfig"].asString();
		auto allParamConfigNode = valueDataDataItem["ParamConfig"]["ParamConfigItem"];
		for (auto valueDataDataItemParamConfigParamConfigItem : allParamConfigNode)
		{
			DataItem::ParamConfigItem paramConfigObject;
			if(!valueDataDataItemParamConfigParamConfigItem["Necessary"].isNull())
				paramConfigObject.necessary = valueDataDataItemParamConfigParamConfigItem["Necessary"].asString() == "true";
			if(!valueDataDataItemParamConfigParamConfigItem["Field"].isNull())
				paramConfigObject.field = valueDataDataItemParamConfigParamConfigItem["Field"].asString();
			if(!valueDataDataItemParamConfigParamConfigItem["Value"].isNull())
				paramConfigObject.value = valueDataDataItemParamConfigParamConfigItem["Value"].asString();
			if(!valueDataDataItemParamConfigParamConfigItem["CheckField"].isNull())
				paramConfigObject.checkField = valueDataDataItemParamConfigParamConfigItem["CheckField"].asString();
			dataObject.paramConfig.push_back(paramConfigObject);
		}
		data_.push_back(dataObject);
	}

}

std::vector<DescribeSophonCommandsResult::DataItem> DescribeSophonCommandsResult::getData()const
{
	return data_;
}

