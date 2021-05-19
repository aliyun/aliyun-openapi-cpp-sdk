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

#include <alibabacloud/scsp/model/GetHotlineAgentDetailReportRequest.h>

using AlibabaCloud::Scsp::Model::GetHotlineAgentDetailReportRequest;

GetHotlineAgentDetailReportRequest::GetHotlineAgentDetailReportRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetHotlineAgentDetailReport")
{
	setMethod(HttpRequest::Method::Post);
}

GetHotlineAgentDetailReportRequest::~GetHotlineAgentDetailReportRequest()
{}

std::vector<long> GetHotlineAgentDetailReportRequest::getDepIds()const
{
	return depIds_;
}

void GetHotlineAgentDetailReportRequest::setDepIds(const std::vector<long>& depIds)
{
	depIds_ = depIds;
	for(int dep1 = 0; dep1!= depIds.size(); dep1++) {
		setParameter("DepIds."+ std::to_string(dep1), std::to_string(depIds.at(dep1)));
	}
}

long GetHotlineAgentDetailReportRequest::getEndDate()const
{
	return endDate_;
}

void GetHotlineAgentDetailReportRequest::setEndDate(long endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", std::to_string(endDate));
}

std::string GetHotlineAgentDetailReportRequest::getInstanceId()const
{
	return instanceId_;
}

void GetHotlineAgentDetailReportRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<long> GetHotlineAgentDetailReportRequest::getGroupIds()const
{
	return groupIds_;
}

void GetHotlineAgentDetailReportRequest::setGroupIds(const std::vector<long>& groupIds)
{
	groupIds_ = groupIds;
	for(int dep1 = 0; dep1!= groupIds.size(); dep1++) {
		setParameter("GroupIds."+ std::to_string(dep1), std::to_string(groupIds.at(dep1)));
	}
}

int GetHotlineAgentDetailReportRequest::getPageSize()const
{
	return pageSize_;
}

void GetHotlineAgentDetailReportRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int GetHotlineAgentDetailReportRequest::getCurrentPage()const
{
	return currentPage_;
}

void GetHotlineAgentDetailReportRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long GetHotlineAgentDetailReportRequest::getStartDate()const
{
	return startDate_;
}

void GetHotlineAgentDetailReportRequest::setStartDate(long startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", std::to_string(startDate));
}

