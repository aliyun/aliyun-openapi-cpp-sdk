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

#include <alibabacloud/vpc/model/DescribeRouterInterfacesForGlobalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeRouterInterfacesForGlobalResult::DescribeRouterInterfacesForGlobalResult() :
	ServiceResult()
{}

DescribeRouterInterfacesForGlobalResult::DescribeRouterInterfacesForGlobalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRouterInterfacesForGlobalResult::~DescribeRouterInterfacesForGlobalResult()
{}

void DescribeRouterInterfacesForGlobalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRouterInterfaceSet = value["RouterInterfaceSet"]["RouterInterfaceType"];
	for (auto value : allRouterInterfaceSet)
	{
		RouterInterfaceType routerInterfaceTypeObject;
		routerInterfaceTypeObject.businessStatus = value["BusinessStatus"].asString();
		routerInterfaceTypeObject.accessPointId = value["AccessPointId"].asString();
		routerInterfaceTypeObject.chargeType = value["ChargeType"].asString();
		routerInterfaceTypeObject.connectedTime = value["ConnectedTime"].asString();
		routerInterfaceTypeObject.creationTime = value["CreationTime"].asString();
		routerInterfaceTypeObject.routerInterfaceId = value["RouterInterfaceId"].asString();
		routerInterfaceTypeObject.oppositeInterfaceBusinessStatus = value["OppositeInterfaceBusinessStatus"].asString();
		routerInterfaceTypeObject.oppositeInterfaceId = value["OppositeInterfaceId"].asString();
		routerInterfaceTypeObject.oppositeInterfaceOwnerId = std::stol(value["OppositeInterfaceOwnerId"].asString());
		routerInterfaceTypeObject.oppositeInterfaceSpec = value["OppositeInterfaceSpec"].asString();
		routerInterfaceTypeObject.oppositeInterfaceStatus = value["OppositeInterfaceStatus"].asString();
		routerInterfaceTypeObject.oppositeRegionId = value["OppositeRegionId"].asString();
		routerInterfaceTypeObject.oppositeAccessPointId = value["OppositeAccessPointId"].asString();
		routerInterfaceTypeObject.oppositeRouterId = value["OppositeRouterId"].asString();
		routerInterfaceTypeObject.oppositeRouterType = value["OppositeRouterType"].asString();
		routerInterfaceTypeObject.oppositeVpcInstanceId = value["OppositeVpcInstanceId"].asString();
		routerInterfaceTypeObject.regionId = value["RegionId"].asString();
		routerInterfaceTypeObject.role = value["Role"].asString();
		routerInterfaceTypeObject.routerId = value["RouterId"].asString();
		routerInterfaceTypeObject.routerType = value["RouterType"].asString();
		routerInterfaceTypeObject.spec = value["Spec"].asString();
		routerInterfaceTypeObject.status = value["Status"].asString();
		routerInterfaceTypeObject.vpcInstanceId = value["VpcInstanceId"].asString();
		routerInterfaceTypeObject.name = value["Name"].asString();
		routerInterfaceTypeObject.description = value["Description"].asString();
		routerInterfaceTypeObject.healthCheckSourceIp = value["HealthCheckSourceIp"].asString();
		routerInterfaceTypeObject.healthCheckTargetIp = value["HealthCheckTargetIp"].asString();
		routerInterfaceSet_.push_back(routerInterfaceTypeObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	desc_ = value["desc"].asString();
	success_ = std::stoi(value["Success"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::string DescribeRouterInterfacesForGlobalResult::getDesc()const
{
	return desc_;
}

void DescribeRouterInterfacesForGlobalResult::setDesc(const std::string& desc)
{
	desc_ = desc;
}

int DescribeRouterInterfacesForGlobalResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeRouterInterfacesForGlobalResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeRouterInterfacesForGlobalResult::getMessage()const
{
	return message_;
}

void DescribeRouterInterfacesForGlobalResult::setMessage(const std::string& message)
{
	message_ = message;
}

int DescribeRouterInterfacesForGlobalResult::getPageSize()const
{
	return pageSize_;
}

void DescribeRouterInterfacesForGlobalResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeRouterInterfacesForGlobalResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRouterInterfacesForGlobalResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeRouterInterfacesForGlobalResult::getCode()const
{
	return code_;
}

void DescribeRouterInterfacesForGlobalResult::setCode(const std::string& code)
{
	code_ = code;
}

bool DescribeRouterInterfacesForGlobalResult::getSuccess()const
{
	return success_;
}

void DescribeRouterInterfacesForGlobalResult::setSuccess(bool success)
{
	success_ = success;
}

