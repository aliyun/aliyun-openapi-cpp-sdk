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

#include <alibabacloud/swas-open/model/ListInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListInstanceStatusResult::ListInstanceStatusResult() :
	ServiceResult()
{}

ListInstanceStatusResult::ListInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceStatusResult::~ListInstanceStatusResult()
{}

void ListInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceStatusesNode = value["InstanceStatuses"]["InstanceStatuse"];
	for (auto valueInstanceStatusesInstanceStatuse : allInstanceStatusesNode)
	{
		InstanceStatuse instanceStatusesObject;
		if(!valueInstanceStatusesInstanceStatuse["Status"].isNull())
			instanceStatusesObject.status = valueInstanceStatusesInstanceStatuse["Status"].asString();
		if(!valueInstanceStatusesInstanceStatuse["InstanceId"].isNull())
			instanceStatusesObject.instanceId = valueInstanceStatusesInstanceStatuse["InstanceId"].asString();
		instanceStatuses_.push_back(instanceStatusesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListInstanceStatusResult::getTotalCount()const
{
	return totalCount_;
}

int ListInstanceStatusResult::getPageSize()const
{
	return pageSize_;
}

int ListInstanceStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListInstanceStatusResult::InstanceStatuse> ListInstanceStatusResult::getInstanceStatuses()const
{
	return instanceStatuses_;
}

