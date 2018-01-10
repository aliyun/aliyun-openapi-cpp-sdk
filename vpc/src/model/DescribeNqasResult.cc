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

#include <alibabacloud/vpc/model/DescribeNqasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeNqasResult::DescribeNqasResult() :
	ServiceResult()
{}

DescribeNqasResult::DescribeNqasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNqasResult::~DescribeNqasResult()
{}

void DescribeNqasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allNqas = value["Nqas"]["Nqa"];
	for (auto value : allNqas)
	{
		Nqa nqaObject;
		nqaObject.nqaId = value["NqaId"].asString();
		nqaObject.regionId = value["RegionId"].asString();
		nqaObject.status = value["Status"].asString();
		nqaObject.routerId = value["RouterId"].asString();
		nqaObject.destinationIp = value["DestinationIp"].asString();
		nqas_.push_back(nqaObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeNqasResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeNqasResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeNqasResult::getPageSize()const
{
	return pageSize_;
}

void DescribeNqasResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeNqasResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeNqasResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

