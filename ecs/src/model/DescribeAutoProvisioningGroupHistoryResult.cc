<<<<<<< HEAD
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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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
>>>>>>> master
	auto allAutoProvisioningGroupHistories = value["AutoProvisioningGroupHistories"]["AutoProvisioningGroupHistory"];
	for (auto value : allAutoProvisioningGroupHistories)
	{
		AutoProvisioningGroupHistory autoProvisioningGroupHistoriesObject;
		if(!value["TaskId"].isNull())
			autoProvisioningGroupHistoriesObject.taskId = value["TaskId"].asString();
		if(!value["Status"].isNull())
			autoProvisioningGroupHistoriesObject.status = value["Status"].asString();
		if(!value["LastEventTime"].isNull())
			autoProvisioningGroupHistoriesObject.lastEventTime = value["LastEventTime"].asString();
		if(!value["StartTime"].isNull())
			autoProvisioningGroupHistoriesObject.startTime = value["StartTime"].asString();
		auto allActivityDetails = value["ActivityDetails"]["ActivityDetail"];
		for (auto value : allActivityDetails)
		{
			AutoProvisioningGroupHistory::ActivityDetail activityDetailsObject;
			if(!value["Detail"].isNull())
				activityDetailsObject.detail = value["Detail"].asString();
			if(!value["Status"].isNull())
				activityDetailsObject.status = value["Status"].asString();
			autoProvisioningGroupHistoriesObject.activityDetails.push_back(activityDetailsObject);
		}
		autoProvisioningGroupHistories_.push_back(autoProvisioningGroupHistoriesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
<<<<<<< HEAD

}

=======

}

>>>>>>> master
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

