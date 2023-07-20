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

#include <alibabacloud/sas/model/DescribeContainerInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeContainerInstancesResult::DescribeContainerInstancesResult() :
	ServiceResult()
{}

DescribeContainerInstancesResult::DescribeContainerInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContainerInstancesResult::~DescribeContainerInstancesResult()
{}

void DescribeContainerInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContainerInstanceListNode = value["ContainerInstanceList"]["ContainerInstance"];
	for (auto valueContainerInstanceListContainerInstance : allContainerInstanceListNode)
	{
		ContainerInstance containerInstanceListObject;
		if(!valueContainerInstanceListContainerInstance["ImageRepoTag"].isNull())
			containerInstanceListObject.imageRepoTag = valueContainerInstanceListContainerInstance["ImageRepoTag"].asString();
		if(!valueContainerInstanceListContainerInstance["AppName"].isNull())
			containerInstanceListObject.appName = valueContainerInstanceListContainerInstance["AppName"].asString();
		if(!valueContainerInstanceListContainerInstance["PodIp"].isNull())
			containerInstanceListObject.podIp = valueContainerInstanceListContainerInstance["PodIp"].asString();
		if(!valueContainerInstanceListContainerInstance["VulCount"].isNull())
			containerInstanceListObject.vulCount = std::stoi(valueContainerInstanceListContainerInstance["VulCount"].asString());
		if(!valueContainerInstanceListContainerInstance["HcStatus"].isNull())
			containerInstanceListObject.hcStatus = valueContainerInstanceListContainerInstance["HcStatus"].asString();
		if(!valueContainerInstanceListContainerInstance["ImageId"].isNull())
			containerInstanceListObject.imageId = valueContainerInstanceListContainerInstance["ImageId"].asString();
		if(!valueContainerInstanceListContainerInstance["ClusterId"].isNull())
			containerInstanceListObject.clusterId = valueContainerInstanceListContainerInstance["ClusterId"].asString();
		if(!valueContainerInstanceListContainerInstance["ImageRepoName"].isNull())
			containerInstanceListObject.imageRepoName = valueContainerInstanceListContainerInstance["ImageRepoName"].asString();
		if(!valueContainerInstanceListContainerInstance["HostIp"].isNull())
			containerInstanceListObject.hostIp = valueContainerInstanceListContainerInstance["HostIp"].asString();
		if(!valueContainerInstanceListContainerInstance["Pod"].isNull())
			containerInstanceListObject.pod = valueContainerInstanceListContainerInstance["Pod"].asString();
		if(!valueContainerInstanceListContainerInstance["RiskStatus"].isNull())
			containerInstanceListObject.riskStatus = valueContainerInstanceListContainerInstance["RiskStatus"].asString();
		if(!valueContainerInstanceListContainerInstance["VulStatus"].isNull())
			containerInstanceListObject.vulStatus = valueContainerInstanceListContainerInstance["VulStatus"].asString();
		if(!valueContainerInstanceListContainerInstance["AlarmStatus"].isNull())
			containerInstanceListObject.alarmStatus = valueContainerInstanceListContainerInstance["AlarmStatus"].asString();
		if(!valueContainerInstanceListContainerInstance["Image"].isNull())
			containerInstanceListObject.image = valueContainerInstanceListContainerInstance["Image"].asString();
		if(!valueContainerInstanceListContainerInstance["ImageRepoNamespace"].isNull())
			containerInstanceListObject.imageRepoNamespace = valueContainerInstanceListContainerInstance["ImageRepoNamespace"].asString();
		if(!valueContainerInstanceListContainerInstance["ImageDigest"].isNull())
			containerInstanceListObject.imageDigest = valueContainerInstanceListContainerInstance["ImageDigest"].asString();
		if(!valueContainerInstanceListContainerInstance["Namespace"].isNull())
			containerInstanceListObject._namespace = valueContainerInstanceListContainerInstance["Namespace"].asString();
		if(!valueContainerInstanceListContainerInstance["InstanceId"].isNull())
			containerInstanceListObject.instanceId = valueContainerInstanceListContainerInstance["InstanceId"].asString();
		if(!valueContainerInstanceListContainerInstance["NodeInfo"].isNull())
			containerInstanceListObject.nodeInfo = valueContainerInstanceListContainerInstance["NodeInfo"].asString();
		if(!valueContainerInstanceListContainerInstance["ImageUuid"].isNull())
			containerInstanceListObject.imageUuid = valueContainerInstanceListContainerInstance["ImageUuid"].asString();
		if(!valueContainerInstanceListContainerInstance["RegionId"].isNull())
			containerInstanceListObject.regionId = valueContainerInstanceListContainerInstance["RegionId"].asString();
		if(!valueContainerInstanceListContainerInstance["UpdateMark"].isNull())
			containerInstanceListObject.updateMark = valueContainerInstanceListContainerInstance["UpdateMark"].asString();
		if(!valueContainerInstanceListContainerInstance["ContainerId"].isNull())
			containerInstanceListObject.containerId = valueContainerInstanceListContainerInstance["ContainerId"].asString();
		if(!valueContainerInstanceListContainerInstance["NodeName"].isNull())
			containerInstanceListObject.nodeName = valueContainerInstanceListContainerInstance["NodeName"].asString();
		if(!valueContainerInstanceListContainerInstance["HcCount"].isNull())
			containerInstanceListObject.hcCount = std::stoi(valueContainerInstanceListContainerInstance["HcCount"].asString());
		if(!valueContainerInstanceListContainerInstance["ClusterName"].isNull())
			containerInstanceListObject.clusterName = valueContainerInstanceListContainerInstance["ClusterName"].asString();
		if(!valueContainerInstanceListContainerInstance["RiskCount"].isNull())
			containerInstanceListObject.riskCount = valueContainerInstanceListContainerInstance["RiskCount"].asString();
		if(!valueContainerInstanceListContainerInstance["AlarmCount"].isNull())
			containerInstanceListObject.alarmCount = std::stoi(valueContainerInstanceListContainerInstance["AlarmCount"].asString());
		if(!valueContainerInstanceListContainerInstance["CreateTimestamp"].isNull())
			containerInstanceListObject.createTimestamp = std::stol(valueContainerInstanceListContainerInstance["CreateTimestamp"].asString());
		if(!valueContainerInstanceListContainerInstance["Exposed"].isNull())
			containerInstanceListObject.exposed = std::stoi(valueContainerInstanceListContainerInstance["Exposed"].asString());
		if(!valueContainerInstanceListContainerInstance["ExposedDetail"].isNull())
			containerInstanceListObject.exposedDetail = valueContainerInstanceListContainerInstance["ExposedDetail"].asString();
		containerInstanceList_.push_back(containerInstanceListObject);
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

std::vector<DescribeContainerInstancesResult::ContainerInstance> DescribeContainerInstancesResult::getContainerInstanceList()const
{
	return containerInstanceList_;
}

DescribeContainerInstancesResult::PageInfo DescribeContainerInstancesResult::getPageInfo()const
{
	return pageInfo_;
}

