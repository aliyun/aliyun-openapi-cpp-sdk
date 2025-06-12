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

#include <alibabacloud/clickhouse/model/DescribeSynDbsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeSynDbsResult::DescribeSynDbsResult() :
	ServiceResult()
{}

DescribeSynDbsResult::DescribeSynDbsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSynDbsResult::~DescribeSynDbsResult()
{}

void DescribeSynDbsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSynDbsNode = value["SynDbs"]["SynDb"];
	for (auto valueSynDbsSynDb : allSynDbsNode)
	{
		SynDb synDbsObject;
		if(!valueSynDbsSynDb["RdsId"].isNull())
			synDbsObject.rdsId = valueSynDbsSynDb["RdsId"].asString();
		if(!valueSynDbsSynDb["SynDb"].isNull())
			synDbsObject.synDb = valueSynDbsSynDb["SynDb"].asString();
		if(!valueSynDbsSynDb["SynStatus"].isNull())
			synDbsObject.synStatus = valueSynDbsSynDb["SynStatus"].asString() == "true";
		if(!valueSynDbsSynDb["ErrorMsg"].isNull())
			synDbsObject.errorMsg = valueSynDbsSynDb["ErrorMsg"].asString();
		if(!valueSynDbsSynDb["RdsUserName"].isNull())
			synDbsObject.rdsUserName = valueSynDbsSynDb["RdsUserName"].asString();
		if(!valueSynDbsSynDb["RdsPassword"].isNull())
			synDbsObject.rdsPassword = valueSynDbsSynDb["RdsPassword"].asString();
		if(!valueSynDbsSynDb["RdsVpcUrl"].isNull())
			synDbsObject.rdsVpcUrl = valueSynDbsSynDb["RdsVpcUrl"].asString();
		synDbs_.push_back(synDbsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeSynDbsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeSynDbsResult::SynDb> DescribeSynDbsResult::getSynDbs()const
{
	return synDbs_;
}

int DescribeSynDbsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSynDbsResult::getPageNumber()const
{
	return pageNumber_;
}

