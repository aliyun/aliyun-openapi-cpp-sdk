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

#include <alibabacloud/vpc/model/DescribeAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

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
		AccessPointType accessPointTypeObject;
		accessPointTypeObject.accessPointId = value["AccessPointId"].asString();
		accessPointTypeObject.status = value["Status"].asString();
		accessPointTypeObject.type = value["Type"].asString();
		accessPointTypeObject.attachedRegionNo = value["AttachedRegionNo"].asString();
		accessPointTypeObject.location = value["Location"].asString();
		accessPointTypeObject.hostOperator = value["HostOperator"].asString();
		accessPointTypeObject.name = value["Name"].asString();
		accessPointTypeObject.description = value["Description"].asString();
		accessPointSet_.push_back(accessPointTypeObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAccessPointsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeAccessPointsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeAccessPointsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeAccessPointsResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeAccessPointsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAccessPointsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

