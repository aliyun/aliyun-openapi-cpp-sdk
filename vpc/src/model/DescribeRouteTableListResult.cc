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
		RouterTableListType routerTableListObject;
		if(!value["VpcId"].isNull())
			routerTableListObject.vpcId = value["VpcId"].asString();
		if(!value["RouterType"].isNull())
			routerTableListObject.routerType = value["RouterType"].asString();
		if(!value["RouterId"].isNull())
			routerTableListObject.routerId = value["RouterId"].asString();
		if(!value["RouteTableId"].isNull())
			routerTableListObject.routeTableId = value["RouteTableId"].asString();
		if(!value["RouteTableName"].isNull())
			routerTableListObject.routeTableName = value["RouteTableName"].asString();
		if(!value["RouteTableType"].isNull())
			routerTableListObject.routeTableType = value["RouteTableType"].asString();
		if(!value["Description"].isNull())
			routerTableListObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			routerTableListObject.creationTime = value["CreationTime"].asString();
		routerTableList_.push_back(routerTableListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRouteTableListResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeRouteTableListResult::getMessage()const
{
	return message_;
}

int DescribeRouteTableListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRouteTableListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRouteTableListResult::RouterTableListType> DescribeRouteTableListResult::getRouterTableList()const
{
	return routerTableList_;
}

std::string DescribeRouteTableListResult::getCode()const
{
	return code_;
}

bool DescribeRouteTableListResult::getSuccess()const
{
	return success_;
}

