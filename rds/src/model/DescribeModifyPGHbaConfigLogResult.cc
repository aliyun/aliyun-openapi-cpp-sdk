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

#include <alibabacloud/rds/model/DescribeModifyPGHbaConfigLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeModifyPGHbaConfigLogResult::DescribeModifyPGHbaConfigLogResult() :
	ServiceResult()
{}

DescribeModifyPGHbaConfigLogResult::DescribeModifyPGHbaConfigLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeModifyPGHbaConfigLogResult::~DescribeModifyPGHbaConfigLogResult()
{}

void DescribeModifyPGHbaConfigLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHbaLogItemsNode = value["HbaLogItems"]["HbaLogItem"];
	for (auto valueHbaLogItemsHbaLogItem : allHbaLogItemsNode)
	{
		HbaLogItem hbaLogItemsObject;
		if(!valueHbaLogItemsHbaLogItem["ModifyStatus"].isNull())
			hbaLogItemsObject.modifyStatus = valueHbaLogItemsHbaLogItem["ModifyStatus"].asString();
		if(!valueHbaLogItemsHbaLogItem["ModifyTime"].isNull())
			hbaLogItemsObject.modifyTime = valueHbaLogItemsHbaLogItem["ModifyTime"].asString();
		if(!valueHbaLogItemsHbaLogItem["StatusReason"].isNull())
			hbaLogItemsObject.statusReason = valueHbaLogItemsHbaLogItem["StatusReason"].asString();
		auto allAfterHbaItemsNode = valueHbaLogItemsHbaLogItem["AfterHbaItems"]["HbaItem"];
		for (auto valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem : allAfterHbaItemsNode)
		{
			HbaLogItem::HbaItem afterHbaItemsObject;
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Address"].isNull())
				afterHbaItemsObject.address = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Address"].asString();
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Database"].isNull())
				afterHbaItemsObject.database = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Database"].asString();
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Mask"].isNull())
				afterHbaItemsObject.mask = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Mask"].asString();
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Method"].isNull())
				afterHbaItemsObject.method = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Method"].asString();
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Option"].isNull())
				afterHbaItemsObject.option = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Option"].asString();
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["PriorityId"].isNull())
				afterHbaItemsObject.priorityId = std::stoi(valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["PriorityId"].asString());
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Type"].isNull())
				afterHbaItemsObject.type = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["Type"].asString();
			if(!valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["User"].isNull())
				afterHbaItemsObject.user = valueHbaLogItemsHbaLogItemAfterHbaItemsHbaItem["User"].asString();
			hbaLogItemsObject.afterHbaItems.push_back(afterHbaItemsObject);
		}
		auto allBeforeHbaItemsNode = valueHbaLogItemsHbaLogItem["BeforeHbaItems"]["HbaItem"];
		for (auto valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem : allBeforeHbaItemsNode)
		{
			HbaLogItem::HbaItem beforeHbaItemsObject;
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Address"].isNull())
				beforeHbaItemsObject.address = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Address"].asString();
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Database"].isNull())
				beforeHbaItemsObject.database = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Database"].asString();
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Mask"].isNull())
				beforeHbaItemsObject.mask = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Mask"].asString();
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Method"].isNull())
				beforeHbaItemsObject.method = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Method"].asString();
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Option"].isNull())
				beforeHbaItemsObject.option = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Option"].asString();
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["PriorityId"].isNull())
				beforeHbaItemsObject.priorityId = std::stoi(valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["PriorityId"].asString());
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Type"].isNull())
				beforeHbaItemsObject.type = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["Type"].asString();
			if(!valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["User"].isNull())
				beforeHbaItemsObject.user = valueHbaLogItemsHbaLogItemBeforeHbaItemsHbaItem["User"].asString();
			hbaLogItemsObject.beforeHbaItems.push_back(beforeHbaItemsObject);
		}
		hbaLogItems_.push_back(hbaLogItemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["LogItemCount"].isNull())
		logItemCount_ = std::stoi(value["LogItemCount"].asString());

}

int DescribeModifyPGHbaConfigLogResult::getLogItemCount()const
{
	return logItemCount_;
}

std::string DescribeModifyPGHbaConfigLogResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribeModifyPGHbaConfigLogResult::HbaLogItem> DescribeModifyPGHbaConfigLogResult::getHbaLogItems()const
{
	return hbaLogItems_;
}

