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

#include <alibabacloud/cloud-siem/model/ListBindAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListBindAccountResult::ListBindAccountResult() :
	ServiceResult()
{}

ListBindAccountResult::ListBindAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBindAccountResult::~ListBindAccountResult()
{}

void ListBindAccountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AccountName"].isNull())
			dataObject.accountName = valueDataDataItem["AccountName"].asString();
		if(!valueDataDataItem["AccessId"].isNull())
			dataObject.accessId = valueDataDataItem["AccessId"].asString();
		if(!valueDataDataItem["DataSourceCount"].isNull())
			dataObject.dataSourceCount = std::stol(valueDataDataItem["DataSourceCount"].asString());
		if(!valueDataDataItem["ModifyTime"].isNull())
			dataObject.modifyTime = valueDataDataItem["ModifyTime"].asString();
		if(!valueDataDataItem["CreateUser"].isNull())
			dataObject.createUser = valueDataDataItem["CreateUser"].asString();
		if(!valueDataDataItem["BindId"].isNull())
			dataObject.bindId = std::stol(valueDataDataItem["BindId"].asString());
		if(!valueDataDataItem["AccountId"].isNull())
			dataObject.accountId = valueDataDataItem["AccountId"].asString();
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListBindAccountResult::DataItem> ListBindAccountResult::getData()const
{
	return data_;
}

