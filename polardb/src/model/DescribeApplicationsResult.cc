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

#include <alibabacloud/polardb/model/DescribeApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeApplicationsResult::DescribeApplicationsResult() :
	ServiceResult()
{}

DescribeApplicationsResult::DescribeApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationsResult::~DescribeApplicationsResult()
{}

void DescribeApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Applications"];
	for (auto valueItemsApplications : allItemsNode)
	{
		Applications itemsObject;
		if(!valueItemsApplications["Status"].isNull())
			itemsObject.status = valueItemsApplications["Status"].asString();
		if(!valueItemsApplications["Description"].isNull())
			itemsObject.description = valueItemsApplications["Description"].asString();
		if(!valueItemsApplications["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsApplications["EngineVersion"].asString();
		if(!valueItemsApplications["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsApplications["ZoneId"].asString();
		if(!valueItemsApplications["Expired"].isNull())
			itemsObject.expired = valueItemsApplications["Expired"].asString();
		if(!valueItemsApplications["PayType"].isNull())
			itemsObject.payType = valueItemsApplications["PayType"].asString();
		if(!valueItemsApplications["PolarFSInstanceId"].isNull())
			itemsObject.polarFSInstanceId = valueItemsApplications["PolarFSInstanceId"].asString();
		if(!valueItemsApplications["ApplicationType"].isNull())
			itemsObject.applicationType = valueItemsApplications["ApplicationType"].asString();
		if(!valueItemsApplications["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsApplications["CreationTime"].asString();
		if(!valueItemsApplications["RegionId"].isNull())
			itemsObject.regionId = valueItemsApplications["RegionId"].asString();
		if(!valueItemsApplications["ApplicationId"].isNull())
			itemsObject.applicationId = valueItemsApplications["ApplicationId"].asString();
		if(!valueItemsApplications["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsApplications["ExpireTime"].asString();
		auto allEndpointsNode = valueItemsApplications["Endpoints"]["endpoint"];
		for (auto valueItemsApplicationsEndpointsendpoint : allEndpointsNode)
		{
			Applications::Endpoint endpointsObject;
			if(!valueItemsApplicationsEndpointsendpoint["IP"].isNull())
				endpointsObject.iP = valueItemsApplicationsEndpointsendpoint["IP"].asString();
			if(!valueItemsApplicationsEndpointsendpoint["Port"].isNull())
				endpointsObject.port = valueItemsApplicationsEndpointsendpoint["Port"].asString();
			if(!valueItemsApplicationsEndpointsendpoint["NetType"].isNull())
				endpointsObject.netType = valueItemsApplicationsEndpointsendpoint["NetType"].asString();
			itemsObject.endpoints.push_back(endpointsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeApplicationsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeApplicationsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeApplicationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeApplicationsResult::Applications> DescribeApplicationsResult::getItems()const
{
	return items_;
}

