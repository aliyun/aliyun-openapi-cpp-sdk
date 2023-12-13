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

#include <alibabacloud/cloud-siem/model/ListBindDataSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListBindDataSourcesResult::ListBindDataSourcesResult() :
	ServiceResult()
{}

ListBindDataSourcesResult::ListBindDataSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBindDataSourcesResult::~ListBindDataSourcesResult()
{}

void ListBindDataSourcesResult::parse(const std::string &payload)
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
		if(!valueDataDataItem["DataSourceInstanceId"].isNull())
			dataObject.dataSourceInstanceId = valueDataDataItem["DataSourceInstanceId"].asString();
		if(!valueDataDataItem["DataSourceType"].isNull())
			dataObject.dataSourceType = valueDataDataItem["DataSourceType"].asString();
		if(!valueDataDataItem["DataSourceName"].isNull())
			dataObject.dataSourceName = valueDataDataItem["DataSourceName"].asString();
		if(!valueDataDataItem["DataSourceRemark"].isNull())
			dataObject.dataSourceRemark = valueDataDataItem["DataSourceRemark"].asString();
		if(!valueDataDataItem["LogCount"].isNull())
			dataObject.logCount = std::stoi(valueDataDataItem["LogCount"].asString());
		if(!valueDataDataItem["TaskCount"].isNull())
			dataObject.taskCount = std::stoi(valueDataDataItem["TaskCount"].asString());
		if(!valueDataDataItem["AccountId"].isNull())
			dataObject.accountId = valueDataDataItem["AccountId"].asString();
		if(!valueDataDataItem["CloudCode"].isNull())
			dataObject.cloudCode = valueDataDataItem["CloudCode"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<ListBindDataSourcesResult::DataItem> ListBindDataSourcesResult::getData()const
{
	return data_;
}

