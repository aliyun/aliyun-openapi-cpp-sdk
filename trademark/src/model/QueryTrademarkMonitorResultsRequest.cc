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

#include <alibabacloud/trademark/model/QueryTrademarkMonitorResultsRequest.h>

using AlibabaCloud::Trademark::Model::QueryTrademarkMonitorResultsRequest;

QueryTrademarkMonitorResultsRequest::QueryTrademarkMonitorResultsRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTrademarkMonitorResults")
{}

QueryTrademarkMonitorResultsRequest::~QueryTrademarkMonitorResultsRequest()
{}

int QueryTrademarkMonitorResultsRequest::getActionType()const
{
	return actionType_;
}

void QueryTrademarkMonitorResultsRequest::setActionType(int actionType)
{
	actionType_ = actionType;
	setCoreParameter("ActionType", std::to_string(actionType));
}

std::string QueryTrademarkMonitorResultsRequest::getTmName()const
{
	return tmName_;
}

void QueryTrademarkMonitorResultsRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setCoreParameter("TmName", tmName);
}

std::string QueryTrademarkMonitorResultsRequest::getClassification()const
{
	return classification_;
}

void QueryTrademarkMonitorResultsRequest::setClassification(const std::string& classification)
{
	classification_ = classification;
	setCoreParameter("Classification", classification);
}

int QueryTrademarkMonitorResultsRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTrademarkMonitorResultsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string QueryTrademarkMonitorResultsRequest::getRegistrationNumber()const
{
	return registrationNumber_;
}

void QueryTrademarkMonitorResultsRequest::setRegistrationNumber(const std::string& registrationNumber)
{
	registrationNumber_ = registrationNumber;
	setCoreParameter("RegistrationNumber", registrationNumber);
}

std::string QueryTrademarkMonitorResultsRequest::getApplyYear()const
{
	return applyYear_;
}

void QueryTrademarkMonitorResultsRequest::setApplyYear(const std::string& applyYear)
{
	applyYear_ = applyYear;
	setCoreParameter("ApplyYear", applyYear);
}

int QueryTrademarkMonitorResultsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTrademarkMonitorResultsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int QueryTrademarkMonitorResultsRequest::getProcedureStatus()const
{
	return procedureStatus_;
}

void QueryTrademarkMonitorResultsRequest::setProcedureStatus(int procedureStatus)
{
	procedureStatus_ = procedureStatus;
	setCoreParameter("ProcedureStatus", std::to_string(procedureStatus));
}

long QueryTrademarkMonitorResultsRequest::getRuleId()const
{
	return ruleId_;
}

void QueryTrademarkMonitorResultsRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

