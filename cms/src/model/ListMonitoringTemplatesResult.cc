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

#include <alibabacloud/cms/model/ListMonitoringTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListMonitoringTemplatesResult::ListMonitoringTemplatesResult() :
	ServiceResult()
{}

ListMonitoringTemplatesResult::ListMonitoringTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMonitoringTemplatesResult::~ListMonitoringTemplatesResult()
{}

void ListMonitoringTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["Name"].isNull())
			resourcesObject.name = valueResourcesResource["Name"].asString();
		if(!valueResourcesResource["Namespace"].isNull())
			resourcesObject._namespace = valueResourcesResource["Namespace"].asString();
		if(!valueResourcesResource["Description"].isNull())
			resourcesObject.description = valueResourcesResource["Description"].asString();
		if(!valueResourcesResource["AlertTemplatesJson"].isNull())
			resourcesObject.alertTemplatesJson = valueResourcesResource["AlertTemplatesJson"].asString();
		if(!valueResourcesResource["RestVersion"].isNull())
			resourcesObject.restVersion = std::stol(valueResourcesResource["RestVersion"].asString());
		if(!valueResourcesResource["Id"].isNull())
			resourcesObject.id = std::stol(valueResourcesResource["Id"].asString());
		if(!valueResourcesResource["GmtCreate"].isNull())
			resourcesObject.gmtCreate = std::stol(valueResourcesResource["GmtCreate"].asString());
		if(!valueResourcesResource["GmtModified"].isNull())
			resourcesObject.gmtModified = std::stol(valueResourcesResource["GmtModified"].asString());
		if(!valueResourcesResource["EventRuleTemplatesJson"].isNull())
			resourcesObject.eventRuleTemplatesJson = valueResourcesResource["EventRuleTemplatesJson"].asString();
		auto allApplyHistoriesNode = allResourcesNode["ApplyHistories"]["ApplyHistory"];
		for (auto allResourcesNodeApplyHistoriesApplyHistory : allApplyHistoriesNode)
		{
			Resource::ApplyHistory applyHistoriesObject;
			if(!allResourcesNodeApplyHistoriesApplyHistory["GroupId"].isNull())
				applyHistoriesObject.groupId = std::stol(allResourcesNodeApplyHistoriesApplyHistory["GroupId"].asString());
			if(!allResourcesNodeApplyHistoriesApplyHistory["GroupName"].isNull())
				applyHistoriesObject.groupName = allResourcesNodeApplyHistoriesApplyHistory["GroupName"].asString();
			if(!allResourcesNodeApplyHistoriesApplyHistory["ApplyTime"].isNull())
				applyHistoriesObject.applyTime = std::stol(allResourcesNodeApplyHistoriesApplyHistory["ApplyTime"].asString());
			resourcesObject.applyHistories.push_back(applyHistoriesObject);
		}
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListMonitoringTemplatesResult::getPageSize()const
{
	return pageSize_;
}

long ListMonitoringTemplatesResult::getPageNumber()const
{
	return pageNumber_;
}

long ListMonitoringTemplatesResult::getTotal()const
{
	return total_;
}

std::vector<ListMonitoringTemplatesResult::Resource> ListMonitoringTemplatesResult::getResources()const
{
	return resources_;
}

int ListMonitoringTemplatesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListMonitoringTemplatesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListMonitoringTemplatesResult::getSuccess()const
{
	return success_;
}

