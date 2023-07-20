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
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["CpuInfo"].isNull())
			instancesObject.cpuInfo = valueInstancesInstance["CpuInfo"].asString();
		if(!valueInstancesInstance["InternetIp"].isNull())
			instancesObject.internetIp = valueInstancesInstance["InternetIp"].asString();
		if(!valueInstancesInstance["Kernel"].isNull())
			instancesObject.kernel = valueInstancesInstance["Kernel"].asString();
		if(!valueInstancesInstance["Bind"].isNull())
			instancesObject.bind = valueInstancesInstance["Bind"].asString() == "true";
		if(!valueInstancesInstance["OsName"].isNull())
			instancesObject.osName = valueInstancesInstance["OsName"].asString();
		if(!valueInstancesInstance["Tag"].isNull())
			instancesObject.tag = valueInstancesInstance["Tag"].asString();
		if(!valueInstancesInstance["ClientStatus"].isNull())
			instancesObject.clientStatus = valueInstancesInstance["ClientStatus"].asString();
		if(!valueInstancesInstance["Mem"].isNull())
			instancesObject.mem = std::stoi(valueInstancesInstance["Mem"].asString());
		if(!valueInstancesInstance["VpcInstanceId"].isNull())
			instancesObject.vpcInstanceId = valueInstancesInstance["VpcInstanceId"].asString();
		if(!valueInstancesInstance["TagId"].isNull())
			instancesObject.tagId = valueInstancesInstance["TagId"].asString();
		if(!valueInstancesInstance["Flag"].isNull())
			instancesObject.flag = std::stoi(valueInstancesInstance["Flag"].asString());
		if(!valueInstancesInstance["LastLoginTimestamp"].isNull())
			instancesObject.lastLoginTimestamp = std::stol(valueInstancesInstance["LastLoginTimestamp"].asString());
		if(!valueInstancesInstance["AuthVersion"].isNull())
			instancesObject.authVersion = std::stoi(valueInstancesInstance["AuthVersion"].asString());
		if(!valueInstancesInstance["Region"].isNull())
			instancesObject.region = valueInstancesInstance["Region"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["PodCount"].isNull())
			instancesObject.podCount = std::stoi(valueInstancesInstance["PodCount"].asString());
		if(!valueInstancesInstance["VulCount"].isNull())
			instancesObject.vulCount = std::stoi(valueInstancesInstance["VulCount"].asString());
		if(!valueInstancesInstance["HcStatus"].isNull())
			instancesObject.hcStatus = valueInstancesInstance["HcStatus"].asString();
		if(!valueInstancesInstance["CreatedTime"].isNull())
			instancesObject.createdTime = std::stol(valueInstancesInstance["CreatedTime"].asString());
		if(!valueInstancesInstance["GroupTrace"].isNull())
			instancesObject.groupTrace = valueInstancesInstance["GroupTrace"].asString();
		if(!valueInstancesInstance["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesInstance["ClusterId"].asString();
		if(!valueInstancesInstance["RiskStatus"].isNull())
			instancesObject.riskStatus = valueInstancesInstance["RiskStatus"].asString();
		if(!valueInstancesInstance["Cores"].isNull())
			instancesObject.cores = std::stoi(valueInstancesInstance["Cores"].asString());
		if(!valueInstancesInstance["VulStatus"].isNull())
			instancesObject.vulStatus = valueInstancesInstance["VulStatus"].asString();
		if(!valueInstancesInstance["AlarmStatus"].isNull())
			instancesObject.alarmStatus = valueInstancesInstance["AlarmStatus"].asString();
		if(!valueInstancesInstance["MacListString"].isNull())
			instancesObject.macListString = valueInstancesInstance["MacListString"].asString();
		if(!valueInstancesInstance["Importance"].isNull())
			instancesObject.importance = std::stoi(valueInstancesInstance["Importance"].asString());
		if(!valueInstancesInstance["HealthCheckCount"].isNull())
			instancesObject.healthCheckCount = std::stoi(valueInstancesInstance["HealthCheckCount"].asString());
		if(!valueInstancesInstance["Ip"].isNull())
			instancesObject.ip = valueInstancesInstance["Ip"].asString();
		if(!valueInstancesInstance["Os"].isNull())
			instancesObject.os = valueInstancesInstance["Os"].asString();
		if(!valueInstancesInstance["AuthModifyTime"].isNull())
			instancesObject.authModifyTime = std::stol(valueInstancesInstance["AuthModifyTime"].asString());
		if(!valueInstancesInstance["SafeEventCount"].isNull())
			instancesObject.safeEventCount = std::stoi(valueInstancesInstance["SafeEventCount"].asString());
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["AssetType"].isNull())
			instancesObject.assetType = valueInstancesInstance["AssetType"].asString();
		if(!valueInstancesInstance["IntranetIp"].isNull())
			instancesObject.intranetIp = valueInstancesInstance["IntranetIp"].asString();
		if(!valueInstancesInstance["Vendor"].isNull())
			instancesObject.vendor = std::stoi(valueInstancesInstance["Vendor"].asString());
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["Uuid"].isNull())
			instancesObject.uuid = valueInstancesInstance["Uuid"].asString();
		if(!valueInstancesInstance["GroupId"].isNull())
			instancesObject.groupId = std::stol(valueInstancesInstance["GroupId"].asString());
		if(!valueInstancesInstance["RegionName"].isNull())
			instancesObject.regionName = valueInstancesInstance["RegionName"].asString();
		if(!valueInstancesInstance["VendorName"].isNull())
			instancesObject.vendorName = valueInstancesInstance["VendorName"].asString();
		if(!valueInstancesInstance["AuthVersionName"].isNull())
			instancesObject.authVersionName = valueInstancesInstance["AuthVersionName"].asString();
		if(!valueInstancesInstance["ClusterName"].isNull())
			instancesObject.clusterName = valueInstancesInstance["ClusterName"].asString();
		if(!valueInstancesInstance["ExposedStatus"].isNull())
			instancesObject.exposedStatus = std::stoi(valueInstancesInstance["ExposedStatus"].asString());
		if(!valueInstancesInstance["RiskCount"].isNull())
			instancesObject.riskCount = valueInstancesInstance["RiskCount"].asString();
		if(!valueInstancesInstance["IpListString"].isNull())
			instancesObject.ipListString = valueInstancesInstance["IpListString"].asString();
		instances_.push_back(instancesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["NextToken"].isNull())
		pageInfo_.nextToken = pageInfoNode["NextToken"].asString();
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

