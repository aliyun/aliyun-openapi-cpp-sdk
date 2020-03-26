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

#include <alibabacloud/emr/model/ListFlowJobHistoryRequest.h>

using AlibabaCloud::Emr::Model::ListFlowJobHistoryRequest;

ListFlowJobHistoryRequest::ListFlowJobHistoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListFlowJobHistory")
{
	setMethod(HttpRequest::Method::Post);
}

ListFlowJobHistoryRequest::~ListFlowJobHistoryRequest()
{}

std::string ListFlowJobHistoryRequest::getTimeRange()const
{
	return timeRange_;
}

void ListFlowJobHistoryRequest::setTimeRange(const std::string& timeRange)
{
	timeRange_ = timeRange;
	setParameter("TimeRange", timeRange);
}

std::vector<std::string> ListFlowJobHistoryRequest::getStatusList()const
{
	return statusList_;
}

void ListFlowJobHistoryRequest::setStatusList(const std::vector<std::string>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setParameter("StatusList."+ std::to_string(dep1), statusList.at(dep1));
	}
}

std::string ListFlowJobHistoryRequest::getJobType()const
{
	return jobType_;
}

void ListFlowJobHistoryRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

int ListFlowJobHistoryRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListFlowJobHistoryRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListFlowJobHistoryRequest::getInstanceId()const
{
	return instanceId_;
}

void ListFlowJobHistoryRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListFlowJobHistoryRequest::getRegionId()const
{
	return regionId_;
}

void ListFlowJobHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListFlowJobHistoryRequest::getPageSize()const
{
	return pageSize_;
}

void ListFlowJobHistoryRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListFlowJobHistoryRequest::getId()const
{
	return id_;
}

void ListFlowJobHistoryRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ListFlowJobHistoryRequest::getProjectId()const
{
	return projectId_;
}

void ListFlowJobHistoryRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

