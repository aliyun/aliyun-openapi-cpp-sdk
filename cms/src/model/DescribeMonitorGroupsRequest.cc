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

#include <alibabacloud/cms/model/DescribeMonitorGroupsRequest.h>

using AlibabaCloud::Cms::Model::DescribeMonitorGroupsRequest;

DescribeMonitorGroupsRequest::DescribeMonitorGroupsRequest() :
	RpcServiceRequest("cms", "2019-01-01", "DescribeMonitorGroups")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMonitorGroupsRequest::~DescribeMonitorGroupsRequest()
{}

bool DescribeMonitorGroupsRequest::getSelectContactGroups()const
{
	return selectContactGroups_;
}

void DescribeMonitorGroupsRequest::setSelectContactGroups(bool selectContactGroups)
{
	selectContactGroups_ = selectContactGroups;
	setParameter("SelectContactGroups", selectContactGroups ? "true" : "false");
}

bool DescribeMonitorGroupsRequest::getIncludeTemplateHistory()const
{
	return includeTemplateHistory_;
}

void DescribeMonitorGroupsRequest::setIncludeTemplateHistory(bool includeTemplateHistory)
{
	includeTemplateHistory_ = includeTemplateHistory;
	setParameter("IncludeTemplateHistory", includeTemplateHistory ? "true" : "false");
}

std::string DescribeMonitorGroupsRequest::getDynamicTagRuleId()const
{
	return dynamicTagRuleId_;
}

void DescribeMonitorGroupsRequest::setDynamicTagRuleId(const std::string& dynamicTagRuleId)
{
	dynamicTagRuleId_ = dynamicTagRuleId;
	setParameter("DynamicTagRuleId", dynamicTagRuleId);
}

std::string DescribeMonitorGroupsRequest::getType()const
{
	return type_;
}

void DescribeMonitorGroupsRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

int DescribeMonitorGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMonitorGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeMonitorGroupsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeMonitorGroupsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeMonitorGroupsRequest::getGroupFounderTagKey()const
{
	return groupFounderTagKey_;
}

void DescribeMonitorGroupsRequest::setGroupFounderTagKey(const std::string& groupFounderTagKey)
{
	groupFounderTagKey_ = groupFounderTagKey;
	setParameter("GroupFounderTagKey", groupFounderTagKey);
}

int DescribeMonitorGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMonitorGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeMonitorGroupsRequest::Tag> DescribeMonitorGroupsRequest::getTag()const
{
	return tag_;
}

void DescribeMonitorGroupsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeMonitorGroupsRequest::getGroupFounderTagValue()const
{
	return groupFounderTagValue_;
}

void DescribeMonitorGroupsRequest::setGroupFounderTagValue(const std::string& groupFounderTagValue)
{
	groupFounderTagValue_ = groupFounderTagValue;
	setParameter("GroupFounderTagValue", groupFounderTagValue);
}

std::string DescribeMonitorGroupsRequest::getKeyword()const
{
	return keyword_;
}

void DescribeMonitorGroupsRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string DescribeMonitorGroupsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeMonitorGroupsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DescribeMonitorGroupsRequest::getGroupName()const
{
	return groupName_;
}

void DescribeMonitorGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string DescribeMonitorGroupsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeMonitorGroupsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeMonitorGroupsRequest::getServiceId()const
{
	return serviceId_;
}

void DescribeMonitorGroupsRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

