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

#include <alibabacloud/cloudgame/model/ListProjectsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudgame;
using namespace AlibabaCloud::Cloudgame::Model;

ListProjectsResult::ListProjectsResult() :
	ServiceResult()
{}

ListProjectsResult::ListProjectsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectsResult::~ListProjectsResult()
{}

void ListProjectsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["DataListItem"];
	for (auto valueDataListDataListItem : allDataListNode)
	{
		DataListItem dataListObject;
		if(!valueDataListDataListItem["StandardCodeRate"].isNull())
			dataListObject.standardCodeRate = valueDataListDataListItem["StandardCodeRate"].asString();
		if(!valueDataListDataListItem["HighDefinitionResolution"].isNull())
			dataListObject.highDefinitionResolution = valueDataListDataListItem["HighDefinitionResolution"].asString();
		if(!valueDataListDataListItem["HighDefinitionCodeRate"].isNull())
			dataListObject.highDefinitionCodeRate = valueDataListDataListItem["HighDefinitionCodeRate"].asString();
		if(!valueDataListDataListItem["StandardResolution"].isNull())
			dataListObject.standardResolution = valueDataListDataListItem["StandardResolution"].asString();
		if(!valueDataListDataListItem["ProjectId"].isNull())
			dataListObject.projectId = valueDataListDataListItem["ProjectId"].asString();
		if(!valueDataListDataListItem["ConcurrencyLimitNumber"].isNull())
			dataListObject.concurrencyLimitNumber = std::stoi(valueDataListDataListItem["ConcurrencyLimitNumber"].asString());
		if(!valueDataListDataListItem["HighestCodeRate"].isNull())
			dataListObject.highestCodeRate = valueDataListDataListItem["HighestCodeRate"].asString();
		if(!valueDataListDataListItem["ProjectName"].isNull())
			dataListObject.projectName = valueDataListDataListItem["ProjectName"].asString();
		if(!valueDataListDataListItem["HighestResolution"].isNull())
			dataListObject.highestResolution = valueDataListDataListItem["HighestResolution"].asString();
		dataList_.push_back(dataListObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListProjectsResult::DataListItem> ListProjectsResult::getDataList()const
{
	return dataList_;
}

int ListProjectsResult::getPageSize()const
{
	return pageSize_;
}

int ListProjectsResult::getCurrentPage()const
{
	return currentPage_;
}

int ListProjectsResult::getCount()const
{
	return count_;
}

