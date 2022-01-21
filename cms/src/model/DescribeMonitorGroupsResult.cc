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

#include <alibabacloud/cms/model/DescribeMonitorGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMonitorGroupsResult::DescribeMonitorGroupsResult() :
	ServiceResult()
{}

DescribeMonitorGroupsResult::DescribeMonitorGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorGroupsResult::~DescribeMonitorGroupsResult()
{}

void DescribeMonitorGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["Type"].isNull())
			resourcesObject.type = valueResourcesResource["Type"].asString();
		if(!valueResourcesResource["GroupFounderTagValue"].isNull())
			resourcesObject.groupFounderTagValue = valueResourcesResource["GroupFounderTagValue"].asString();
		if(!valueResourcesResource["BindUrl"].isNull())
			resourcesObject.bindUrl = valueResourcesResource["BindUrl"].asString();
		if(!valueResourcesResource["GroupName"].isNull())
			resourcesObject.groupName = valueResourcesResource["GroupName"].asString();
		if(!valueResourcesResource["GroupId"].isNull())
			resourcesObject.groupId = std::stol(valueResourcesResource["GroupId"].asString());
		if(!valueResourcesResource["ServiceId"].isNull())
			resourcesObject.serviceId = valueResourcesResource["ServiceId"].asString();
		if(!valueResourcesResource["DynamicTagRuleId"].isNull())
			resourcesObject.dynamicTagRuleId = valueResourcesResource["DynamicTagRuleId"].asString();
		if(!valueResourcesResource["GmtCreate"].isNull())
			resourcesObject.gmtCreate = std::stol(valueResourcesResource["GmtCreate"].asString());
		if(!valueResourcesResource["GroupFounderTagKey"].isNull())
			resourcesObject.groupFounderTagKey = valueResourcesResource["GroupFounderTagKey"].asString();
		if(!valueResourcesResource["GmtModified"].isNull())
			resourcesObject.gmtModified = std::stol(valueResourcesResource["GmtModified"].asString());
		auto allContactGroupsNode = valueResourcesResource["ContactGroups"]["ContactGroup"];
		for (auto valueResourcesResourceContactGroupsContactGroup : allContactGroupsNode)
		{
			Resource::ContactGroup contactGroupsObject;
			if(!valueResourcesResourceContactGroupsContactGroup["Name"].isNull())
				contactGroupsObject.name = valueResourcesResourceContactGroupsContactGroup["Name"].asString();
			resourcesObject.contactGroups.push_back(contactGroupsObject);
		}
		auto allTagsNode = valueResourcesResource["Tags"]["Tag"];
		for (auto valueResourcesResourceTagsTag : allTagsNode)
		{
			Resource::Tag tagsObject;
			if(!valueResourcesResourceTagsTag["Key"].isNull())
				tagsObject.key = valueResourcesResourceTagsTag["Key"].asString();
			if(!valueResourcesResourceTagsTag["Value"].isNull())
				tagsObject.value = valueResourcesResourceTagsTag["Value"].asString();
			resourcesObject.tags.push_back(tagsObject);
		}
		auto allTemplateIds = value["TemplateIds"]["TemplateId"];
		for (auto value : allTemplateIds)
			resourcesObject.templateIds.push_back(value.asString());
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeMonitorGroupsResult::getMessage()const
{
	return message_;
}

int DescribeMonitorGroupsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMonitorGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeMonitorGroupsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeMonitorGroupsResult::Resource> DescribeMonitorGroupsResult::getResources()const
{
	return resources_;
}

int DescribeMonitorGroupsResult::getCode()const
{
	return code_;
}

bool DescribeMonitorGroupsResult::getSuccess()const
{
	return success_;
}

