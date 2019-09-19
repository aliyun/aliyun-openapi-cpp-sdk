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

#include <alibabacloud/dds/model/DescribeVerificationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeVerificationListResult::DescribeVerificationListResult() :
	ServiceResult()
{}

DescribeVerificationListResult::DescribeVerificationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVerificationListResult::~DescribeVerificationListResult()
{}

void DescribeVerificationListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["InstanceIdA"].isNull())
			itemsObject.instanceIdA = valueItemsItemsItem["InstanceIdA"].asString();
		if(!valueItemsItemsItem["InstanceIdB"].isNull())
			itemsObject.instanceIdB = valueItemsItemsItem["InstanceIdB"].asString();
		if(!valueItemsItemsItem["Key"].isNull())
			itemsObject.key = valueItemsItemsItem["Key"].asString();
		if(!valueItemsItemsItem["KeyType"].isNull())
			itemsObject.keyType = valueItemsItemsItem["KeyType"].asString();
		if(!valueItemsItemsItem["InconsistentType"].isNull())
			itemsObject.inconsistentType = valueItemsItemsItem["InconsistentType"].asString();
		if(!valueItemsItemsItem["OccurTime"].isNull())
			itemsObject.occurTime = valueItemsItemsItem["OccurTime"].asString();
		if(!valueItemsItemsItem["Schema"].isNull())
			itemsObject.schema = valueItemsItemsItem["Schema"].asString();
		if(!valueItemsItemsItem["InconsistentFields"].isNull())
			itemsObject.inconsistentFields = valueItemsItemsItem["InconsistentFields"].asString();
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

int DescribeVerificationListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeVerificationListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::vector<DescribeVerificationListResult::ItemsItem> DescribeVerificationListResult::getItems()const
{
	return items_;
}

int DescribeVerificationListResult::getPagNumber()const
{
	return pagNumber_;
}

std::string DescribeVerificationListResult::getReplicaId()const
{
	return replicaId_;
}

