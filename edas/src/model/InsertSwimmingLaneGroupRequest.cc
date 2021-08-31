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

#include <alibabacloud/edas/model/InsertSwimmingLaneGroupRequest.h>

using AlibabaCloud::Edas::Model::InsertSwimmingLaneGroupRequest;

InsertSwimmingLaneGroupRequest::InsertSwimmingLaneGroupRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/trafficmgnt/swimming_lane_groups");
	setMethod(HttpRequest::Method::Post);
}

InsertSwimmingLaneGroupRequest::~InsertSwimmingLaneGroupRequest()
{}

std::string InsertSwimmingLaneGroupRequest::getAppIds()const
{
	return appIds_;
}

void InsertSwimmingLaneGroupRequest::setAppIds(const std::string& appIds)
{
	appIds_ = appIds;
	setParameter("AppIds", appIds);
}

std::string InsertSwimmingLaneGroupRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void InsertSwimmingLaneGroupRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string InsertSwimmingLaneGroupRequest::getName()const
{
	return name_;
}

void InsertSwimmingLaneGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string InsertSwimmingLaneGroupRequest::getEntryApp()const
{
	return entryApp_;
}

void InsertSwimmingLaneGroupRequest::setEntryApp(const std::string& entryApp)
{
	entryApp_ = entryApp;
	setParameter("EntryApp", entryApp);
}

