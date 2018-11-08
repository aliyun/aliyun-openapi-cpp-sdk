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

#include <alibabacloud/ehpc/model/ListInvocationResultsRequest.h>

using AlibabaCloud::EHPC::Model::ListInvocationResultsRequest;

ListInvocationResultsRequest::ListInvocationResultsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListInvocationResults")
{}

ListInvocationResultsRequest::~ListInvocationResultsRequest()
{}

std::vector<ListInvocationResultsRequest::Instance> ListInvocationResultsRequest::getInstance()const
{
	return instance_;
}

void ListInvocationResultsRequest::setInstance(const std::vector<Instance>& instance)
{
	instance_ = instance;
	int i = 0;
	for(int i = 0; i!= instance.size(); i++)	{
		auto obj = instance.at(i);
		std::string str ="Instance."+ std::to_string(i);
		setParameter(str + ".Id", obj.id);
	}
}

std::string ListInvocationResultsRequest::getInvokeRecordStatus()const
{
	return invokeRecordStatus_;
}

void ListInvocationResultsRequest::setInvokeRecordStatus(const std::string& invokeRecordStatus)
{
	invokeRecordStatus_ = invokeRecordStatus;
	setParameter("InvokeRecordStatus", invokeRecordStatus);
}

int ListInvocationResultsRequest::getPageSize()const
{
	return pageSize_;
}

void ListInvocationResultsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListInvocationResultsRequest::getClusterId()const
{
	return clusterId_;
}

void ListInvocationResultsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListInvocationResultsRequest::getCommandId()const
{
	return commandId_;
}

void ListInvocationResultsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setParameter("CommandId", commandId);
}

int ListInvocationResultsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListInvocationResultsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListInvocationResultsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListInvocationResultsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

