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

#include <alibabacloud/ecd/model/ListOfficeSiteOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ListOfficeSiteOverviewResult::ListOfficeSiteOverviewResult() :
	ServiceResult()
{}

ListOfficeSiteOverviewResult::ListOfficeSiteOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOfficeSiteOverviewResult::~ListOfficeSiteOverviewResult()
{}

void ListOfficeSiteOverviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOfficeSiteOverviewResultsNode = value["OfficeSiteOverviewResults"]["OfficeSiteOverviewResult"];
	for (auto valueOfficeSiteOverviewResultsOfficeSiteOverviewResult : allOfficeSiteOverviewResultsNode)
	{
		OfficeSiteOverviewResult officeSiteOverviewResultsObject;
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["OfficeSiteStatus"].isNull())
			officeSiteOverviewResultsObject.officeSiteStatus = valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["OfficeSiteStatus"].asString();
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["TotalEdsCount"].isNull())
			officeSiteOverviewResultsObject.totalEdsCount = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["TotalEdsCount"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["TotalEdsCountForGroup"].isNull())
			officeSiteOverviewResultsObject.totalEdsCountForGroup = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["TotalEdsCountForGroup"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["WillExpiredEdsCount"].isNull())
			officeSiteOverviewResultsObject.willExpiredEdsCount = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["WillExpiredEdsCount"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["WillExpiredEdsCountForGroup"].isNull())
			officeSiteOverviewResultsObject.willExpiredEdsCountForGroup = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["WillExpiredEdsCountForGroup"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["OfficeSiteId"].isNull())
			officeSiteOverviewResultsObject.officeSiteId = valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["OfficeSiteId"].asString();
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["RunningEdsCount"].isNull())
			officeSiteOverviewResultsObject.runningEdsCount = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["RunningEdsCount"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["RunningEdsCountForGroup"].isNull())
			officeSiteOverviewResultsObject.runningEdsCountForGroup = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["RunningEdsCountForGroup"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["OfficeSiteName"].isNull())
			officeSiteOverviewResultsObject.officeSiteName = valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["OfficeSiteName"].asString();
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["VpcType"].isNull())
			officeSiteOverviewResultsObject.vpcType = valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["VpcType"].asString();
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["HasExpiredEdsCount"].isNull())
			officeSiteOverviewResultsObject.hasExpiredEdsCount = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["HasExpiredEdsCount"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["HasExpiredEdsCountForGroup"].isNull())
			officeSiteOverviewResultsObject.hasExpiredEdsCountForGroup = std::stoi(valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["HasExpiredEdsCountForGroup"].asString());
		if(!valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["RegionId"].isNull())
			officeSiteOverviewResultsObject.regionId = valueOfficeSiteOverviewResultsOfficeSiteOverviewResult["RegionId"].asString();
		officeSiteOverviewResults_.push_back(officeSiteOverviewResultsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListOfficeSiteOverviewResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListOfficeSiteOverviewResult::OfficeSiteOverviewResult> ListOfficeSiteOverviewResult::getOfficeSiteOverviewResults()const
{
	return officeSiteOverviewResults_;
}

