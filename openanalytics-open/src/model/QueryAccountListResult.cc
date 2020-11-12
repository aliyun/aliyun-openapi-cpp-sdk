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

#include <alibabacloud/openanalytics-open/model/QueryAccountListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

QueryAccountListResult::QueryAccountListResult() :
	ServiceResult()
{}

QueryAccountListResult::QueryAccountListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccountListResult::~QueryAccountListResult()
{}

void QueryAccountListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["UserName"].isNull())
			dataObject.userName = valueDataDataItem["UserName"].asString();
		if(!valueDataDataItem["Role"].isNull())
			dataObject.role = valueDataDataItem["Role"].asString();
		if(!valueDataDataItem["ShortName"].isNull())
			dataObject.shortName = valueDataDataItem["ShortName"].asString();
		if(!valueDataDataItem["Remark"].isNull())
			dataObject.remark = valueDataDataItem["Remark"].asString();
		if(!valueDataDataItem["RamUid"].isNull())
			dataObject.ramUid = valueDataDataItem["RamUid"].asString();
		data_.push_back(dataObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int QueryAccountListResult::getTotalCount()const
{
	return totalCount_;
}

int QueryAccountListResult::getPageSize()const
{
	return pageSize_;
}

int QueryAccountListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<QueryAccountListResult::DataItem> QueryAccountListResult::getData()const
{
	return data_;
}

std::string QueryAccountListResult::getRegionId()const
{
	return regionId_;
}

