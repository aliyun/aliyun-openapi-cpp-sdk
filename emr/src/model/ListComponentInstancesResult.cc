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

#include <alibabacloud/emr/model/ListComponentInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListComponentInstancesResult::ListComponentInstancesResult() :
	ServiceResult()
{}

ListComponentInstancesResult::ListComponentInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListComponentInstancesResult::~ListComponentInstancesResult()
{}

void ListComponentInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentInstancesNode = value["ComponentInstances"]["ComponentInstance"];
	for (auto valueComponentInstancesComponentInstance : allComponentInstancesNode)
	{
		ComponentInstance componentInstancesObject;
		if(!valueComponentInstancesComponentInstance["ComponentInstanceId"].isNull())
			componentInstancesObject.componentInstanceId = valueComponentInstancesComponentInstance["ComponentInstanceId"].asString();
		if(!valueComponentInstancesComponentInstance["ComponentName"].isNull())
			componentInstancesObject.componentName = valueComponentInstancesComponentInstance["ComponentName"].asString();
		if(!valueComponentInstancesComponentInstance["ApplicationName"].isNull())
			componentInstancesObject.applicationName = valueComponentInstancesComponentInstance["ApplicationName"].asString();
		if(!valueComponentInstancesComponentInstance["ComponentInstanceStatus"].isNull())
			componentInstancesObject.componentInstanceStatus = valueComponentInstancesComponentInstance["ComponentInstanceStatus"].asString();
		if(!valueComponentInstancesComponentInstance["ComponentInstanceState"].isNull())
			componentInstancesObject.componentInstanceState = valueComponentInstancesComponentInstance["ComponentInstanceState"].asString();
		if(!valueComponentInstancesComponentInstance["NodeId"].isNull())
			componentInstancesObject.nodeId = valueComponentInstancesComponentInstance["NodeId"].asString();
		if(!valueComponentInstancesComponentInstance["NodeName"].isNull())
			componentInstancesObject.nodeName = valueComponentInstancesComponentInstance["NodeName"].asString();
		if(!valueComponentInstancesComponentInstance["CommissionState"].isNull())
			componentInstancesObject.commissionState = valueComponentInstancesComponentInstance["CommissionState"].asString();
		if(!valueComponentInstancesComponentInstance["BizState"].isNull())
			componentInstancesObject.bizState = valueComponentInstancesComponentInstance["BizState"].asString();
		if(!valueComponentInstancesComponentInstance["CreateTime"].isNull())
			componentInstancesObject.createTime = std::stol(valueComponentInstancesComponentInstance["CreateTime"].asString());
		if(!valueComponentInstancesComponentInstance["DesiredState"].isNull())
			componentInstancesObject.desiredState = valueComponentInstancesComponentInstance["DesiredState"].asString();
		if(!valueComponentInstancesComponentInstance["MaintenanceState"].isNull())
			componentInstancesObject.maintenanceState = valueComponentInstancesComponentInstance["MaintenanceState"].asString();
		componentInstances_.push_back(componentInstancesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListComponentInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListComponentInstancesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListComponentInstancesResult::ComponentInstance> ListComponentInstancesResult::getComponentInstances()const
{
	return componentInstances_;
}

int ListComponentInstancesResult::getMaxResults()const
{
	return maxResults_;
}

