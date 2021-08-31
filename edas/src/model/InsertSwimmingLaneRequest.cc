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

#include <alibabacloud/edas/model/InsertSwimmingLaneRequest.h>

using AlibabaCloud::Edas::Model::InsertSwimmingLaneRequest;

InsertSwimmingLaneRequest::InsertSwimmingLaneRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/trafficmgnt/swimming_lanes");
	setMethod(HttpRequest::Method::Post);
}

InsertSwimmingLaneRequest::~InsertSwimmingLaneRequest()
{}

std::string InsertSwimmingLaneRequest::getAppInfos()const
{
	return appInfos_;
}

void InsertSwimmingLaneRequest::setAppInfos(const std::string& appInfos)
{
	appInfos_ = appInfos;
	setParameter("AppInfos", appInfos);
}

std::string InsertSwimmingLaneRequest::getEntryRules()const
{
	return entryRules_;
}

void InsertSwimmingLaneRequest::setEntryRules(const std::string& entryRules)
{
	entryRules_ = entryRules;
	setParameter("EntryRules", entryRules);
}

std::string InsertSwimmingLaneRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void InsertSwimmingLaneRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

bool InsertSwimmingLaneRequest::getEnableRules()const
{
	return enableRules_;
}

void InsertSwimmingLaneRequest::setEnableRules(bool enableRules)
{
	enableRules_ = enableRules;
	setParameter("EnableRules", enableRules ? "true" : "false");
}

long InsertSwimmingLaneRequest::getGroupId()const
{
	return groupId_;
}

void InsertSwimmingLaneRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string InsertSwimmingLaneRequest::getName()const
{
	return name_;
}

void InsertSwimmingLaneRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string InsertSwimmingLaneRequest::getTag()const
{
	return tag_;
}

void InsertSwimmingLaneRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

