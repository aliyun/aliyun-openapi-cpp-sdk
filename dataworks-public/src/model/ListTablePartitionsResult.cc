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

#include <alibabacloud/dataworks-public/model/ListTablePartitionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListTablePartitionsResult::ListTablePartitionsResult() :
	ServiceResult()
{}

ListTablePartitionsResult::ListTablePartitionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTablePartitionsResult::~ListTablePartitionsResult()
{}

void ListTablePartitionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allPagedDataNode = dataNode["PagedData"]["TablePartitions"];
	for (auto dataNodePagedDataTablePartitions : allPagedDataNode)
	{
		Data::TablePartitions tablePartitionsObject;
		if(!dataNodePagedDataTablePartitions["GmtCreate"].isNull())
			tablePartitionsObject.gmtCreate = std::stol(dataNodePagedDataTablePartitions["GmtCreate"].asString());
		if(!dataNodePagedDataTablePartitions["GmtModified"].isNull())
			tablePartitionsObject.gmtModified = std::stol(dataNodePagedDataTablePartitions["GmtModified"].asString());
		if(!dataNodePagedDataTablePartitions["Location"].isNull())
			tablePartitionsObject.location = dataNodePagedDataTablePartitions["Location"].asString();
		if(!dataNodePagedDataTablePartitions["PartitionName"].isNull())
			tablePartitionsObject.partitionName = dataNodePagedDataTablePartitions["PartitionName"].asString();
		if(!dataNodePagedDataTablePartitions["PartitionPath"].isNull())
			tablePartitionsObject.partitionPath = dataNodePagedDataTablePartitions["PartitionPath"].asString();
		if(!dataNodePagedDataTablePartitions["PartitionType"].isNull())
			tablePartitionsObject.partitionType = dataNodePagedDataTablePartitions["PartitionType"].asString();
		if(!dataNodePagedDataTablePartitions["PartitionComment"].isNull())
			tablePartitionsObject.partitionComment = dataNodePagedDataTablePartitions["PartitionComment"].asString();
		data_.pagedData.push_back(tablePartitionsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListTablePartitionsResult::Data ListTablePartitionsResult::getData()const
{
	return data_;
}

std::string ListTablePartitionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListTablePartitionsResult::getErrorMessage()const
{
	return errorMessage_;
}

