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

#include <alibabacloud/ehpc/model/ListCommandsRequest.h>

using AlibabaCloud::EHPC::Model::ListCommandsRequest;

ListCommandsRequest::ListCommandsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListCommands")
{}

ListCommandsRequest::~ListCommandsRequest()
{}

int ListCommandsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCommandsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListCommandsRequest::getClusterId()const
{
	return clusterId_;
}

void ListCommandsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListCommandsRequest::getCommandId()const
{
	return commandId_;
}

void ListCommandsRequest::setCommandId(const std::string& commandId)
{
	commandId_ = commandId;
	setCoreParameter("CommandId", commandId);
}

int ListCommandsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCommandsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListCommandsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListCommandsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

