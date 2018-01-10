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

#include <alibabacloud/vpc/model/DescribeRouteTableListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeRouteTableListResult::DescribeRouteTableListResult() :
	ServiceResult()
{}

DescribeRouteTableListResult::DescribeRouteTableListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouteTableListResult::~DescribeRouteTableListResult()
{}

void DescribeRouteTableListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRouterTableList = value["RouterTableList"]["RouterTableListType"];
	for (auto value : allRouterTableList)
	{
		RouterTableListType routerTableListTypeObject;
		routerTableListTypeObject.vpcId = value["VpcId"].asString();
		routerTableListTypeObject.routerType = value["RouterType"].asString();
		routerTableListTypeObject.routerId = value["RouterId"].asString();
		routerTableListTypeObject.routeTableId = value["RouteTableId"].asString();
		routerTableListTypeObject.routeTableName = value["RouteTableName"].asString();
		routerTableListTypeObject.routeTableType = value["RouteTableType"].asString();
		routerTableListTypeObject.description = value["Description"].asString();
		routerTableListTypeObject.creationTime = value["CreationTime"].asString();
		routerTableList_.push_back(routerTableListTypeObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	success_ = std::stoi(value["Success"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouteTableListResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeRouteTableListResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeRouteTableListResult::getMessage()const
{
	return message_;
}

void DescribeRouteTableListResult::setMessage(const std::string& message)
{
	message_ = message;
}

int DescribeRouteTableListResult::getPageSize()const
{
	return pageSize_;
}

void DescribeRouteTableListResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeRouteTableListResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouteTableListResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeRouteTableListResult::getCode()const
{
	return code_;
}

void DescribeRouteTableListResult::setCode(const std::string& code)
{
	code_ = code;
}

bool DescribeRouteTableListResult::getSuccess()const
{
	return success_;
}

void DescribeRouteTableListResult::setSuccess(bool success)
{
	success_ = success;
}

