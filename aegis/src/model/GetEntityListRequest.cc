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

#include <alibabacloud/aegis/model/GetEntityListRequest.h>

using AlibabaCloud::Aegis::Model::GetEntityListRequest;

GetEntityListRequest::GetEntityListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "GetEntityList")
{}

GetEntityListRequest::~GetEntityListRequest()
{}

long GetEntityListRequest::getGroupId()const
{
	return groupId_;
}

void GetEntityListRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

int GetEntityListRequest::getPageSize()const
{
	return pageSize_;
}

void GetEntityListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string GetEntityListRequest::getRemark()const
{
	return remark_;
}

void GetEntityListRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string GetEntityListRequest::getEventType()const
{
	return eventType_;
}

void GetEntityListRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

int GetEntityListRequest::getCurrentPage()const
{
	return currentPage_;
}

void GetEntityListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string GetEntityListRequest::getRegionNo()const
{
	return regionNo_;
}

void GetEntityListRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setCoreParameter("RegionNo", regionNo);
}

