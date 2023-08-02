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

#include <alibabacloud/gpdb/model/DescribeWaitingSQLInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeWaitingSQLInfoResult::DescribeWaitingSQLInfoResult() :
	ServiceResult()
{}

DescribeWaitingSQLInfoResult::DescribeWaitingSQLInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWaitingSQLInfoResult::~DescribeWaitingSQLInfoResult()
{}

void DescribeWaitingSQLInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["item"];
	for (auto valueItemsitem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsitem["PID"].isNull())
			itemsObject.pID = valueItemsitem["PID"].asString();
		if(!valueItemsitem["User"].isNull())
			itemsObject.user = valueItemsitem["User"].asString();
		if(!valueItemsitem["SQLStmt"].isNull())
			itemsObject.sQLStmt = valueItemsitem["SQLStmt"].asString();
		if(!valueItemsitem["Application"].isNull())
			itemsObject.application = valueItemsitem["Application"].asString();
		if(!valueItemsitem["NotGrantLocks"].isNull())
			itemsObject.notGrantLocks = valueItemsitem["NotGrantLocks"].asString();
		if(!valueItemsitem["BlockedByPID"].isNull())
			itemsObject.blockedByPID = valueItemsitem["BlockedByPID"].asString();
		if(!valueItemsitem["BlockedByUser"].isNull())
			itemsObject.blockedByUser = valueItemsitem["BlockedByUser"].asString();
		if(!valueItemsitem["BlockedBySQLStmt"].isNull())
			itemsObject.blockedBySQLStmt = valueItemsitem["BlockedBySQLStmt"].asString();
		if(!valueItemsitem["BlockedByApplication"].isNull())
			itemsObject.blockedByApplication = valueItemsitem["BlockedByApplication"].asString();
		if(!valueItemsitem["GrantLocks"].isNull())
			itemsObject.grantLocks = valueItemsitem["GrantLocks"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Database"].isNull())
		database_ = value["Database"].asString();

}

std::string DescribeWaitingSQLInfoResult::getDatabase()const
{
	return database_;
}

std::vector<DescribeWaitingSQLInfoResult::Item> DescribeWaitingSQLInfoResult::getItems()const
{
	return items_;
}

