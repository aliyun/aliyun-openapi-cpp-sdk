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

#include <alibabacloud/kms/model/ListApplicationAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListApplicationAccessPointsResult::ListApplicationAccessPointsResult() :
	ServiceResult()
{}

ListApplicationAccessPointsResult::ListApplicationAccessPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationAccessPointsResult::~ListApplicationAccessPointsResult()
{}

void ListApplicationAccessPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationAccessPointsNode = value["ApplicationAccessPoints"]["ApplicationAccessPoint"];
	for (auto valueApplicationAccessPointsApplicationAccessPoint : allApplicationAccessPointsNode)
	{
		ApplicationAccessPoint applicationAccessPointsObject;
		if(!valueApplicationAccessPointsApplicationAccessPoint["Name"].isNull())
			applicationAccessPointsObject.name = valueApplicationAccessPointsApplicationAccessPoint["Name"].asString();
		if(!valueApplicationAccessPointsApplicationAccessPoint["AuthenticationMethod"].isNull())
			applicationAccessPointsObject.authenticationMethod = valueApplicationAccessPointsApplicationAccessPoint["AuthenticationMethod"].asString();
		applicationAccessPoints_.push_back(applicationAccessPointsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListApplicationAccessPointsResult::getTotalCount()const
{
	return totalCount_;
}

int ListApplicationAccessPointsResult::getPageSize()const
{
	return pageSize_;
}

int ListApplicationAccessPointsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListApplicationAccessPointsResult::ApplicationAccessPoint> ListApplicationAccessPointsResult::getApplicationAccessPoints()const
{
	return applicationAccessPoints_;
}

