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

#include <alibabacloud/emr/model/ListFlowNodeInstanceContainerStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowNodeInstanceContainerStatusResult::ListFlowNodeInstanceContainerStatusResult() :
	ServiceResult()
{}

ListFlowNodeInstanceContainerStatusResult::ListFlowNodeInstanceContainerStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowNodeInstanceContainerStatusResult::~ListFlowNodeInstanceContainerStatusResult()
{}

void ListFlowNodeInstanceContainerStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allContainerStatusList = value["ContainerStatusList"]["ContainerStatus"];
	for (auto value : allContainerStatusList)
	{
		ContainerStatus containerStatusListObject;
		if(!value["ApplicationId"].isNull())
			containerStatusListObject.applicationId = value["ApplicationId"].asString();
		if(!value["ContainerId"].isNull())
			containerStatusListObject.containerId = value["ContainerId"].asString();
		if(!value["HostName"].isNull())
			containerStatusListObject.hostName = value["HostName"].asString();
		if(!value["Status"].isNull())
			containerStatusListObject.status = value["Status"].asString();
		containerStatusList_.push_back(containerStatusListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowNodeInstanceContainerStatusResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowNodeInstanceContainerStatusResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowNodeInstanceContainerStatusResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowNodeInstanceContainerStatusResult::ContainerStatus> ListFlowNodeInstanceContainerStatusResult::getContainerStatusList()const
{
	return containerStatusList_;
}

