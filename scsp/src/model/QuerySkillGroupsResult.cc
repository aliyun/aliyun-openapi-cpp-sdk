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

#include <alibabacloud/scsp/model/QuerySkillGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

QuerySkillGroupsResult::QuerySkillGroupsResult() :
	ServiceResult()
{}

QuerySkillGroupsResult::QuerySkillGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySkillGroupsResult::~QuerySkillGroupsResult()
{}

void QuerySkillGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["DisplayName"].isNull())
			dataObject.displayName = valueDataDataItem["DisplayName"].asString();
		if(!valueDataDataItem["Description"].isNull())
			dataObject.description = valueDataDataItem["Description"].asString();
		if(!valueDataDataItem["ChannelType"].isNull())
			dataObject.channelType = std::stoi(valueDataDataItem["ChannelType"].asString());
		if(!valueDataDataItem["SkillGroupName"].isNull())
			dataObject.skillGroupName = valueDataDataItem["SkillGroupName"].asString();
		if(!valueDataDataItem["SkillGroupId"].isNull())
			dataObject.skillGroupId = std::stol(valueDataDataItem["SkillGroupId"].asString());
		data_.push_back(dataObject);
	}
	if(!value["OnePageSize"].isNull())
		onePageSize_ = std::stoi(value["OnePageSize"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalResults"].isNull())
		totalResults_ = std::stoi(value["TotalResults"].asString());

}

int QuerySkillGroupsResult::getOnePageSize()const
{
	return onePageSize_;
}

int QuerySkillGroupsResult::getTotalPage()const
{
	return totalPage_;
}

int QuerySkillGroupsResult::getCurrentPage()const
{
	return currentPage_;
}

int QuerySkillGroupsResult::getTotalResults()const
{
	return totalResults_;
}

std::vector<QuerySkillGroupsResult::DataItem> QuerySkillGroupsResult::getData()const
{
	return data_;
}

