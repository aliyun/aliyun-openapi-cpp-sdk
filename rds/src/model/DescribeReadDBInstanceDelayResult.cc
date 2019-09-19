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

#include <alibabacloud/rds/model/DescribeReadDBInstanceDelayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeReadDBInstanceDelayResult::DescribeReadDBInstanceDelayResult() :
	ServiceResult()
{}

DescribeReadDBInstanceDelayResult::DescribeReadDBInstanceDelayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReadDBInstanceDelayResult::~DescribeReadDBInstanceDelayResult()
{}

void DescribeReadDBInstanceDelayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsItemsItem["DBInstanceId"].asString();
		auto allReadonlyInstanceDelayNode = allItemsNode["ReadonlyInstanceDelay"]["ReadonlyInstanceDelayItem"];
		for (auto allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem : allReadonlyInstanceDelayNode)
		{
			ItemsItem::ReadonlyInstanceDelayItem readonlyInstanceDelayObject;
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["ReplayLatency"].isNull())
				readonlyInstanceDelayObject.replayLatency = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["ReplayLatency"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["FlushLag"].isNull())
				readonlyInstanceDelayObject.flushLag = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["FlushLag"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["FlushLatency"].isNull())
				readonlyInstanceDelayObject.flushLatency = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["FlushLatency"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["SendLatency"].isNull())
				readonlyInstanceDelayObject.sendLatency = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["SendLatency"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["WriteLag"].isNull())
				readonlyInstanceDelayObject.writeLag = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["WriteLag"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["ReplayLag"].isNull())
				readonlyInstanceDelayObject.replayLag = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["ReplayLag"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["WriteLatency"].isNull())
				readonlyInstanceDelayObject.writeLatency = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["WriteLatency"].asString();
			if(!allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["ReadDBInstanceName"].isNull())
				readonlyInstanceDelayObject.readDBInstanceName = allItemsNodeReadonlyInstanceDelayReadonlyInstanceDelayItem["ReadDBInstanceName"].asString();
			itemsObject.readonlyInstanceDelay.push_back(readonlyInstanceDelayObject);
		}
		auto allReadDBInstanceNames = value["ReadDBInstanceNames"]["ReadDBInstanceName"];
		for (auto value : allReadDBInstanceNames)
			itemsObject.readDBInstanceNames.push_back(value.asString());
		auto allReadDelayTimes = value["ReadDelayTimes"]["ReadDelayTime"];
		for (auto value : allReadDelayTimes)
			itemsObject.readDelayTimes.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["ReadDBInstanceId"].isNull())
		readDBInstanceId_ = value["ReadDBInstanceId"].asString();
	if(!value["DelayTime"].isNull())
		delayTime_ = std::stoi(value["DelayTime"].asString());

}

std::string DescribeReadDBInstanceDelayResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeReadDBInstanceDelayResult::getReadDBInstanceId()const
{
	return readDBInstanceId_;
}

std::vector<DescribeReadDBInstanceDelayResult::ItemsItem> DescribeReadDBInstanceDelayResult::getItems()const
{
	return items_;
}

int DescribeReadDBInstanceDelayResult::getDelayTime()const
{
	return delayTime_;
}

