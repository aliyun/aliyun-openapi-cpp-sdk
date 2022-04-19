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

#include <alibabacloud/sas/model/DescribeExposedInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeExposedInstanceListResult::DescribeExposedInstanceListResult() :
	ServiceResult()
{}

DescribeExposedInstanceListResult::DescribeExposedInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExposedInstanceListResult::~DescribeExposedInstanceListResult()
{}

void DescribeExposedInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExposedInstancesNode = value["ExposedInstances"]["ExposedInstance"];
	for (auto valueExposedInstancesExposedInstance : allExposedInstancesNode)
	{
		ExposedInstance exposedInstancesObject;
		if(!valueExposedInstancesExposedInstance["ExposureIp"].isNull())
			exposedInstancesObject.exposureIp = valueExposedInstancesExposedInstance["ExposureIp"].asString();
		if(!valueExposedInstancesExposedInstance["TotalVulCount"].isNull())
			exposedInstancesObject.totalVulCount = std::stoi(valueExposedInstancesExposedInstance["TotalVulCount"].asString());
		if(!valueExposedInstancesExposedInstance["InternetIp"].isNull())
			exposedInstancesObject.internetIp = valueExposedInstancesExposedInstance["InternetIp"].asString();
		if(!valueExposedInstancesExposedInstance["NntfVulCount"].isNull())
			exposedInstancesObject.nntfVulCount = std::stoi(valueExposedInstancesExposedInstance["NntfVulCount"].asString());
		if(!valueExposedInstancesExposedInstance["InstanceId"].isNull())
			exposedInstancesObject.instanceId = valueExposedInstancesExposedInstance["InstanceId"].asString();
		if(!valueExposedInstancesExposedInstance["ExposureType"].isNull())
			exposedInstancesObject.exposureType = valueExposedInstancesExposedInstance["ExposureType"].asString();
		if(!valueExposedInstancesExposedInstance["IntranetIp"].isNull())
			exposedInstancesObject.intranetIp = valueExposedInstancesExposedInstance["IntranetIp"].asString();
		if(!valueExposedInstancesExposedInstance["RegionId"].isNull())
			exposedInstancesObject.regionId = valueExposedInstancesExposedInstance["RegionId"].asString();
		if(!valueExposedInstancesExposedInstance["ExposureTypeId"].isNull())
			exposedInstancesObject.exposureTypeId = valueExposedInstancesExposedInstance["ExposureTypeId"].asString();
		if(!valueExposedInstancesExposedInstance["AsapVulCount"].isNull())
			exposedInstancesObject.asapVulCount = std::stoi(valueExposedInstancesExposedInstance["AsapVulCount"].asString());
		if(!valueExposedInstancesExposedInstance["ExposurePort"].isNull())
			exposedInstancesObject.exposurePort = valueExposedInstancesExposedInstance["ExposurePort"].asString();
		if(!valueExposedInstancesExposedInstance["Uuid"].isNull())
			exposedInstancesObject.uuid = valueExposedInstancesExposedInstance["Uuid"].asString();
		if(!valueExposedInstancesExposedInstance["GroupName"].isNull())
			exposedInstancesObject.groupName = valueExposedInstancesExposedInstance["GroupName"].asString();
		if(!valueExposedInstancesExposedInstance["GroupId"].isNull())
			exposedInstancesObject.groupId = std::stol(valueExposedInstancesExposedInstance["GroupId"].asString());
		if(!valueExposedInstancesExposedInstance["ExploitHealthCount"].isNull())
			exposedInstancesObject.exploitHealthCount = std::stoi(valueExposedInstancesExposedInstance["ExploitHealthCount"].asString());
		if(!valueExposedInstancesExposedInstance["InstanceName"].isNull())
			exposedInstancesObject.instanceName = valueExposedInstancesExposedInstance["InstanceName"].asString();
		if(!valueExposedInstancesExposedInstance["ExposureComponent"].isNull())
			exposedInstancesObject.exposureComponent = valueExposedInstancesExposedInstance["ExposureComponent"].asString();
		if(!valueExposedInstancesExposedInstance["LaterVulCount"].isNull())
			exposedInstancesObject.laterVulCount = std::stoi(valueExposedInstancesExposedInstance["LaterVulCount"].asString());
		exposedInstances_.push_back(exposedInstancesObject);
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

}

DescribeExposedInstanceListResult::PageInfo DescribeExposedInstanceListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeExposedInstanceListResult::ExposedInstance> DescribeExposedInstanceListResult::getExposedInstances()const
{
	return exposedInstances_;
}

