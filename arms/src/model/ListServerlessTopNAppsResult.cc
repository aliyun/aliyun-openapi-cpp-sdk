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

#include <alibabacloud/arms/model/ListServerlessTopNAppsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListServerlessTopNAppsResult::ListServerlessTopNAppsResult() :
	ServiceResult()
{}

ListServerlessTopNAppsResult::ListServerlessTopNAppsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServerlessTopNAppsResult::~ListServerlessTopNAppsResult()
{}

void ListServerlessTopNAppsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Pid"].isNull())
			dataObject.pid = valueDataDataItem["Pid"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		if(!valueDataDataItem["Region"].isNull())
			dataObject.region = valueDataDataItem["Region"].asString();
		if(!valueDataDataItem["Rt"].isNull())
			dataObject.rt = std::stof(valueDataDataItem["Rt"].asString());
		if(!valueDataDataItem["Count"].isNull())
			dataObject.count = std::stoi(valueDataDataItem["Count"].asString());
		if(!valueDataDataItem["Error"].isNull())
			dataObject.error = std::stoi(valueDataDataItem["Error"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<ListServerlessTopNAppsResult::DataItem> ListServerlessTopNAppsResult::getData()const
{
	return data_;
}

