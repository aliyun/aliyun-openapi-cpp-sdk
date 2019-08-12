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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["Resource"];
	for (auto value : allResources)
	{
		Resource resourcesObject;
		if(!value["Name"].isNull())
			resourcesObject.name = value["Name"].asString();
		if(!value["Namespace"].isNull())
			resourcesObject._namespace = value["Namespace"].asString();
		if(!value["Description"].isNull())
			resourcesObject.description = value["Description"].asString();
		if(!value["AlertTemplatesJson"].isNull())
			resourcesObject.alertTemplatesJson = value["AlertTemplatesJson"].asString();
		if(!value["RestVersion"].isNull())
			resourcesObject.restVersion = std::stol(value["RestVersion"].asString());
		if(!value["Id"].isNull())
			resourcesObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			resourcesObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			resourcesObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["EventRuleTemplatesJson"].isNull())
			resourcesObject.eventRuleTemplatesJson = value["EventRuleTemplatesJson"].asString();
		auto allApplyHistories = value["ApplyHistories"]["ApplyHistory"];
		for (auto value : allApplyHistories)
		{
			Resource::ApplyHistory applyHistoriesObject;
			if(!value["GroupId"].isNull())
				applyHistoriesObject.groupId = std::stol(value["GroupId"].asString());
			if(!value["GroupName"].isNull())
				applyHistoriesObject.groupName = value["GroupName"].asString();
			if(!value["ApplyTime"].isNull())
				applyHistoriesObject.applyTime = std::stol(value["ApplyTime"].asString());
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

