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

#include <alibabacloud/emr/model/ListClusterServiceComponentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterServiceComponentResult::ListClusterServiceComponentResult() :
	ServiceResult()
{}

ListClusterServiceComponentResult::ListClusterServiceComponentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterServiceComponentResult::~ListClusterServiceComponentResult()
{}

void ListClusterServiceComponentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentListNode = value["ComponentList"]["Component"];
	for (auto valueComponentListComponent : allComponentListNode)
	{
		Component componentListObject;
		if(!valueComponentListComponent["ServiceName"].isNull())
			componentListObject.serviceName = valueComponentListComponent["ServiceName"].asString();
		if(!valueComponentListComponent["ServiceDisplayName"].isNull())
			componentListObject.serviceDisplayName = valueComponentListComponent["ServiceDisplayName"].asString();
		if(!valueComponentListComponent["ComponentName"].isNull())
			componentListObject.componentName = valueComponentListComponent["ComponentName"].asString();
		if(!valueComponentListComponent["ComponentDisplayName"].isNull())
			componentListObject.componentDisplayName = valueComponentListComponent["ComponentDisplayName"].asString();
		if(!valueComponentListComponent["Status"].isNull())
			componentListObject.status = valueComponentListComponent["Status"].asString();
		if(!valueComponentListComponent["NeedRestart"].isNull())
			componentListObject.needRestart = valueComponentListComponent["NeedRestart"].asString() == "true";
		if(!valueComponentListComponent["ServerStatus"].isNull())
			componentListObject.serverStatus = valueComponentListComponent["ServerStatus"].asString();
		if(!valueComponentListComponent["PodName"].isNull())
			componentListObject.podName = valueComponentListComponent["PodName"].asString();
		if(!valueComponentListComponent["PublicIp"].isNull())
			componentListObject.publicIp = valueComponentListComponent["PublicIp"].asString();
		if(!valueComponentListComponent["PrivateIp"].isNull())
			componentListObject.privateIp = valueComponentListComponent["PrivateIp"].asString();
		if(!valueComponentListComponent["Role"].isNull())
			componentListObject.role = valueComponentListComponent["Role"].asString();
		if(!valueComponentListComponent["CommissionStatus"].isNull())
			componentListObject.commissionStatus = valueComponentListComponent["CommissionStatus"].asString();
		if(!valueComponentListComponent["DesiredCount"].isNull())
			componentListObject.desiredCount = std::stoi(valueComponentListComponent["DesiredCount"].asString());
		if(!valueComponentListComponent["Namespace"].isNull())
			componentListObject._namespace = valueComponentListComponent["Namespace"].asString();
		if(!valueComponentListComponent["WorkloadType"].isNull())
			componentListObject.workloadType = valueComponentListComponent["WorkloadType"].asString();
		if(!valueComponentListComponent["WorkloadName"].isNull())
			componentListObject.workloadName = valueComponentListComponent["WorkloadName"].asString();
		componentList_.push_back(componentListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListClusterServiceComponentResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterServiceComponentResult::getPageNumber()const
{
	return pageNumber_;
}

int ListClusterServiceComponentResult::getTotal()const
{
	return total_;
}

std::vector<ListClusterServiceComponentResult::Component> ListClusterServiceComponentResult::getComponentList()const
{
	return componentList_;
}

