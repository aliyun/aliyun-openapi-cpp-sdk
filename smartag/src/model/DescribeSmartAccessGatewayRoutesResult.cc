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

#include <alibabacloud/smartag/model/DescribeSmartAccessGatewayRoutesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSmartAccessGatewayRoutesResult::DescribeSmartAccessGatewayRoutesResult() :
	ServiceResult()
{}

DescribeSmartAccessGatewayRoutesResult::DescribeSmartAccessGatewayRoutesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSmartAccessGatewayRoutesResult::~DescribeSmartAccessGatewayRoutesResult()
{}

void DescribeSmartAccessGatewayRoutesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRoutes = value["Routes"]["Route"];
	for (auto value : allRoutes)
	{
		Route routesObject;
		if(!value["SourceInstanceId"].isNull())
			routesObject.sourceInstanceId = value["SourceInstanceId"].asString();
		if(!value["DestCidr"].isNull())
			routesObject.destCidr = value["DestCidr"].asString();
		if(!value["State"].isNull())
			routesObject.state = value["State"].asString();
		if(!value["RouteSource"].isNull())
			routesObject.routeSource = value["RouteSource"].asString();
		if(!value["SourceType"].isNull())
			routesObject.sourceType = value["SourceType"].asString();
		if(!value["ConflictInfo"].isNull())
			routesObject.conflictInfo = value["ConflictInfo"].asString();
		routes_.push_back(routesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNubmer"].isNull())
		pageNubmer_ = std::stoi(value["PageNubmer"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSmartAccessGatewayRoutesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSmartAccessGatewayRoutesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSmartAccessGatewayRoutesResult::getPageNubmer()const
{
	return pageNubmer_;
}

std::vector<DescribeSmartAccessGatewayRoutesResult::Route> DescribeSmartAccessGatewayRoutesResult::getRoutes()const
{
	return routes_;
}

