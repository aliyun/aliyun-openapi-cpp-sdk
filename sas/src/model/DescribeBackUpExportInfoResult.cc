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

#include <alibabacloud/sas/model/DescribeBackUpExportInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackUpExportInfoResult::DescribeBackUpExportInfoResult() :
	ServiceResult()
{}

DescribeBackUpExportInfoResult::DescribeBackUpExportInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackUpExportInfoResult::~DescribeBackUpExportInfoResult()
{}

void DescribeBackUpExportInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Link"].isNull())
			dataObject.link = valueDataDataItem["Link"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["Progress"].isNull())
			dataObject.progress = std::stoi(valueDataDataItem["Progress"].asString());
		if(!valueDataDataItem["CurrentCount"].isNull())
			dataObject.currentCount = std::stoi(valueDataDataItem["CurrentCount"].asString());
		if(!valueDataDataItem["GmtCreate"].isNull())
			dataObject.gmtCreate = std::stol(valueDataDataItem["GmtCreate"].asString());
		if(!valueDataDataItem["Message"].isNull())
			dataObject.message = valueDataDataItem["Message"].asString();
		if(!valueDataDataItem["FileName"].isNull())
			dataObject.fileName = valueDataDataItem["FileName"].asString();
		if(!valueDataDataItem["TotalCount"].isNull())
			dataObject.totalCount = std::stoi(valueDataDataItem["TotalCount"].asString());
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stol(valueDataDataItem["Id"].asString());
		data_.push_back(dataObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeBackUpExportInfoResult::PageInfo DescribeBackUpExportInfoResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeBackUpExportInfoResult::DataItem> DescribeBackUpExportInfoResult::getData()const
{
	return data_;
}

