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

#include <alibabacloud/companyreg/model/ListApplicationLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListApplicationLogsResult::ListApplicationLogsResult() :
	ServiceResult()
{}

ListApplicationLogsResult::ListApplicationLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationLogsResult::~ListApplicationLogsResult()
{}

void ListApplicationLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["BizId"].isNull())
			dataObject.bizId = valueDataDataItem["BizId"].asString();
		if(!valueDataDataItem["Note"].isNull())
			dataObject.note = valueDataDataItem["Note"].asString();
		if(!valueDataDataItem["OperateType"].isNull())
			dataObject.operateType = std::stoi(valueDataDataItem["OperateType"].asString());
		if(!valueDataDataItem["OperateTime"].isNull())
			dataObject.operateTime = std::stol(valueDataDataItem["OperateTime"].asString());
		if(!valueDataDataItem["BizStatus"].isNull())
			dataObject.bizStatus = std::stoi(valueDataDataItem["BizStatus"].asString());
		if(!valueDataDataItem["ExtendContent"].isNull())
			dataObject.extendContent = valueDataDataItem["ExtendContent"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListApplicationLogsResult::DataItem> ListApplicationLogsResult::getData()const
{
	return data_;
}

