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

#include <alibabacloud/vcs/model/ListPersonsRequest.h>

using AlibabaCloud::Vcs::Model::ListPersonsRequest;

ListPersonsRequest::ListPersonsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListPersons")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonsRequest::~ListPersonsRequest()
{}

std::string ListPersonsRequest::getAlgorithmType()const
{
	return algorithmType_;
}

void ListPersonsRequest::setAlgorithmType(const std::string& algorithmType)
{
	algorithmType_ = algorithmType;
	setBodyParameter("AlgorithmType", algorithmType);
}

std::string ListPersonsRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonsRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonsRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListPersonsRequest::getPageNo()const
{
	return pageNo_;
}

void ListPersonsRequest::setPageNo(const std::string& pageNo)
{
	pageNo_ = pageNo;
	setBodyParameter("PageNo", pageNo);
}

std::string ListPersonsRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

