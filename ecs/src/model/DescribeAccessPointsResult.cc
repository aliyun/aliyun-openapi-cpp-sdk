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

#include <alibabacloud/ecs/model/DescribeAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAccessPointsResult::DescribeAccessPointsResult() :
	ServiceResult()
{}

DescribeAccessPointsResult::DescribeAccessPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessPointsResult::~DescribeAccessPointsResult()
{}

void DescribeAccessPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAccessPointSet = value["AccessPointSet"]["AccessPointType"];
	for (auto value : allAccessPointSet)
	{
		AccessPointType accessPointSetObject;
		if(!value["AccessPointId"].isNull())
			accessPointSetObject.accessPointId = value["AccessPointId"].asString();
		if(!value["Status"].isNull())
			accessPointSetObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			accessPointSetObject.type = value["Type"].asString();
		if(!value["AttachedRegionNo"].isNull())
			accessPointSetObject.attachedRegionNo = value["AttachedRegionNo"].asString();
		if(!value["Location"].isNull())
			accessPointSetObject.location = value["Location"].asString();
		if(!value["HostOperator"].isNull())
			accessPointSetObject.hostOperator = value["HostOperator"].asString();
		if(!value["Name"].isNull())
			accessPointSetObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			accessPointSetObject.description = value["Description"].asString();
		accessPointSet_.push_back(accessPointSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeAccessPointsResult::AccessPointType> DescribeAccessPointsResult::getAccessPointSet()const
{
	return accessPointSet_;
}

int DescribeAccessPointsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccessPointsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccessPointsResult::getPageNumber()const
{
	return pageNumber_;
}

