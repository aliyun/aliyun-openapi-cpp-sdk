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

#include <alibabacloud/scsp/model/GetOuterCallCenterDataListRequest.h>

using AlibabaCloud::Scsp::Model::GetOuterCallCenterDataListRequest;

GetOuterCallCenterDataListRequest::GetOuterCallCenterDataListRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "GetOuterCallCenterDataList")
{
	setMethod(HttpRequest::Method::Post);
}

GetOuterCallCenterDataListRequest::~GetOuterCallCenterDataListRequest()
{}

std::string GetOuterCallCenterDataListRequest::getQueryEndTime()const
{
	return queryEndTime_;
}

void GetOuterCallCenterDataListRequest::setQueryEndTime(const std::string& queryEndTime)
{
	queryEndTime_ = queryEndTime;
	setBodyParameter("QueryEndTime", queryEndTime);
}

std::string GetOuterCallCenterDataListRequest::getInstanceId()const
{
	return instanceId_;
}

void GetOuterCallCenterDataListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string GetOuterCallCenterDataListRequest::getToPhoneNum()const
{
	return toPhoneNum_;
}

void GetOuterCallCenterDataListRequest::setToPhoneNum(const std::string& toPhoneNum)
{
	toPhoneNum_ = toPhoneNum;
	setBodyParameter("ToPhoneNum", toPhoneNum);
}

std::string GetOuterCallCenterDataListRequest::getQueryStartTime()const
{
	return queryStartTime_;
}

void GetOuterCallCenterDataListRequest::setQueryStartTime(const std::string& queryStartTime)
{
	queryStartTime_ = queryStartTime;
	setBodyParameter("QueryStartTime", queryStartTime);
}

std::string GetOuterCallCenterDataListRequest::getBizId()const
{
	return bizId_;
}

void GetOuterCallCenterDataListRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string GetOuterCallCenterDataListRequest::getSessionId()const
{
	return sessionId_;
}

void GetOuterCallCenterDataListRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setBodyParameter("SessionId", sessionId);
}

std::string GetOuterCallCenterDataListRequest::getFromPhoneNum()const
{
	return fromPhoneNum_;
}

void GetOuterCallCenterDataListRequest::setFromPhoneNum(const std::string& fromPhoneNum)
{
	fromPhoneNum_ = fromPhoneNum;
	setBodyParameter("FromPhoneNum", fromPhoneNum);
}

