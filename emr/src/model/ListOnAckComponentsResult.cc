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

#include <alibabacloud/emr/model/ListOnAckComponentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListOnAckComponentsResult::ListOnAckComponentsResult() :
	ServiceResult()
{}

ListOnAckComponentsResult::ListOnAckComponentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOnAckComponentsResult::~ListOnAckComponentsResult()
{}

void ListOnAckComponentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentsNode = value["Components"]["Component"];
	for (auto valueComponentsComponent : allComponentsNode)
	{
		Component componentsObject;
		if(!valueComponentsComponent["ApplicationName"].isNull())
			componentsObject.applicationName = valueComponentsComponent["ApplicationName"].asString();
		if(!valueComponentsComponent["ComponentName"].isNull())
			componentsObject.componentName = valueComponentsComponent["ComponentName"].asString();
		if(!valueComponentsComponent["CreateTime"].isNull())
			componentsObject.createTime = std::stol(valueComponentsComponent["CreateTime"].asString());
		if(!valueComponentsComponent["Description"].isNull())
			componentsObject.description = valueComponentsComponent["Description"].asString();
		if(!valueComponentsComponent["Replica"].isNull())
			componentsObject.replica = std::stoi(valueComponentsComponent["Replica"].asString());
		auto allPodsNode = valueComponentsComponent["Pods"]["Pod"];
		for (auto valueComponentsComponentPodsPod : allPodsNode)
		{
			Component::Pod podsObject;
			if(!valueComponentsComponentPodsPod["PodName"].isNull())
				podsObject.podName = valueComponentsComponentPodsPod["PodName"].asString();
			if(!valueComponentsComponentPodsPod["PodStatus"].isNull())
				podsObject.podStatus = valueComponentsComponentPodsPod["PodStatus"].asString();
			if(!valueComponentsComponentPodsPod["Reason"].isNull())
				podsObject.reason = valueComponentsComponentPodsPod["Reason"].asString();
			if(!valueComponentsComponentPodsPod["Message"].isNull())
				podsObject.message = valueComponentsComponentPodsPod["Message"].asString();
			componentsObject.pods.push_back(podsObject);
		}
		components_.push_back(componentsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListOnAckComponentsResult::Component> ListOnAckComponentsResult::getComponents()const
{
	return components_;
}

int ListOnAckComponentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOnAckComponentsResult::getNextToken()const
{
	return nextToken_;
}

int ListOnAckComponentsResult::getMaxResults()const
{
	return maxResults_;
}

