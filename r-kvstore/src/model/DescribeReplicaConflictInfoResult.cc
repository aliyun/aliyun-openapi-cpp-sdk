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

#include <alibabacloud/r-kvstore/model/DescribeReplicaConflictInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeReplicaConflictInfoResult::DescribeReplicaConflictInfoResult() :
	ServiceResult()
{}

DescribeReplicaConflictInfoResult::DescribeReplicaConflictInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicaConflictInfoResult::~DescribeReplicaConflictInfoResult()
{}

void DescribeReplicaConflictInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["SourceInstanceId"].isNull())
			itemsObject.sourceInstanceId = valueItemsItemsItem["SourceInstanceId"].asString();
		if(!valueItemsItemsItem["DestinationInstanceId"].isNull())
			itemsObject.destinationInstanceId = valueItemsItemsItem["DestinationInstanceId"].asString();
		if(!valueItemsItemsItem["OccurTime"].isNull())
			itemsObject.occurTime = valueItemsItemsItem["OccurTime"].asString();
		if(!valueItemsItemsItem["DetailInfo"].isNull())
			itemsObject.detailInfo = valueItemsItemsItem["DetailInfo"].asString();
		if(!valueItemsItemsItem["ConfictKey"].isNull())
			itemsObject.confictKey = valueItemsItemsItem["ConfictKey"].asString();
		if(!valueItemsItemsItem["ConfictReason"].isNull())
			itemsObject.confictReason = valueItemsItemsItem["ConfictReason"].asString();
		if(!valueItemsItemsItem["DatabaseName"].isNull())
			itemsObject.databaseName = valueItemsItemsItem["DatabaseName"].asString();
		if(!valueItemsItemsItem["RecoveryMode"].isNull())
			itemsObject.recoveryMode = valueItemsItemsItem["RecoveryMode"].asString();
		if(!valueItemsItemsItem["ConflictGtid"].isNull())
			itemsObject.conflictGtid = valueItemsItemsItem["ConflictGtid"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["ReplicaId"].isNull())
		replicaId_ = value["ReplicaId"].asString();
	if(!value["PagNumber"].isNull())
		pagNumber_ = std::stoi(value["PagNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeReplicaConflictInfoResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeReplicaConflictInfoResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::vector<DescribeReplicaConflictInfoResult::ItemsItem> DescribeReplicaConflictInfoResult::getItems()const
{
	return items_;
}

int DescribeReplicaConflictInfoResult::getPagNumber()const
{
	return pagNumber_;
}

std::string DescribeReplicaConflictInfoResult::getReplicaId()const
{
	return replicaId_;
}

