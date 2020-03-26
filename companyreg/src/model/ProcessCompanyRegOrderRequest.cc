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

#include <alibabacloud/companyreg/model/ProcessCompanyRegOrderRequest.h>

using AlibabaCloud::Companyreg::Model::ProcessCompanyRegOrderRequest;

ProcessCompanyRegOrderRequest::ProcessCompanyRegOrderRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "ProcessCompanyRegOrder")
{
	setMethod(HttpRequest::Method::Post);
}

ProcessCompanyRegOrderRequest::~ProcessCompanyRegOrderRequest()
{}

std::string ProcessCompanyRegOrderRequest::getActionType()const
{
	return actionType_;
}

void ProcessCompanyRegOrderRequest::setActionType(const std::string& actionType)
{
	actionType_ = actionType;
	setParameter("ActionType", actionType);
}

std::string ProcessCompanyRegOrderRequest::getActionRequestId()const
{
	return actionRequestId_;
}

void ProcessCompanyRegOrderRequest::setActionRequestId(const std::string& actionRequestId)
{
	actionRequestId_ = actionRequestId;
	setParameter("ActionRequestId", actionRequestId);
}

int ProcessCompanyRegOrderRequest::getOperatorType()const
{
	return operatorType_;
}

void ProcessCompanyRegOrderRequest::setOperatorType(int operatorType)
{
	operatorType_ = operatorType;
	setParameter("OperatorType", std::to_string(operatorType));
}

std::string ProcessCompanyRegOrderRequest::getActionInfo()const
{
	return actionInfo_;
}

void ProcessCompanyRegOrderRequest::setActionInfo(const std::string& actionInfo)
{
	actionInfo_ = actionInfo;
	setParameter("ActionInfo", actionInfo);
}

std::string ProcessCompanyRegOrderRequest::getBizCode()const
{
	return bizCode_;
}

void ProcessCompanyRegOrderRequest::setBizCode(const std::string& bizCode)
{
	bizCode_ = bizCode;
	setParameter("BizCode", bizCode);
}

std::string ProcessCompanyRegOrderRequest::getBizId()const
{
	return bizId_;
}

void ProcessCompanyRegOrderRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string ProcessCompanyRegOrderRequest::getBizSubCode()const
{
	return bizSubCode_;
}

void ProcessCompanyRegOrderRequest::setBizSubCode(const std::string& bizSubCode)
{
	bizSubCode_ = bizSubCode;
	setParameter("BizSubCode", bizSubCode);
}

