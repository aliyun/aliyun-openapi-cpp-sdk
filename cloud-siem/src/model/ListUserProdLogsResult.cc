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

#include <alibabacloud/cloud-siem/model/ListUserProdLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListUserProdLogsResult::ListUserProdLogsResult() :
	ServiceResult()
{}

ListUserProdLogsResult::ListUserProdLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserProdLogsResult::~ListUserProdLogsResult()
{}

void ListUserProdLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["SourceLogCode"].isNull())
			dataObject.sourceLogCode = valueDataDataItem["SourceLogCode"].asString();
		if(!valueDataDataItem["SourceLogInfo"].isNull())
			dataObject.sourceLogInfo = valueDataDataItem["SourceLogInfo"].asString();
		if(!valueDataDataItem["DisplayLine"].isNull())
			dataObject.displayLine = valueDataDataItem["DisplayLine"].asString();
		if(!valueDataDataItem["SourceProdCode"].isNull())
			dataObject.sourceProdCode = valueDataDataItem["SourceProdCode"].asString();
		if(!valueDataDataItem["IsDeleted"].isNull())
			dataObject.isDeleted = std::stoi(valueDataDataItem["IsDeleted"].asString());
		if(!valueDataDataItem["Imported"].isNull())
			dataObject.imported = valueDataDataItem["Imported"].asString() == "true";
		if(!valueDataDataItem["Displayed"].isNull())
			dataObject.displayed = valueDataDataItem["Displayed"].asString() == "true";
		if(!valueDataDataItem["MainUserId"].isNull())
			dataObject.mainUserId = std::stol(valueDataDataItem["MainUserId"].asString());
		if(!valueDataDataItem["SubUserId"].isNull())
			dataObject.subUserId = std::stol(valueDataDataItem["SubUserId"].asString());
		if(!valueDataDataItem["SubUserName"].isNull())
			dataObject.subUserName = valueDataDataItem["SubUserName"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListUserProdLogsResult::DataItem> ListUserProdLogsResult::getData()const
{
	return data_;
}

