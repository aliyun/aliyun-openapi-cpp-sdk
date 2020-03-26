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

#include <alibabacloud/emr/model/ListFlowProjectClusterSettingRequest.h>

using AlibabaCloud::Emr::Model::ListFlowProjectClusterSettingRequest;

ListFlowProjectClusterSettingRequest::ListFlowProjectClusterSettingRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowProjectClusterSetting")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowProjectClusterSettingRequest::~ListFlowProjectClusterSettingRequest()
{}

int ListFlowProjectClusterSettingRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowProjectClusterSettingRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowProjectClusterSettingRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowProjectClusterSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowProjectClusterSettingRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowProjectClusterSettingRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowProjectClusterSettingRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowProjectClusterSettingRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

