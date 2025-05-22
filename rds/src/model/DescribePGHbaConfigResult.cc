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

#include <alibabacloud/rds/model/DescribePGHbaConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribePGHbaConfigResult::DescribePGHbaConfigResult() :
	ServiceResult()
{}

DescribePGHbaConfigResult::DescribePGHbaConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePGHbaConfigResult::~DescribePGHbaConfigResult()
{}

void DescribePGHbaConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDefaultHbaItemsNode = value["DefaultHbaItems"]["HbaItem"];
	for (auto valueDefaultHbaItemsHbaItem : allDefaultHbaItemsNode)
	{
		HbaItem defaultHbaItemsObject;
		if(!valueDefaultHbaItemsHbaItem["Address"].isNull())
			defaultHbaItemsObject.address = valueDefaultHbaItemsHbaItem["Address"].asString();
		if(!valueDefaultHbaItemsHbaItem["Database"].isNull())
			defaultHbaItemsObject.database = valueDefaultHbaItemsHbaItem["Database"].asString();
		if(!valueDefaultHbaItemsHbaItem["Mask"].isNull())
			defaultHbaItemsObject.mask = valueDefaultHbaItemsHbaItem["Mask"].asString();
		if(!valueDefaultHbaItemsHbaItem["Method"].isNull())
			defaultHbaItemsObject.method = valueDefaultHbaItemsHbaItem["Method"].asString();
		if(!valueDefaultHbaItemsHbaItem["Option"].isNull())
			defaultHbaItemsObject.option = valueDefaultHbaItemsHbaItem["Option"].asString();
		if(!valueDefaultHbaItemsHbaItem["PriorityId"].isNull())
			defaultHbaItemsObject.priorityId = std::stoi(valueDefaultHbaItemsHbaItem["PriorityId"].asString());
		if(!valueDefaultHbaItemsHbaItem["Type"].isNull())
			defaultHbaItemsObject.type = valueDefaultHbaItemsHbaItem["Type"].asString();
		if(!valueDefaultHbaItemsHbaItem["User"].isNull())
			defaultHbaItemsObject.user = valueDefaultHbaItemsHbaItem["User"].asString();
		defaultHbaItems_.push_back(defaultHbaItemsObject);
	}
	auto allRunningHbaItemsNode = value["RunningHbaItems"]["HbaItem"];
	for (auto valueRunningHbaItemsHbaItem : allRunningHbaItemsNode)
	{
		HbaItem runningHbaItemsObject;
		if(!valueRunningHbaItemsHbaItem["Address"].isNull())
			runningHbaItemsObject.address = valueRunningHbaItemsHbaItem["Address"].asString();
		if(!valueRunningHbaItemsHbaItem["Database"].isNull())
			runningHbaItemsObject.database = valueRunningHbaItemsHbaItem["Database"].asString();
		if(!valueRunningHbaItemsHbaItem["Mask"].isNull())
			runningHbaItemsObject.mask = valueRunningHbaItemsHbaItem["Mask"].asString();
		if(!valueRunningHbaItemsHbaItem["Method"].isNull())
			runningHbaItemsObject.method = valueRunningHbaItemsHbaItem["Method"].asString();
		if(!valueRunningHbaItemsHbaItem["Option"].isNull())
			runningHbaItemsObject.option = valueRunningHbaItemsHbaItem["Option"].asString();
		if(!valueRunningHbaItemsHbaItem["PriorityId"].isNull())
			runningHbaItemsObject.priorityId = std::stoi(valueRunningHbaItemsHbaItem["PriorityId"].asString());
		if(!valueRunningHbaItemsHbaItem["Type"].isNull())
			runningHbaItemsObject.type = valueRunningHbaItemsHbaItem["Type"].asString();
		if(!valueRunningHbaItemsHbaItem["User"].isNull())
			runningHbaItemsObject.user = valueRunningHbaItemsHbaItem["User"].asString();
		runningHbaItems_.push_back(runningHbaItemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["HbaModifyTime"].isNull())
		hbaModifyTime_ = value["HbaModifyTime"].asString();
	if(!value["LastModifyStatus"].isNull())
		lastModifyStatus_ = value["LastModifyStatus"].asString();
	if(!value["ModifyStatusReason"].isNull())
		modifyStatusReason_ = value["ModifyStatusReason"].asString();

}

std::vector<DescribePGHbaConfigResult::HbaItem> DescribePGHbaConfigResult::getDefaultHbaItems()const
{
	return defaultHbaItems_;
}

std::string DescribePGHbaConfigResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribePGHbaConfigResult::getHbaModifyTime()const
{
	return hbaModifyTime_;
}

std::string DescribePGHbaConfigResult::getLastModifyStatus()const
{
	return lastModifyStatus_;
}

std::vector<DescribePGHbaConfigResult::HbaItem> DescribePGHbaConfigResult::getRunningHbaItems()const
{
	return runningHbaItems_;
}

std::string DescribePGHbaConfigResult::getModifyStatusReason()const
{
	return modifyStatusReason_;
}

