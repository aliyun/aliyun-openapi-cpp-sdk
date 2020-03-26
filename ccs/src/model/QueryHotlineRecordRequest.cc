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

#include <alibabacloud/ccs/model/QueryHotlineRecordRequest.h>

using AlibabaCloud::Ccs::Model::QueryHotlineRecordRequest;

QueryHotlineRecordRequest::QueryHotlineRecordRequest() :
	RpcServiceRequest("ccs", "2017-10-01", "QueryHotlineRecord")
{
	setMethod(HttpRequest::Method::Post);
}

QueryHotlineRecordRequest::~QueryHotlineRecordRequest()
{}

long QueryHotlineRecordRequest::getMaxTalkDuration()const
{
	return maxTalkDuration_;
}

void QueryHotlineRecordRequest::setMaxTalkDuration(long maxTalkDuration)
{
	maxTalkDuration_ = maxTalkDuration;
	setParameter("MaxTalkDuration", std::to_string(maxTalkDuration));
}

std::string QueryHotlineRecordRequest::getStartTime()const
{
	return startTime_;
}

void QueryHotlineRecordRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int QueryHotlineRecordRequest::getPageNum()const
{
	return pageNum_;
}

void QueryHotlineRecordRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string QueryHotlineRecordRequest::getCategoryIds()const
{
	return categoryIds_;
}

void QueryHotlineRecordRequest::setCategoryIds(const std::string& categoryIds)
{
	categoryIds_ = categoryIds;
	setParameter("CategoryIds", categoryIds);
}

int QueryHotlineRecordRequest::getPageSize()const
{
	return pageSize_;
}

void QueryHotlineRecordRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryHotlineRecordRequest::getCallType()const
{
	return callType_;
}

void QueryHotlineRecordRequest::setCallType(const std::string& callType)
{
	callType_ = callType;
	setParameter("CallType", callType);
}

std::string QueryHotlineRecordRequest::getCcsInstanceId()const
{
	return ccsInstanceId_;
}

void QueryHotlineRecordRequest::setCcsInstanceId(const std::string& ccsInstanceId)
{
	ccsInstanceId_ = ccsInstanceId;
	setParameter("CcsInstanceId", ccsInstanceId);
}

std::string QueryHotlineRecordRequest::getVisitorId()const
{
	return visitorId_;
}

void QueryHotlineRecordRequest::setVisitorId(const std::string& visitorId)
{
	visitorId_ = visitorId;
	setParameter("VisitorId", visitorId);
}

std::string QueryHotlineRecordRequest::getAgentId()const
{
	return agentId_;
}

void QueryHotlineRecordRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setParameter("AgentId", agentId);
}

std::string QueryHotlineRecordRequest::getGroupId()const
{
	return groupId_;
}

void QueryHotlineRecordRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string QueryHotlineRecordRequest::getEndTime()const
{
	return endTime_;
}

void QueryHotlineRecordRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string QueryHotlineRecordRequest::getSatisfaction()const
{
	return satisfaction_;
}

void QueryHotlineRecordRequest::setSatisfaction(const std::string& satisfaction)
{
	satisfaction_ = satisfaction;
	setParameter("Satisfaction", satisfaction);
}

long QueryHotlineRecordRequest::getMinTalkDuratoin()const
{
	return minTalkDuratoin_;
}

void QueryHotlineRecordRequest::setMinTalkDuratoin(long minTalkDuratoin)
{
	minTalkDuratoin_ = minTalkDuratoin;
	setParameter("MinTalkDuratoin", std::to_string(minTalkDuratoin));
}

std::string QueryHotlineRecordRequest::getVisitorProvince()const
{
	return visitorProvince_;
}

void QueryHotlineRecordRequest::setVisitorProvince(const std::string& visitorProvince)
{
	visitorProvince_ = visitorProvince;
	setParameter("VisitorProvince", visitorProvince);
}

std::string QueryHotlineRecordRequest::getVisitorPhone()const
{
	return visitorPhone_;
}

void QueryHotlineRecordRequest::setVisitorPhone(const std::string& visitorPhone)
{
	visitorPhone_ = visitorPhone;
	setParameter("VisitorPhone", visitorPhone);
}

std::string QueryHotlineRecordRequest::getStatus()const
{
	return status_;
}

void QueryHotlineRecordRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

