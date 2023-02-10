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

#include <alibabacloud/sas/model/ListPodRiskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListPodRiskResult::ListPodRiskResult() :
	ServiceResult()
{}

ListPodRiskResult::ListPodRiskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPodRiskResult::~ListPodRiskResult()
{}

void ListPodRiskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPodRiskListNode = value["PodRiskList"]["PodRiskListItem"];
	for (auto valuePodRiskListPodRiskListItem : allPodRiskListNode)
	{
		PodRiskListItem podRiskListObject;
		if(!valuePodRiskListPodRiskListItem["Pod"].isNull())
			podRiskListObject.pod = valuePodRiskListPodRiskListItem["Pod"].asString();
		if(!valuePodRiskListPodRiskListItem["NodeName"].isNull())
			podRiskListObject.nodeName = valuePodRiskListPodRiskListItem["NodeName"].asString();
		if(!valuePodRiskListPodRiskListItem["ClusterId"].isNull())
			podRiskListObject.clusterId = valuePodRiskListPodRiskListItem["ClusterId"].asString();
		if(!valuePodRiskListPodRiskListItem["PodIp"].isNull())
			podRiskListObject.podIp = valuePodRiskListPodRiskListItem["PodIp"].asString();
		if(!valuePodRiskListPodRiskListItem["CreateTime"].isNull())
			podRiskListObject.createTime = std::stol(valuePodRiskListPodRiskListItem["CreateTime"].asString());
		if(!valuePodRiskListPodRiskListItem["ClusterName"].isNull())
			podRiskListObject.clusterName = valuePodRiskListPodRiskListItem["ClusterName"].asString();
		if(!valuePodRiskListPodRiskListItem["Namespace"].isNull())
			podRiskListObject._namespace = valuePodRiskListPodRiskListItem["Namespace"].asString();
		if(!valuePodRiskListPodRiskListItem["VulCount"].isNull())
			podRiskListObject.vulCount = std::stoi(valuePodRiskListPodRiskListItem["VulCount"].asString());
		if(!valuePodRiskListPodRiskListItem["AlarmCount"].isNull())
			podRiskListObject.alarmCount = std::stoi(valuePodRiskListPodRiskListItem["AlarmCount"].asString());
		if(!valuePodRiskListPodRiskListItem["HcCount"].isNull())
			podRiskListObject.hcCount = std::stoi(valuePodRiskListPodRiskListItem["HcCount"].asString());
		if(!valuePodRiskListPodRiskListItem["InstanceId"].isNull())
			podRiskListObject.instanceId = valuePodRiskListPodRiskListItem["InstanceId"].asString();
		podRiskList_.push_back(podRiskListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

ListPodRiskResult::PageInfo ListPodRiskResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListPodRiskResult::PodRiskListItem> ListPodRiskResult::getPodRiskList()const
{
	return podRiskList_;
}

