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

#include <alibabacloud/scsp/model/CreateOuterCallCenterDataRequest.h>

using AlibabaCloud::Scsp::Model::CreateOuterCallCenterDataRequest;

CreateOuterCallCenterDataRequest::CreateOuterCallCenterDataRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "CreateOuterCallCenterData")
{
	setMethod(HttpRequest::Method::Post);
}

CreateOuterCallCenterDataRequest::~CreateOuterCallCenterDataRequest()
{}

std::string CreateOuterCallCenterDataRequest::getExtInfo()const
{
	return extInfo_;
}

void CreateOuterCallCenterDataRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setBodyParameter("ExtInfo", extInfo);
}

std::string CreateOuterCallCenterDataRequest::getRecordUrl()const
{
	return recordUrl_;
}

void CreateOuterCallCenterDataRequest::setRecordUrl(const std::string& recordUrl)
{
	recordUrl_ = recordUrl;
	setBodyParameter("RecordUrl", recordUrl);
}

std::string CreateOuterCallCenterDataRequest::getEndReason()const
{
	return endReason_;
}

void CreateOuterCallCenterDataRequest::setEndReason(const std::string& endReason)
{
	endReason_ = endReason;
	setBodyParameter("EndReason", endReason);
}

std::string CreateOuterCallCenterDataRequest::getSessionId()const
{
	return sessionId_;
}

void CreateOuterCallCenterDataRequest::setSessionId(const std::string& sessionId)
{
	sessionId_ = sessionId;
	setBodyParameter("SessionId", sessionId);
}

std::string CreateOuterCallCenterDataRequest::getFromPhoneNum()const
{
	return fromPhoneNum_;
}

void CreateOuterCallCenterDataRequest::setFromPhoneNum(const std::string& fromPhoneNum)
{
	fromPhoneNum_ = fromPhoneNum;
	setBodyParameter("FromPhoneNum", fromPhoneNum);
}

std::string CreateOuterCallCenterDataRequest::getInterveneTime()const
{
	return interveneTime_;
}

void CreateOuterCallCenterDataRequest::setInterveneTime(const std::string& interveneTime)
{
	interveneTime_ = interveneTime;
	setBodyParameter("InterveneTime", interveneTime);
}

std::string CreateOuterCallCenterDataRequest::getBizType()const
{
	return bizType_;
}

void CreateOuterCallCenterDataRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setBodyParameter("BizType", bizType);
}

std::string CreateOuterCallCenterDataRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateOuterCallCenterDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string CreateOuterCallCenterDataRequest::getToPhoneNum()const
{
	return toPhoneNum_;
}

void CreateOuterCallCenterDataRequest::setToPhoneNum(const std::string& toPhoneNum)
{
	toPhoneNum_ = toPhoneNum;
	setBodyParameter("ToPhoneNum", toPhoneNum);
}

std::string CreateOuterCallCenterDataRequest::getBizId()const
{
	return bizId_;
}

void CreateOuterCallCenterDataRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string CreateOuterCallCenterDataRequest::getTenantId()const
{
	return tenantId_;
}

void CreateOuterCallCenterDataRequest::setTenantId(const std::string& tenantId)
{
	tenantId_ = tenantId;
	setBodyParameter("TenantId", tenantId);
}

std::string CreateOuterCallCenterDataRequest::getCallType()const
{
	return callType_;
}

void CreateOuterCallCenterDataRequest::setCallType(const std::string& callType)
{
	callType_ = callType;
	setBodyParameter("CallType", callType);
}

std::string CreateOuterCallCenterDataRequest::getUserInfo()const
{
	return userInfo_;
}

void CreateOuterCallCenterDataRequest::setUserInfo(const std::string& userInfo)
{
	userInfo_ = userInfo;
	setBodyParameter("UserInfo", userInfo);
}

