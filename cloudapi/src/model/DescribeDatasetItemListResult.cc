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

#include <alibabacloud/cloudapi/model/DescribeDatasetItemListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeDatasetItemListResult::DescribeDatasetItemListResult() :
	ServiceResult()
{}

DescribeDatasetItemListResult::DescribeDatasetItemListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatasetItemListResult::~DescribeDatasetItemListResult()
{}

void DescribeDatasetItemListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatasetItemInfoListNode = value["DatasetItemInfoList"]["DatasetItemInfo"];
	for (auto valueDatasetItemInfoListDatasetItemInfo : allDatasetItemInfoListNode)
	{
		DatasetItemInfo datasetItemInfoListObject;
		if(!valueDatasetItemInfoListDatasetItemInfo["DatasetId"].isNull())
			datasetItemInfoListObject.datasetId = valueDatasetItemInfoListDatasetItemInfo["DatasetId"].asString();
		if(!valueDatasetItemInfoListDatasetItemInfo["DatasetItemId"].isNull())
			datasetItemInfoListObject.datasetItemId = valueDatasetItemInfoListDatasetItemInfo["DatasetItemId"].asString();
		if(!valueDatasetItemInfoListDatasetItemInfo["Value"].isNull())
			datasetItemInfoListObject.value = valueDatasetItemInfoListDatasetItemInfo["Value"].asString();
		if(!valueDatasetItemInfoListDatasetItemInfo["ExpiredTime"].isNull())
			datasetItemInfoListObject.expiredTime = valueDatasetItemInfoListDatasetItemInfo["ExpiredTime"].asString();
		if(!valueDatasetItemInfoListDatasetItemInfo["ModifiedTime"].isNull())
			datasetItemInfoListObject.modifiedTime = valueDatasetItemInfoListDatasetItemInfo["ModifiedTime"].asString();
		if(!valueDatasetItemInfoListDatasetItemInfo["CreatedTime"].isNull())
			datasetItemInfoListObject.createdTime = valueDatasetItemInfoListDatasetItemInfo["CreatedTime"].asString();
		if(!valueDatasetItemInfoListDatasetItemInfo["Description"].isNull())
			datasetItemInfoListObject.description = valueDatasetItemInfoListDatasetItemInfo["Description"].asString();
		datasetItemInfoList_.push_back(datasetItemInfoListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDatasetItemListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDatasetItemListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDatasetItemListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDatasetItemListResult::DatasetItemInfo> DescribeDatasetItemListResult::getDatasetItemInfoList()const
{
	return datasetItemInfoList_;
}

