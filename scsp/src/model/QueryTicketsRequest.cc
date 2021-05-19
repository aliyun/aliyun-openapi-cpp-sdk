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

#include <alibabacloud/scsp/model/QueryTicketsRequest.h>

using AlibabaCloud::Scsp::Model::QueryTicketsRequest;

QueryTicketsRequest::QueryTicketsRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QueryTickets")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTicketsRequest::~QueryTicketsRequest()
{}

long QueryTicketsRequest::getSrType()const
{
	return srType_;
}

void QueryTicketsRequest::setSrType(long srType)
{
	srType_ = srType;
	setBodyParameter("SrType", std::to_string(srType));
}

long QueryTicketsRequest::getTouchId()const
{
	return touchId_;
}

void QueryTicketsRequest::setTouchId(long touchId)
{
	touchId_ = touchId;
	setBodyParameter("TouchId", std::to_string(touchId));
}

long QueryTicketsRequest::getDealId()const
{
	return dealId_;
}

void QueryTicketsRequest::setDealId(long dealId)
{
	dealId_ = dealId;
	setBodyParameter("DealId", std::to_string(dealId));
}

int QueryTicketsRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryTicketsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setBodyParameter("CurrentPage", std::to_string(currentPage));
}

int QueryTicketsRequest::getTaskStatus()const
{
	return taskStatus_;
}

void QueryTicketsRequest::setTaskStatus(int taskStatus)
{
	taskStatus_ = taskStatus;
	setBodyParameter("TaskStatus", std::to_string(taskStatus));
}

std::string QueryTicketsRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryTicketsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string QueryTicketsRequest::getAccountName()const
{
	return accountName_;
}

void QueryTicketsRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

long QueryTicketsRequest::getCaseId()const
{
	return caseId_;
}

void QueryTicketsRequest::setCaseId(long caseId)
{
	caseId_ = caseId;
	setBodyParameter("CaseId", std::to_string(caseId));
}

std::string QueryTicketsRequest::getExtra()const
{
	return extra_;
}

void QueryTicketsRequest::setExtra(const std::string& extra)
{
	extra_ = extra;
	setBodyParameter("Extra", extra);
}

int QueryTicketsRequest::getChannelType()const
{
	return channelType_;
}

void QueryTicketsRequest::setChannelType(int channelType)
{
	channelType_ = channelType;
	setBodyParameter("ChannelType", std::to_string(channelType));
}

int QueryTicketsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTicketsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

int QueryTicketsRequest::getCaseType()const
{
	return caseType_;
}

void QueryTicketsRequest::setCaseType(int caseType)
{
	caseType_ = caseType;
	setBodyParameter("CaseType", std::to_string(caseType));
}

int QueryTicketsRequest::getCaseStatus()const
{
	return caseStatus_;
}

void QueryTicketsRequest::setCaseStatus(int caseStatus)
{
	caseStatus_ = caseStatus;
	setBodyParameter("CaseStatus", std::to_string(caseStatus));
}

std::string QueryTicketsRequest::getChannelId()const
{
	return channelId_;
}

void QueryTicketsRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setBodyParameter("ChannelId", channelId);
}

