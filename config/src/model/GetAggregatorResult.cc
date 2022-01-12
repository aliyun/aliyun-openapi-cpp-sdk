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

#include <alibabacloud/config/model/GetAggregatorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregatorResult::GetAggregatorResult() :
	ServiceResult()
{}

GetAggregatorResult::GetAggregatorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregatorResult::~GetAggregatorResult()
{}

void GetAggregatorResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto aggregatorNode = value["Aggregator"];
	if(!aggregatorNode["AggregatorCreateTimestamp"].isNull())
		aggregator_.aggregatorCreateTimestamp = aggregatorNode["AggregatorCreateTimestamp"].asString();
	if(!aggregatorNode["AggregatorAccountCount"].isNull())
		aggregator_.aggregatorAccountCount = std::stol(aggregatorNode["AggregatorAccountCount"].asString());
	if(!aggregatorNode["Description"].isNull())
		aggregator_.description = aggregatorNode["Description"].asString();
	if(!aggregatorNode["AggregatorName"].isNull())
		aggregator_.aggregatorName = aggregatorNode["AggregatorName"].asString();
	if(!aggregatorNode["AggregatorStatus"].isNull())
		aggregator_.aggregatorStatus = std::stoi(aggregatorNode["AggregatorStatus"].asString());
	if(!aggregatorNode["AggregatorType"].isNull())
		aggregator_.aggregatorType = aggregatorNode["AggregatorType"].asString();
	if(!aggregatorNode["AccountId"].isNull())
		aggregator_.accountId = std::stol(aggregatorNode["AccountId"].asString());
	if(!aggregatorNode["AggregatorId"].isNull())
		aggregator_.aggregatorId = aggregatorNode["AggregatorId"].asString();
	auto allAggregatorAccountsNode = aggregatorNode["AggregatorAccounts"]["AggregatorAccountsItem"];
	for (auto aggregatorNodeAggregatorAccountsAggregatorAccountsItem : allAggregatorAccountsNode)
	{
		Aggregator::AggregatorAccountsItem aggregatorAccountsItemObject;
		if(!aggregatorNodeAggregatorAccountsAggregatorAccountsItem["RecorderStatus"].isNull())
			aggregatorAccountsItemObject.recorderStatus = aggregatorNodeAggregatorAccountsAggregatorAccountsItem["RecorderStatus"].asString();
		if(!aggregatorNodeAggregatorAccountsAggregatorAccountsItem["AccountId"].isNull())
			aggregatorAccountsItemObject.accountId = std::stol(aggregatorNodeAggregatorAccountsAggregatorAccountsItem["AccountId"].asString());
		if(!aggregatorNodeAggregatorAccountsAggregatorAccountsItem["AccountType"].isNull())
			aggregatorAccountsItemObject.accountType = aggregatorNodeAggregatorAccountsAggregatorAccountsItem["AccountType"].asString();
		if(!aggregatorNodeAggregatorAccountsAggregatorAccountsItem["AccountName"].isNull())
			aggregatorAccountsItemObject.accountName = aggregatorNodeAggregatorAccountsAggregatorAccountsItem["AccountName"].asString();
		aggregator_.aggregatorAccounts.push_back(aggregatorAccountsItemObject);
	}

}

GetAggregatorResult::Aggregator GetAggregatorResult::getAggregator()const
{
	return aggregator_;
}

