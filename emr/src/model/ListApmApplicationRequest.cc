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

#include <alibabacloud/emr/model/ListApmApplicationRequest.h>

using AlibabaCloud::Emr::Model::ListApmApplicationRequest;

ListApmApplicationRequest::ListApmApplicationRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListApmApplication")
{
	setMethod(HttpRequest::Method::Post);
}

ListApmApplicationRequest::~ListApmApplicationRequest()
{}

long ListApmApplicationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListApmApplicationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ListApmApplicationRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListApmApplicationRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListApmApplicationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApmApplicationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListApmApplicationRequest::getFinalStatus()const
{
	return finalStatus_;
}

void ListApmApplicationRequest::setFinalStatus(const std::string& finalStatus)
{
	finalStatus_ = finalStatus;
	setParameter("FinalStatus", finalStatus);
}

std::string ListApmApplicationRequest::getRegionId()const
{
	return regionId_;
}

void ListApmApplicationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ListApmApplicationRequest::getPageSize()const
{
	return pageSize_;
}

void ListApmApplicationRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListApmApplicationRequest::getState()const
{
	return state_;
}

void ListApmApplicationRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

long ListApmApplicationRequest::getStartTimeTo()const
{
	return startTimeTo_;
}

void ListApmApplicationRequest::setStartTimeTo(long startTimeTo)
{
	startTimeTo_ = startTimeTo;
	setParameter("StartTimeTo", std::to_string(startTimeTo));
}

std::string ListApmApplicationRequest::getDiagnoseResult()const
{
	return diagnoseResult_;
}

void ListApmApplicationRequest::setDiagnoseResult(const std::string& diagnoseResult)
{
	diagnoseResult_ = diagnoseResult;
	setParameter("DiagnoseResult", diagnoseResult);
}

long ListApmApplicationRequest::getEndTimeFrom()const
{
	return endTimeFrom_;
}

void ListApmApplicationRequest::setEndTimeFrom(long endTimeFrom)
{
	endTimeFrom_ = endTimeFrom;
	setParameter("EndTimeFrom", std::to_string(endTimeFrom));
}

std::string ListApmApplicationRequest::getOrderBy()const
{
	return orderBy_;
}

void ListApmApplicationRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

std::string ListApmApplicationRequest::getClusterId()const
{
	return clusterId_;
}

void ListApmApplicationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListApmApplicationRequest::getJobType()const
{
	return jobType_;
}

void ListApmApplicationRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

long ListApmApplicationRequest::getStartTimeFrom()const
{
	return startTimeFrom_;
}

void ListApmApplicationRequest::setStartTimeFrom(long startTimeFrom)
{
	startTimeFrom_ = startTimeFrom;
	setParameter("StartTimeFrom", std::to_string(startTimeFrom));
}

std::string ListApmApplicationRequest::getAppId()const
{
	return appId_;
}

void ListApmApplicationRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ListApmApplicationRequest::getName()const
{
	return name_;
}

void ListApmApplicationRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ListApmApplicationRequest::getUser()const
{
	return user_;
}

void ListApmApplicationRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

long ListApmApplicationRequest::getEndTimeTo()const
{
	return endTimeTo_;
}

void ListApmApplicationRequest::setEndTimeTo(long endTimeTo)
{
	endTimeTo_ = endTimeTo;
	setParameter("EndTimeTo", std::to_string(endTimeTo));
}

std::string ListApmApplicationRequest::getQueue()const
{
	return queue_;
}

void ListApmApplicationRequest::setQueue(const std::string& queue)
{
	queue_ = queue;
	setParameter("Queue", queue);
}

