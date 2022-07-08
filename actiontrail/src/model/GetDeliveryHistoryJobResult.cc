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

#include <alibabacloud/actiontrail/model/GetDeliveryHistoryJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

GetDeliveryHistoryJobResult::GetDeliveryHistoryJobResult() :
	ServiceResult()
{}

GetDeliveryHistoryJobResult::GetDeliveryHistoryJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDeliveryHistoryJobResult::~GetDeliveryHistoryJobResult()
{}

void GetDeliveryHistoryJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatusNode = value["Status"]["StatusItem"];
	for (auto valueStatusStatusItem : allStatusNode)
	{
		StatusItem statusObject;
		if(!valueStatusStatusItem["Status"].isNull())
			statusObject.status = std::stoi(valueStatusStatusItem["Status"].asString());
		if(!valueStatusStatusItem["Region"].isNull())
			statusObject.region = valueStatusStatusItem["Region"].asString();
		status_.push_back(statusObject);
	}
	if(!value["JobStatus"].isNull())
		jobStatus_ = std::stoi(value["JobStatus"].asString());
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TrailName"].isNull())
		trailName_ = value["TrailName"].asString();
	if(!value["UpdatedTime"].isNull())
		updatedTime_ = value["UpdatedTime"].asString();
	if(!value["JobId"].isNull())
		jobId_ = std::stol(value["JobId"].asString());
	if(!value["HomeRegion"].isNull())
		homeRegion_ = value["HomeRegion"].asString();

}

std::vector<GetDeliveryHistoryJobResult::StatusItem> GetDeliveryHistoryJobResult::getStatus()const
{
	return status_;
}

int GetDeliveryHistoryJobResult::getJobStatus()const
{
	return jobStatus_;
}

std::string GetDeliveryHistoryJobResult::getCreatedTime()const
{
	return createdTime_;
}

std::string GetDeliveryHistoryJobResult::getEndTime()const
{
	return endTime_;
}

std::string GetDeliveryHistoryJobResult::getHomeRegion()const
{
	return homeRegion_;
}

std::string GetDeliveryHistoryJobResult::getStartTime()const
{
	return startTime_;
}

std::string GetDeliveryHistoryJobResult::getTrailName()const
{
	return trailName_;
}

std::string GetDeliveryHistoryJobResult::getUpdatedTime()const
{
	return updatedTime_;
}

long GetDeliveryHistoryJobResult::getJobId()const
{
	return jobId_;
}

