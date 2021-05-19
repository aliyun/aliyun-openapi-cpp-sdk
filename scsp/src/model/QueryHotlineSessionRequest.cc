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

#include <alibabacloud/scsp/model/QueryHotlineSessionRequest.h>

using AlibabaCloud::Scsp::Model::QueryHotlineSessionRequest;

QueryHotlineSessionRequest::QueryHotlineSessionRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QueryHotlineSession")
{
	setMethod(HttpRequest::Method::Post);
}

QueryHotlineSessionRequest::~QueryHotlineSessionRequest()
{}

long QueryHotlineSessionRequest::getGroupId()const
{
	return groupId_;
}

void QueryHotlineSessionRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", std::to_string(groupId));
}

std::string QueryHotlineSessionRequest::getServicerId()const
{
	return servicerId_;
}

void QueryHotlineSessionRequest::setServicerId(const std::string& servicerId)
{
	servicerId_ = servicerId;
	setParameter("ServicerId", servicerId);
}

std::string QueryHotlineSessionRequest::getParams()const
{
	return params_;
}

void QueryHotlineSessionRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string QueryHotlineSessionRequest::getGroupName()const
{
	return groupName_;
}

void QueryHotlineSessionRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string QueryHotlineSessionRequest::getAcid()const
{
	return acid_;
}

void QueryHotlineSessionRequest::setAcid(const std::string& acid)
{
	acid_ = acid;
	setParameter("Acid", acid);
}

std::string QueryHotlineSessionRequest::getCallingNumber()const
{
	return callingNumber_;
}

void QueryHotlineSessionRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setParameter("CallingNumber", callingNumber);
}

long QueryHotlineSessionRequest::getQueryEndTime()const
{
	return queryEndTime_;
}

void QueryHotlineSessionRequest::setQueryEndTime(long queryEndTime)
{
	queryEndTime_ = queryEndTime;
	setParameter("QueryEndTime", std::to_string(queryEndTime));
}

std::string QueryHotlineSessionRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryHotlineSessionRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryHotlineSessionRequest::getCalledNumber()const
{
	return calledNumber_;
}

void QueryHotlineSessionRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string QueryHotlineSessionRequest::getRequestId()const
{
	return requestId_;
}

void QueryHotlineSessionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

int QueryHotlineSessionRequest::getPageNo()const
{
	return pageNo_;
}

void QueryHotlineSessionRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

long QueryHotlineSessionRequest::getQueryStartTime()const
{
	return queryStartTime_;
}

void QueryHotlineSessionRequest::setQueryStartTime(long queryStartTime)
{
	queryStartTime_ = queryStartTime;
	setParameter("QueryStartTime", std::to_string(queryStartTime));
}

std::string QueryHotlineSessionRequest::getServicerName()const
{
	return servicerName_;
}

void QueryHotlineSessionRequest::setServicerName(const std::string& servicerName)
{
	servicerName_ = servicerName;
	setParameter("ServicerName", servicerName);
}

int QueryHotlineSessionRequest::getPageSize()const
{
	return pageSize_;
}

void QueryHotlineSessionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryHotlineSessionRequest::getCallResult()const
{
	return callResult_;
}

void QueryHotlineSessionRequest::setCallResult(const std::string& callResult)
{
	callResult_ = callResult;
	setParameter("CallResult", callResult);
}

int QueryHotlineSessionRequest::getCallType()const
{
	return callType_;
}

void QueryHotlineSessionRequest::setCallType(int callType)
{
	callType_ = callType;
	setParameter("CallType", std::to_string(callType));
}

std::string QueryHotlineSessionRequest::getMemberName()const
{
	return memberName_;
}

void QueryHotlineSessionRequest::setMemberName(const std::string& memberName)
{
	memberName_ = memberName;
	setParameter("MemberName", memberName);
}

std::string QueryHotlineSessionRequest::getMemberId()const
{
	return memberId_;
}

void QueryHotlineSessionRequest::setMemberId(const std::string& memberId)
{
	memberId_ = memberId;
	setParameter("MemberId", memberId);
}

