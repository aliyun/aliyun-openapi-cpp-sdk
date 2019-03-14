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

#include <alibabacloud/emr/model/MetastoreListTablePartitionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListTablePartitionResult::MetastoreListTablePartitionResult() :
	ServiceResult()
{}

MetastoreListTablePartitionResult::MetastoreListTablePartitionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListTablePartitionResult::~MetastoreListTablePartitionResult()
{}

void MetastoreListTablePartitionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPartitionList = value["PartitionList"]["Partition"];
	for (auto value : allPartitionList)
	{
		Partition partitionListObject;
		if(!value["DatabaseId"].isNull())
			partitionListObject.databaseId = value["DatabaseId"].asString();
		if(!value["TableId"].isNull())
			partitionListObject.tableId = value["TableId"].asString();
		if(!value["PartitionName"].isNull())
			partitionListObject.partitionName = value["PartitionName"].asString();
		if(!value["PartitionType"].isNull())
			partitionListObject.partitionType = value["PartitionType"].asString();
		if(!value["PartitionComment"].isNull())
			partitionListObject.partitionComment = value["PartitionComment"].asString();
		if(!value["Location"].isNull())
			partitionListObject.location = value["Location"].asString();
		if(!value["PartitionPath"].isNull())
			partitionListObject.partitionPath = value["PartitionPath"].asString();
		if(!value["BucketNum"].isNull())
			partitionListObject.bucketNum = std::stoi(value["BucketNum"].asString());
		if(!value["GmtCreate"].isNull())
			partitionListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			partitionListObject.gmtModified = std::stol(value["GmtModified"].asString());
		partitionList_.push_back(partitionListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int MetastoreListTablePartitionResult::getTotalCount()const
{
	return totalCount_;
}

int MetastoreListTablePartitionResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListTablePartitionResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<MetastoreListTablePartitionResult::Partition> MetastoreListTablePartitionResult::getPartitionList()const
{
	return partitionList_;
}

