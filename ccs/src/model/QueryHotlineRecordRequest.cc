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
{}

QueryHotlineRecordRequest::~QueryHotlineRecordRequest()
{}

std::string QueryHotlineRecordRequest::getAgentId()const
{
	return agentId_;
}

void QueryHotlineRecordRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

long QueryHotlineRecordRequest::getMaxTalkDuration()const
{
	return maxTalkDuration_;
}

void QueryHotlineRecordRequest::setMaxTalkDuration(long maxTalkDuration)
{
	maxTalkDuration_ = maxTalkDuration;
	setCoreParameter("MaxTalkDuration", maxTalkDuration);
}

std::string QueryHotlineRecordRequest::getGroupId()const
{
	return groupId_;
}

void QueryHotlineRecordRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string QueryHotlineRecordRequest::getEndTime()const
{
	return endTime_;
}

void QueryHotlineRecordRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string QueryHotlineRecordRequest::getStartTime()const
{
	return startTime_;
}

void QueryHotlineRecordRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int QueryHotlineRecordRequest::getPageNum()const
{
	return pageNum_;
}

void QueryHotlineRecordRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryHotlineRecordRequest::getSatisfaction()const
{
	return satisfaction_;
}

void QueryHotlineRecordRequest::setSatisfaction(const std::string& satisfaction)
{
	satisfaction_ = satisfaction;
	setCoreParameter("Satisfaction", satisfaction);
}

long QueryHotlineRecordRequest::getMinTalkDuratoin()const
{
	return minTalkDuratoin_;
}

void QueryHotlineRecordRequest::setMinTalkDuratoin(long minTalkDuratoin)
{
	minTalkDuratoin_ = minTalkDuratoin;
	setCoreParameter("MinTalkDuratoin", minTalkDuratoin);
}

std::string QueryHotlineRecordRequest::getCategoryIds()const
{
	return categoryIds_;
}

void QueryHotlineRecordRequest::setCategoryIds(const std::string& categoryIds)
{
	categoryIds_ = categoryIds;
	setCoreParameter("CategoryIds", categoryIds);
}

std::string QueryHotlineRecordRequest::getVisitorProvince()const
{
	return visitorProvince_;
}

void QueryHotlineRecordRequest::setVisitorProvince(const std::string& visitorProvince)
{
	visitorProvince_ = visitorProvince;
	setCoreParameter("VisitorProvince", visitorProvince);
}

int QueryHotlineRecordRequest::getPageSize()const
{
	return pageSize_;
}

void QueryHotlineRecordRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryHotlineRecordRequest::getCallType()const
{
	return callType_;
}

void QueryHotlineRecordRequest::setCallType(const std::string& callType)
{
	callType_ = callType;
	setCoreParameter("CallType", callType);
}

std::string QueryHotlineRecordRequest::getCcsInstanceId()const
{
	return ccsInstanceId_;
}

void QueryHotlineRecordRequest::setCcsInstanceId(const std::string& ccsInstanceId)
{
	ccsInstanceId_ = ccsInstanceId;
	setCoreParameter("CcsInstanceId", ccsInstanceId);
}

std::string QueryHotlineRecordRequest::getVisitorPhone()const
{
	return visitorPhone_;
}

void QueryHotlineRecordRequest::setVisitorPhone(const std::string& visitorPhone)
{
	visitorPhone_ = visitorPhone;
	setCoreParameter("VisitorPhone", visitorPhone);
}

std::string QueryHotlineRecordRequest::getVisitorId()const
{
	return visitorId_;
}

void QueryHotlineRecordRequest::setVisitorId(const std::string& visitorId)
{
	visitorId_ = visitorId;
	setCoreParameter("VisitorId", visitorId);
}

std::string QueryHotlineRecordRequest::getStatus()const
{
	return status_;
}

void QueryHotlineRecordRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

