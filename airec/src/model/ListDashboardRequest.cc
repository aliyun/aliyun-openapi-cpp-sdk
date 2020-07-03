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

#include <alibabacloud/airec/model/ListDashboardRequest.h>

using AlibabaCloud::Airec::Model::ListDashboardRequest;

ListDashboardRequest::ListDashboardRequest() :
	RoaServiceRequest("airec", "2018-10-12")
{
	setResourcePath("/openapi/instances/[InstanceId]/dashboard/statistics");
	setMethod(HttpRequest::Method::Get);
}

ListDashboardRequest::~ListDashboardRequest()
{}

std::string ListDashboardRequest::getTraceId()const
{
	return traceId_;
}

void ListDashboardRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setParameter("TraceId", traceId);
}

std::string ListDashboardRequest::getInstanceId()const
{
	return instanceId_;
}

void ListDashboardRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long ListDashboardRequest::getEndDate()const
{
	return endDate_;
}

void ListDashboardRequest::setEndDate(long endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", std::to_string(endDate));
}

int ListDashboardRequest::getSize()const
{
	return size_;
}

void ListDashboardRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListDashboardRequest::getSceneId()const
{
	return sceneId_;
}

void ListDashboardRequest::setSceneId(const std::string& sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", sceneId);
}

int ListDashboardRequest::getPage()const
{
	return page_;
}

void ListDashboardRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

long ListDashboardRequest::getStartDate()const
{
	return startDate_;
}

void ListDashboardRequest::setStartDate(long startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", std::to_string(startDate));
}

