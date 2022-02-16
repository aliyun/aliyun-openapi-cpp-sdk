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

#include <alibabacloud/emr/model/ListOnKubeComponentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListOnKubeComponentsResult::ListOnKubeComponentsResult() :
	ServiceResult()
{}

ListOnKubeComponentsResult::ListOnKubeComponentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOnKubeComponentsResult::~ListOnKubeComponentsResult()
{}

void ListOnKubeComponentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnKubeComponentsNode = value["OnKubeComponents"]["Component"];
	for (auto valueOnKubeComponentsComponent : allOnKubeComponentsNode)
	{
		Component onKubeComponentsObject;
		if(!valueOnKubeComponentsComponent["ApplicationName"].isNull())
			onKubeComponentsObject.applicationName = valueOnKubeComponentsComponent["ApplicationName"].asString();
		if(!valueOnKubeComponentsComponent["ComponentName"].isNull())
			onKubeComponentsObject.componentName = valueOnKubeComponentsComponent["ComponentName"].asString();
		if(!valueOnKubeComponentsComponent["CreateTime"].isNull())
			onKubeComponentsObject.createTime = std::stol(valueOnKubeComponentsComponent["CreateTime"].asString());
		if(!valueOnKubeComponentsComponent["Description"].isNull())
			onKubeComponentsObject.description = valueOnKubeComponentsComponent["Description"].asString();
		if(!valueOnKubeComponentsComponent["Replica"].isNull())
			onKubeComponentsObject.replica = std::stoi(valueOnKubeComponentsComponent["Replica"].asString());
		auto allPodsNode = valueOnKubeComponentsComponent["Pods"]["Pod"];
		for (auto valueOnKubeComponentsComponentPodsPod : allPodsNode)
		{
			Component::Pod podsObject;
			if(!valueOnKubeComponentsComponentPodsPod["PodName"].isNull())
				podsObject.podName = valueOnKubeComponentsComponentPodsPod["PodName"].asString();
			if(!valueOnKubeComponentsComponentPodsPod["PodStatus"].isNull())
				podsObject.podStatus = valueOnKubeComponentsComponentPodsPod["PodStatus"].asString();
			if(!valueOnKubeComponentsComponentPodsPod["Reason"].isNull())
				podsObject.reason = valueOnKubeComponentsComponentPodsPod["Reason"].asString();
			if(!valueOnKubeComponentsComponentPodsPod["Message"].isNull())
				podsObject.message = valueOnKubeComponentsComponentPodsPod["Message"].asString();
			onKubeComponentsObject.pods.push_back(podsObject);
		}
		onKubeComponents_.push_back(onKubeComponentsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListOnKubeComponentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOnKubeComponentsResult::getNextToken()const
{
	return nextToken_;
}

int ListOnKubeComponentsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListOnKubeComponentsResult::Component> ListOnKubeComponentsResult::getOnKubeComponents()const
{
	return onKubeComponents_;
}

