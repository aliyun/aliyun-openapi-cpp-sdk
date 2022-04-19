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

#include <alibabacloud/sas/model/DescribeGroupedContainerInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeGroupedContainerInstancesResult::DescribeGroupedContainerInstancesResult() :
	ServiceResult()
{}

DescribeGroupedContainerInstancesResult::DescribeGroupedContainerInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGroupedContainerInstancesResult::~DescribeGroupedContainerInstancesResult()
{}

void DescribeGroupedContainerInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupedContainerInstanceListNode = value["GroupedContainerInstanceList"]["GroupedContainerInstance"];
	for (auto valueGroupedContainerInstanceListGroupedContainerInstance : allGroupedContainerInstanceListNode)
	{
		GroupedContainerInstance groupedContainerInstanceListObject;
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["RiskLevel"].isNull())
			groupedContainerInstanceListObject.riskLevel = valueGroupedContainerInstanceListGroupedContainerInstance["RiskLevel"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["HostIp"].isNull())
			groupedContainerInstanceListObject.hostIp = valueGroupedContainerInstanceListGroupedContainerInstance["HostIp"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["Pod"].isNull())
			groupedContainerInstanceListObject.pod = valueGroupedContainerInstanceListGroupedContainerInstance["Pod"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["RiskStatus"].isNull())
			groupedContainerInstanceListObject.riskStatus = valueGroupedContainerInstanceListGroupedContainerInstance["RiskStatus"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["CreateTime"].isNull())
			groupedContainerInstanceListObject.createTime = std::stol(valueGroupedContainerInstanceListGroupedContainerInstance["CreateTime"].asString());
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["Namespace"].isNull())
			groupedContainerInstanceListObject._namespace = valueGroupedContainerInstanceListGroupedContainerInstance["Namespace"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["CusterState"].isNull())
			groupedContainerInstanceListObject.custerState = valueGroupedContainerInstanceListGroupedContainerInstance["CusterState"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["InstanceId"].isNull())
			groupedContainerInstanceListObject.instanceId = valueGroupedContainerInstanceListGroupedContainerInstance["InstanceId"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["RegionId"].isNull())
			groupedContainerInstanceListObject.regionId = valueGroupedContainerInstanceListGroupedContainerInstance["RegionId"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["AppName"].isNull())
			groupedContainerInstanceListObject.appName = valueGroupedContainerInstanceListGroupedContainerInstance["AppName"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["InstanceCount"].isNull())
			groupedContainerInstanceListObject.instanceCount = std::stoi(valueGroupedContainerInstanceListGroupedContainerInstance["InstanceCount"].asString());
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ClusterType"].isNull())
			groupedContainerInstanceListObject.clusterType = valueGroupedContainerInstanceListGroupedContainerInstance["ClusterType"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ClusterName"].isNull())
			groupedContainerInstanceListObject.clusterName = valueGroupedContainerInstanceListGroupedContainerInstance["ClusterName"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["PodIp"].isNull())
			groupedContainerInstanceListObject.podIp = valueGroupedContainerInstanceListGroupedContainerInstance["PodIp"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["VulCount"].isNull())
			groupedContainerInstanceListObject.vulCount = std::stoi(valueGroupedContainerInstanceListGroupedContainerInstance["VulCount"].asString());
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["AlarmCount"].isNull())
			groupedContainerInstanceListObject.alarmCount = std::stoi(valueGroupedContainerInstanceListGroupedContainerInstance["AlarmCount"].asString());
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["RiskInstanceCount"].isNull())
			groupedContainerInstanceListObject.riskInstanceCount = std::stoi(valueGroupedContainerInstanceListGroupedContainerInstance["RiskInstanceCount"].asString());
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ClusterId"].isNull())
			groupedContainerInstanceListObject.clusterId = valueGroupedContainerInstanceListGroupedContainerInstance["ClusterId"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["Image"].isNull())
			groupedContainerInstanceListObject.image = valueGroupedContainerInstanceListGroupedContainerInstance["Image"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ImageRepoNamespace"].isNull())
			groupedContainerInstanceListObject.imageRepoNamespace = valueGroupedContainerInstanceListGroupedContainerInstance["ImageRepoNamespace"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ImageRepoName"].isNull())
			groupedContainerInstanceListObject.imageRepoName = valueGroupedContainerInstanceListGroupedContainerInstance["ImageRepoName"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ImageRepoTag"].isNull())
			groupedContainerInstanceListObject.imageRepoTag = valueGroupedContainerInstanceListGroupedContainerInstance["ImageRepoTag"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ImageDigest"].isNull())
			groupedContainerInstanceListObject.imageDigest = valueGroupedContainerInstanceListGroupedContainerInstance["ImageDigest"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["ImageUuid"].isNull())
			groupedContainerInstanceListObject.imageUuid = valueGroupedContainerInstanceListGroupedContainerInstance["ImageUuid"].asString();
		if(!valueGroupedContainerInstanceListGroupedContainerInstance["HcCount"].isNull())
			groupedContainerInstanceListObject.hcCount = std::stoi(valueGroupedContainerInstanceListGroupedContainerInstance["HcCount"].asString());
		groupedContainerInstanceList_.push_back(groupedContainerInstanceListObject);
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

std::vector<DescribeGroupedContainerInstancesResult::GroupedContainerInstance> DescribeGroupedContainerInstancesResult::getGroupedContainerInstanceList()const
{
	return groupedContainerInstanceList_;
}

DescribeGroupedContainerInstancesResult::PageInfo DescribeGroupedContainerInstancesResult::getPageInfo()const
{
	return pageInfo_;
}

