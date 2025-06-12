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

#include <alibabacloud/clickhouse/model/DescribeConfigHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeConfigHistoryResult::DescribeConfigHistoryResult() :
	ServiceResult()
{}

DescribeConfigHistoryResult::DescribeConfigHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConfigHistoryResult::~DescribeConfigHistoryResult()
{}

void DescribeConfigHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigHistoryItemsNode = value["ConfigHistoryItems"]["ConfigHistoryItem"];
	for (auto valueConfigHistoryItemsConfigHistoryItem : allConfigHistoryItemsNode)
	{
		ConfigHistoryItem configHistoryItemsObject;
		if(!valueConfigHistoryItemsConfigHistoryItem["Time"].isNull())
			configHistoryItemsObject.time = valueConfigHistoryItemsConfigHistoryItem["Time"].asString();
		if(!valueConfigHistoryItemsConfigHistoryItem["OwnerId"].isNull())
			configHistoryItemsObject.ownerId = valueConfigHistoryItemsConfigHistoryItem["OwnerId"].asString();
		if(!valueConfigHistoryItemsConfigHistoryItem["Reason"].isNull())
			configHistoryItemsObject.reason = valueConfigHistoryItemsConfigHistoryItem["Reason"].asString();
		if(!valueConfigHistoryItemsConfigHistoryItem["Success"].isNull())
			configHistoryItemsObject.success = valueConfigHistoryItemsConfigHistoryItem["Success"].asString() == "true";
		if(!valueConfigHistoryItemsConfigHistoryItem["ChangeId"].isNull())
			configHistoryItemsObject.changeId = valueConfigHistoryItemsConfigHistoryItem["ChangeId"].asString();
		configHistoryItems_.push_back(configHistoryItemsObject);
	}

}

std::vector<DescribeConfigHistoryResult::ConfigHistoryItem> DescribeConfigHistoryResult::getConfigHistoryItems()const
{
	return configHistoryItems_;
}

