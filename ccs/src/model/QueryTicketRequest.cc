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

#include <alibabacloud/ccs/model/QueryTicketRequest.h>

using AlibabaCloud::Ccs::Model::QueryTicketRequest;

QueryTicketRequest::QueryTicketRequest() :
	RpcServiceRequest("ccs", "2017-10-01", "QueryTicket")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTicketRequest::~QueryTicketRequest()
{}

std::string QueryTicketRequest::getCreatorId()const
{
	return creatorId_;
}

void QueryTicketRequest::setCreatorId(const std::string& creatorId)
{
	creatorId_ = creatorId;
	setParameter("CreatorId", creatorId);
}

std::string QueryTicketRequest::getEndTime()const
{
	return endTime_;
}

void QueryTicketRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryTicketRequest::getStartTime()const
{
	return startTime_;
}

void QueryTicketRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int QueryTicketRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTicketRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string QueryTicketRequest::getType()const
{
	return type_;
}

void QueryTicketRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string QueryTicketRequest::getStage()const
{
	return stage_;
}

void QueryTicketRequest::setStage(const std::string& stage)
{
	stage_ = stage;
	setParameter("Stage", stage);
}

int QueryTicketRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTicketRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTicketRequest::getCcsInstanceId()const
{
	return ccsInstanceId_;
}

void QueryTicketRequest::setCcsInstanceId(const std::string& ccsInstanceId)
{
	ccsInstanceId_ = ccsInstanceId;
	setParameter("CcsInstanceId", ccsInstanceId);
}

