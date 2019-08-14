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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["SourceInstanceId"].isNull())
			itemsObject.sourceInstanceId = value["SourceInstanceId"].asString();
		if(!value["DestinationInstanceId"].isNull())
			itemsObject.destinationInstanceId = value["DestinationInstanceId"].asString();
		if(!value["OccurTime"].isNull())
			itemsObject.occurTime = value["OccurTime"].asString();
		if(!value["DetailInfo"].isNull())
			itemsObject.detailInfo = value["DetailInfo"].asString();
		if(!value["ConfictKey"].isNull())
			itemsObject.confictKey = value["ConfictKey"].asString();
		if(!value["ConfictReason"].isNull())
			itemsObject.confictReason = value["ConfictReason"].asString();
		if(!value["DatabaseName"].isNull())
			itemsObject.databaseName = value["DatabaseName"].asString();
		if(!value["RecoveryMode"].isNull())
			itemsObject.recoveryMode = value["RecoveryMode"].asString();
		if(!value["ConflictGtid"].isNull())
			itemsObject.conflictGtid = value["ConflictGtid"].asString();
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

