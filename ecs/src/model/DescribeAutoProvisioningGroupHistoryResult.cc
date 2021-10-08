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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoProvisioningGroupHistoryResult::DescribeAutoProvisioningGroupHistoryResult() :
	ServiceResult()
{}

DescribeAutoProvisioningGroupHistoryResult::DescribeAutoProvisioningGroupHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoProvisioningGroupHistoryResult::~DescribeAutoProvisioningGroupHistoryResult()
{}

void DescribeAutoProvisioningGroupHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAutoProvisioningGroupHistoriesNode = value["AutoProvisioningGroupHistories"]["AutoProvisioningGroupHistory"];
	for (auto valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory : allAutoProvisioningGroupHistoriesNode)
	{
		AutoProvisioningGroupHistory autoProvisioningGroupHistoriesObject;
		if(!valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["Status"].isNull())
			autoProvisioningGroupHistoriesObject.status = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["Status"].asString();
		if(!valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["StartTime"].isNull())
			autoProvisioningGroupHistoriesObject.startTime = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["StartTime"].asString();
		if(!valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["TaskId"].isNull())
			autoProvisioningGroupHistoriesObject.taskId = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["TaskId"].asString();
		if(!valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["LastEventTime"].isNull())
			autoProvisioningGroupHistoriesObject.lastEventTime = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["LastEventTime"].asString();
		auto allActivityDetailsNode = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistory["ActivityDetails"]["ActivityDetail"];
		for (auto valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistoryActivityDetailsActivityDetail : allActivityDetailsNode)
		{
			AutoProvisioningGroupHistory::ActivityDetail activityDetailsObject;
			if(!valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistoryActivityDetailsActivityDetail["Status"].isNull())
				activityDetailsObject.status = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistoryActivityDetailsActivityDetail["Status"].asString();
			if(!valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistoryActivityDetailsActivityDetail["Detail"].isNull())
				activityDetailsObject.detail = valueAutoProvisioningGroupHistoriesAutoProvisioningGroupHistoryActivityDetailsActivityDetail["Detail"].asString();
			autoProvisioningGroupHistoriesObject.activityDetails.push_back(activityDetailsObject);
		}
		autoProvisioningGroupHistories_.push_back(autoProvisioningGroupHistoriesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAutoProvisioningGroupHistoryResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoProvisioningGroupHistoryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoProvisioningGroupHistoryResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoProvisioningGroupHistoryResult::AutoProvisioningGroupHistory> DescribeAutoProvisioningGroupHistoryResult::getAutoProvisioningGroupHistories()const
{
	return autoProvisioningGroupHistories_;
}

