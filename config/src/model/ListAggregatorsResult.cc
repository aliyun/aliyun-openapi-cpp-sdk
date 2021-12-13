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

#include <alibabacloud/config/model/ListAggregatorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListAggregatorsResult::ListAggregatorsResult() :
	ServiceResult()
{}

ListAggregatorsResult::ListAggregatorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAggregatorsResult::~ListAggregatorsResult()
{}

void ListAggregatorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto aggregatorsResultNode = value["AggregatorsResult"];
	if(!aggregatorsResultNode["NextToken"].isNull())
		aggregatorsResult_.nextToken = aggregatorsResultNode["NextToken"].asString();
	if(!aggregatorsResultNode["MaxResults"].isNull())
		aggregatorsResult_.maxResults = std::stoi(aggregatorsResultNode["MaxResults"].asString());
	auto allAggregatorsNode = aggregatorsResultNode["Aggregators"]["AggregatorsItem"];
	for (auto aggregatorsResultNodeAggregatorsAggregatorsItem : allAggregatorsNode)
	{
		AggregatorsResult::AggregatorsItem aggregatorsItemObject;
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorCreateTimestamp"].isNull())
			aggregatorsItemObject.aggregatorCreateTimestamp = std::stol(aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorCreateTimestamp"].asString());
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorAccountCount"].isNull())
			aggregatorsItemObject.aggregatorAccountCount = std::stol(aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorAccountCount"].asString());
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["Description"].isNull())
			aggregatorsItemObject.description = aggregatorsResultNodeAggregatorsAggregatorsItem["Description"].asString();
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorName"].isNull())
			aggregatorsItemObject.aggregatorName = aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorName"].asString();
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorStatus"].isNull())
			aggregatorsItemObject.aggregatorStatus = std::stoi(aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorStatus"].asString());
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorType"].isNull())
			aggregatorsItemObject.aggregatorType = aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorType"].asString();
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AccountId"].isNull())
			aggregatorsItemObject.accountId = std::stol(aggregatorsResultNodeAggregatorsAggregatorsItem["AccountId"].asString());
		if(!aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorId"].isNull())
			aggregatorsItemObject.aggregatorId = aggregatorsResultNodeAggregatorsAggregatorsItem["AggregatorId"].asString();
		aggregatorsResult_.aggregators.push_back(aggregatorsItemObject);
	}

}

ListAggregatorsResult::AggregatorsResult ListAggregatorsResult::getAggregatorsResult()const
{
	return aggregatorsResult_;
}

