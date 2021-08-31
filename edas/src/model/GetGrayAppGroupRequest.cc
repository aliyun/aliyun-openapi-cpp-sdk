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

#include <alibabacloud/edas/model/GetGrayAppGroupRequest.h>

using AlibabaCloud::Edas::Model::GetGrayAppGroupRequest;

GetGrayAppGroupRequest::GetGrayAppGroupRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/gray/app_group_list");
	setMethod(HttpRequest::Method::Get);
}

GetGrayAppGroupRequest::~GetGrayAppGroupRequest()
{}

std::string GetGrayAppGroupRequest::getAppIds()const
{
	return appIds_;
}

void GetGrayAppGroupRequest::setAppIds(const std::string& appIds)
{
	appIds_ = appIds;
	setParameter("AppIds", appIds);
}

std::string GetGrayAppGroupRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void GetGrayAppGroupRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string GetGrayAppGroupRequest::getPointcutName()const
{
	return pointcutName_;
}

void GetGrayAppGroupRequest::setPointcutName(const std::string& pointcutName)
{
	pointcutName_ = pointcutName;
	setParameter("PointcutName", pointcutName);
}

