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

#include <alibabacloud/emr/model/ListClusterHostComponentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterHostComponentResult::ListClusterHostComponentResult() :
	ServiceResult()
{}

ListClusterHostComponentResult::ListClusterHostComponentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterHostComponentResult::~ListClusterHostComponentResult()
{}

void ListClusterHostComponentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allComponentList = value["ComponentList"]["Component"];
	for (auto value : allComponentList)
	{
		Component componentListObject;
		if(!value["ServiceName"].isNull())
			componentListObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceDisplayName"].isNull())
			componentListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
		if(!value["ComponentName"].isNull())
			componentListObject.componentName = value["ComponentName"].asString();
		if(!value["ComponentDisplayName"].isNull())
			componentListObject.componentDisplayName = value["ComponentDisplayName"].asString();
		if(!value["Status"].isNull())
			componentListObject.status = value["Status"].asString();
		if(!value["NeedRestart"].isNull())
			componentListObject.needRestart = value["NeedRestart"].asString() == "true";
		if(!value["HostId"].isNull())
			componentListObject.hostId = value["HostId"].asString();
		if(!value["ServerStatus"].isNull())
			componentListObject.serverStatus = value["ServerStatus"].asString();
		if(!value["HostName"].isNull())
			componentListObject.hostName = value["HostName"].asString();
		if(!value["PublicIp"].isNull())
			componentListObject.publicIp = value["PublicIp"].asString();
		if(!value["PrivateIp"].isNull())
			componentListObject.privateIp = value["PrivateIp"].asString();
		if(!value["Role"].isNull())
			componentListObject.role = value["Role"].asString();
		if(!value["InstanceType"].isNull())
			componentListObject.instanceType = value["InstanceType"].asString();
		if(!value["Cpu"].isNull())
			componentListObject.cpu = std::stoi(value["Cpu"].asString());
		if(!value["Memory"].isNull())
			componentListObject.memory = std::stoi(value["Memory"].asString());
		if(!value["HostInstanceId"].isNull())
			componentListObject.hostInstanceId = value["HostInstanceId"].asString();
		if(!value["SerialNumber"].isNull())
			componentListObject.serialNumber = value["SerialNumber"].asString();
		componentList_.push_back(componentListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListClusterHostComponentResult::getPageSize()const
{
	return pageSize_;
}

int ListClusterHostComponentResult::getPageNumber()const
{
	return pageNumber_;
}

int ListClusterHostComponentResult::getTotal()const
{
	return total_;
}

std::vector<ListClusterHostComponentResult::Component> ListClusterHostComponentResult::getComponentList()const
{
	return componentList_;
}

