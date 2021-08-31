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

#include <alibabacloud/edas/model/UpdateSwimmingLaneRequest.h>

using AlibabaCloud::Edas::Model::UpdateSwimmingLaneRequest;

UpdateSwimmingLaneRequest::UpdateSwimmingLaneRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/trafficmgnt/swimming_lanes");
	setMethod(HttpRequest::Method::Put);
}

UpdateSwimmingLaneRequest::~UpdateSwimmingLaneRequest()
{}

std::string UpdateSwimmingLaneRequest::getAppInfos()const
{
	return appInfos_;
}

void UpdateSwimmingLaneRequest::setAppInfos(const std::string& appInfos)
{
	appInfos_ = appInfos;
	setParameter("AppInfos", appInfos);
}

long UpdateSwimmingLaneRequest::getLaneId()const
{
	return laneId_;
}

void UpdateSwimmingLaneRequest::setLaneId(long laneId)
{
	laneId_ = laneId;
	setParameter("LaneId", std::to_string(laneId));
}

std::string UpdateSwimmingLaneRequest::getEntryRules()const
{
	return entryRules_;
}

void UpdateSwimmingLaneRequest::setEntryRules(const std::string& entryRules)
{
	entryRules_ = entryRules;
	setParameter("EntryRules", entryRules);
}

bool UpdateSwimmingLaneRequest::getEnableRules()const
{
	return enableRules_;
}

void UpdateSwimmingLaneRequest::setEnableRules(bool enableRules)
{
	enableRules_ = enableRules;
	setParameter("EnableRules", enableRules ? "true" : "false");
}

std::string UpdateSwimmingLaneRequest::getName()const
{
	return name_;
}

void UpdateSwimmingLaneRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

