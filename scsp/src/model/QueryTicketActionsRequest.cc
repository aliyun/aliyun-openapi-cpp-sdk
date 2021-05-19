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

#include <alibabacloud/scsp/model/QueryTicketActionsRequest.h>

using AlibabaCloud::Scsp::Model::QueryTicketActionsRequest;

QueryTicketActionsRequest::QueryTicketActionsRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QueryTicketActions")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTicketActionsRequest::~QueryTicketActionsRequest()
{}

std::string QueryTicketActionsRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryTicketActionsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string QueryTicketActionsRequest::getTicketId()const
{
	return ticketId_;
}

void QueryTicketActionsRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", ticketId);
}

std::vector<int> QueryTicketActionsRequest::getActionCodeList()const
{
	return actionCodeList_;
}

void QueryTicketActionsRequest::setActionCodeList(const std::vector<int>& actionCodeList)
{
	actionCodeList_ = actionCodeList;
	for(int dep1 = 0; dep1!= actionCodeList.size(); dep1++) {
		setBodyParameter("ActionCodeList."+ std::to_string(dep1), std::to_string(actionCodeList.at(dep1)));
	}
}

