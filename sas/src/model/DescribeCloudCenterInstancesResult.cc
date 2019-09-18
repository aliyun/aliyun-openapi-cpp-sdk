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

#include <alibabacloud/sas/model/DescribeCloudCenterInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeCloudCenterInstancesResult::DescribeCloudCenterInstancesResult() :
	ServiceResult()
{}

DescribeCloudCenterInstancesResult::DescribeCloudCenterInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudCenterInstancesResult::~DescribeCloudCenterInstancesResult()
{}

void DescribeCloudCenterInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["InternetIp"].isNull())
			instancesObject.internetIp = value["InternetIp"].asString();
		if(!value["Os"].isNull())
			instancesObject.os = value["Os"].asString();
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			instancesObject.instanceName = value["InstanceName"].asString();
		if(!value["RegionName"].isNull())
			instancesObject.regionName = value["RegionName"].asString();
		if(!value["Ip"].isNull())
			instancesObject.ip = value["Ip"].asString();
		if(!value["ClientStatus"].isNull())
			instancesObject.clientStatus = value["ClientStatus"].asString();
		if(!value["Region"].isNull())
			instancesObject.region = value["Region"].asString();
		if(!value["Uuid"].isNull())
			instancesObject.uuid = value["Uuid"].asString();
		if(!value["IntranetIp"].isNull())
			instancesObject.intranetIp = value["IntranetIp"].asString();
		if(!value["AssetType"].isNull())
			instancesObject.assetType = value["AssetType"].asString();
		if(!value["Status"].isNull())
			instancesObject.status = value["Status"].asString();
		if(!value["Tag"].isNull())
			instancesObject.tag = value["Tag"].asString();
		if(!value["VpcInstanceId"].isNull())
			instancesObject.vpcInstanceId = value["VpcInstanceId"].asString();
		if(!value["OsName"].isNull())
			instancesObject.osName = value["OsName"].asString();
		if(!value["Flag"].isNull())
			instancesObject.flag = std::stoi(value["Flag"].asString());
		if(!value["HcStatus"].isNull())
			instancesObject.hcStatus = value["HcStatus"].asString();
		if(!value["VulStatus"].isNull())
			instancesObject.vulStatus = value["VulStatus"].asString();
		if(!value["AlarmStatus"].isNull())
			instancesObject.alarmStatus = value["AlarmStatus"].asString();
		if(!value["RiskStatus"].isNull())
			instancesObject.riskStatus = value["RiskStatus"].asString();
		if(!value["HealthCheckCount"].isNull())
			instancesObject.healthCheckCount = std::stoi(value["HealthCheckCount"].asString());
		if(!value["VulCount"].isNull())
			instancesObject.vulCount = std::stoi(value["VulCount"].asString());
		if(!value["SafeEventCount"].isNull())
			instancesObject.safeEventCount = std::stoi(value["SafeEventCount"].asString());
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		instances_.push_back(instancesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeCloudCenterInstancesResult::Instance> DescribeCloudCenterInstancesResult::getInstances()const
{
	return instances_;
}

DescribeCloudCenterInstancesResult::PageInfo DescribeCloudCenterInstancesResult::getPageInfo()const
{
	return pageInfo_;
}

bool DescribeCloudCenterInstancesResult::getSuccess()const
{
	return success_;
}

