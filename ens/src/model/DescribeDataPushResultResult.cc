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

#include <alibabacloud/ens/model/DescribeDataPushResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeDataPushResultResult::DescribeDataPushResultResult() :
	ServiceResult()
{}

DescribeDataPushResultResult::DescribeDataPushResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataPushResultResult::~DescribeDataPushResultResult()
{}

void DescribeDataPushResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushResultsNode = value["PushResults"]["PushResult"];
	for (auto valuePushResultsPushResult : allPushResultsNode)
	{
		PushResult pushResultsObject;
		if(!valuePushResultsPushResult["Name"].isNull())
			pushResultsObject.name = valuePushResultsPushResult["Name"].asString();
		if(!valuePushResultsPushResult["Version"].isNull())
			pushResultsObject.version = valuePushResultsPushResult["Version"].asString();
		auto allStatusStatSNode = valuePushResultsPushResult["StatusStatS"]["StatusStat"];
		for (auto valuePushResultsPushResultStatusStatSStatusStat : allStatusStatSNode)
		{
			PushResult::StatusStat statusStatSObject;
			if(!valuePushResultsPushResultStatusStatSStatusStat["RegionIdCount"].isNull())
				statusStatSObject.regionIdCount = std::stoi(valuePushResultsPushResultStatusStatSStatusStat["RegionIdCount"].asString());
			if(!valuePushResultsPushResultStatusStatSStatusStat["Status"].isNull())
				statusStatSObject.status = valuePushResultsPushResultStatusStatSStatusStat["Status"].asString();
			auto allRegionIdsNode = valuePushResultsPushResultStatusStatSStatusStat["RegionIds"]["RegionId"];
			for (auto valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId : allRegionIdsNode)
			{
				PushResult::StatusStat::RegionId regionIdsObject;
				if(!valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["RegionId"].isNull())
					regionIdsObject.regionId = valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["RegionId"].asString();
				if(!valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["StartTime"].isNull())
					regionIdsObject.startTime = valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["StartTime"].asString();
				if(!valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["StatusDescrip"].isNull())
					regionIdsObject.statusDescrip = valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["StatusDescrip"].asString();
				if(!valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["UpdateTime"].isNull())
					regionIdsObject.updateTime = valuePushResultsPushResultStatusStatSStatusStatRegionIdsRegionId["UpdateTime"].asString();
				statusStatSObject.regionIds.push_back(regionIdsObject);
			}
			pushResultsObject.statusStatS.push_back(statusStatSObject);
		}
		pushResults_.push_back(pushResultsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataPushResultResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataPushResultResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataPushResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDataPushResultResult::PushResult> DescribeDataPushResultResult::getPushResults()const
{
	return pushResults_;
}

