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

#include <alibabacloud/retailcloud/model/ListPodsRequest.h>

using AlibabaCloud::Retailcloud::Model::ListPodsRequest;

ListPodsRequest::ListPodsRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListPods")
{
	setMethod(HttpRequest::Method::Post);
}

ListPodsRequest::~ListPodsRequest()
{}

std::vector<int> ListPodsRequest::getStatusList()const
{
	return statusList_;
}

void ListPodsRequest::setStatusList(const std::vector<int>& statusList)
{
	statusList_ = statusList;
	for(int dep1 = 0; dep1!= statusList.size(); dep1++) {
		setBodyParameter("StatusList."+ std::to_string(dep1), std::to_string(statusList.at(dep1)));
	}
}

long ListPodsRequest::getDeployOrderId()const
{
	return deployOrderId_;
}

void ListPodsRequest::setDeployOrderId(long deployOrderId)
{
	deployOrderId_ = deployOrderId;
	setParameter("DeployOrderId", std::to_string(deployOrderId));
}

int ListPodsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPodsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListPodsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPodsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::vector<int> ListPodsRequest::getResultList()const
{
	return resultList_;
}

void ListPodsRequest::setResultList(const std::vector<int>& resultList)
{
	resultList_ = resultList;
	for(int dep1 = 0; dep1!= resultList.size(); dep1++) {
		setBodyParameter("ResultList."+ std::to_string(dep1), std::to_string(resultList.at(dep1)));
	}
}

