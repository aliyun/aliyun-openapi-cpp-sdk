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

#include <alibabacloud/retailcloud/model/ListDeployOrdersRequest.h>

using AlibabaCloud::Retailcloud::Model::ListDeployOrdersRequest;

ListDeployOrdersRequest::ListDeployOrdersRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListDeployOrders")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeployOrdersRequest::~ListDeployOrdersRequest()
{}

std::string ListDeployOrdersRequest::getStartTimeGreaterThanOrEqualTo()const
{
	return startTimeGreaterThanOrEqualTo_;
}

void ListDeployOrdersRequest::setStartTimeGreaterThanOrEqualTo(const std::string& startTimeGreaterThanOrEqualTo)
{
	startTimeGreaterThanOrEqualTo_ = startTimeGreaterThanOrEqualTo;
	setParameter("StartTimeGreaterThanOrEqualTo", startTimeGreaterThanOrEqualTo);
}

std::vector<int> ListDeployOrdersRequest::getStatusList()const
{
	return statusList_;
}

void ListDeployOrdersRequest::setStatusList(const std::vector<int>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setBodyParameter("StatusList."+ std::to_string(dep1), std::to_string(statusList.at(dep1)));
	}
}

long ListDeployOrdersRequest::getEnvId()const
{
	return envId_;
}

void ListDeployOrdersRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

std::string ListDeployOrdersRequest::getEndTimeGreaterThan()const
{
	return endTimeGreaterThan_;
}

void ListDeployOrdersRequest::setEndTimeGreaterThan(const std::string& endTimeGreaterThan)
{
	endTimeGreaterThan_ = endTimeGreaterThan;
	setParameter("EndTimeGreaterThan", endTimeGreaterThan);
}

int ListDeployOrdersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDeployOrdersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListDeployOrdersRequest::getPauseType()const
{
	return pauseType_;
}

void ListDeployOrdersRequest::setPauseType(const std::string& pauseType)
{
	pauseType_ = pauseType;
	setParameter("PauseType", pauseType);
}

std::vector<int> ListDeployOrdersRequest::getResultList()const
{
	return resultList_;
}

void ListDeployOrdersRequest::setResultList(const std::vector<int>& resultList)
{
	resultList_ = resultList;
	for(int dep1 = 0; dep1!= resultList.size(); dep1++) {
		setBodyParameter("ResultList."+ std::to_string(dep1), std::to_string(resultList.at(dep1)));
	}
}

std::string ListDeployOrdersRequest::getStartTimeGreaterThan()const
{
	return startTimeGreaterThan_;
}

void ListDeployOrdersRequest::setStartTimeGreaterThan(const std::string& startTimeGreaterThan)
{
	startTimeGreaterThan_ = startTimeGreaterThan;
	setParameter("StartTimeGreaterThan", startTimeGreaterThan);
}

std::string ListDeployOrdersRequest::getStartTimeLessThan()const
{
	return startTimeLessThan_;
}

void ListDeployOrdersRequest::setStartTimeLessThan(const std::string& startTimeLessThan)
{
	startTimeLessThan_ = startTimeLessThan;
	setParameter("StartTimeLessThan", startTimeLessThan);
}

std::string ListDeployOrdersRequest::getStartTimeLessThanOrEqualTo()const
{
	return startTimeLessThanOrEqualTo_;
}

void ListDeployOrdersRequest::setStartTimeLessThanOrEqualTo(const std::string& startTimeLessThanOrEqualTo)
{
	startTimeLessThanOrEqualTo_ = startTimeLessThanOrEqualTo;
	setParameter("StartTimeLessThanOrEqualTo", startTimeLessThanOrEqualTo);
}

long ListDeployOrdersRequest::getAppId()const
{
	return appId_;
}

void ListDeployOrdersRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string ListDeployOrdersRequest::getEnvType()const
{
	return envType_;
}

void ListDeployOrdersRequest::setEnvType(const std::string& envType)
{
	envType_ = envType;
	setParameter("EnvType", envType);
}

int ListDeployOrdersRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeployOrdersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListDeployOrdersRequest::getEndTimeGreaterThanOrEqualTo()const
{
	return endTimeGreaterThanOrEqualTo_;
}

void ListDeployOrdersRequest::setEndTimeGreaterThanOrEqualTo(const std::string& endTimeGreaterThanOrEqualTo)
{
	endTimeGreaterThanOrEqualTo_ = endTimeGreaterThanOrEqualTo;
	setParameter("EndTimeGreaterThanOrEqualTo", endTimeGreaterThanOrEqualTo);
}

std::string ListDeployOrdersRequest::getEndTimeLessThan()const
{
	return endTimeLessThan_;
}

void ListDeployOrdersRequest::setEndTimeLessThan(const std::string& endTimeLessThan)
{
	endTimeLessThan_ = endTimeLessThan;
	setParameter("EndTimeLessThan", endTimeLessThan);
}

std::string ListDeployOrdersRequest::getEndTimeLessThanOrEqualTo()const
{
	return endTimeLessThanOrEqualTo_;
}

void ListDeployOrdersRequest::setEndTimeLessThanOrEqualTo(const std::string& endTimeLessThanOrEqualTo)
{
	endTimeLessThanOrEqualTo_ = endTimeLessThanOrEqualTo;
	setParameter("EndTimeLessThanOrEqualTo", endTimeLessThanOrEqualTo);
}

std::string ListDeployOrdersRequest::getPartitionType()const
{
	return partitionType_;
}

void ListDeployOrdersRequest::setPartitionType(const std::string& partitionType)
{
	partitionType_ = partitionType;
	setParameter("PartitionType", partitionType);
}

std::string ListDeployOrdersRequest::getDeployCategory()const
{
	return deployCategory_;
}

void ListDeployOrdersRequest::setDeployCategory(const std::string& deployCategory)
{
	deployCategory_ = deployCategory;
	setParameter("DeployCategory", deployCategory);
}

std::string ListDeployOrdersRequest::getDeployType()const
{
	return deployType_;
}

void ListDeployOrdersRequest::setDeployType(const std::string& deployType)
{
	deployType_ = deployType;
	setParameter("DeployType", deployType);
}

int ListDeployOrdersRequest::getStatus()const
{
	return status_;
}

void ListDeployOrdersRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

