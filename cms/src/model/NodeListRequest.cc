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

#include <alibabacloud/cms/model/NodeListRequest.h>

using AlibabaCloud::Cms::Model::NodeListRequest;

NodeListRequest::NodeListRequest() :
	RpcServiceRequest("cms", "2018-03-08", "NodeList")
{}

NodeListRequest::~NodeListRequest()
{}

std::string NodeListRequest::getHostName()const
{
	return hostName_;
}

void NodeListRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setCoreParameter("HostName", hostName);
}

std::string NodeListRequest::getInstanceIds()const
{
	return instanceIds_;
}

void NodeListRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string NodeListRequest::getInstanceRegionId()const
{
	return instanceRegionId_;
}

void NodeListRequest::setInstanceRegionId(const std::string& instanceRegionId)
{
	instanceRegionId_ = instanceRegionId;
	setCoreParameter("InstanceRegionId", instanceRegionId);
}

int NodeListRequest::getPageSize()const
{
	return pageSize_;
}

void NodeListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string NodeListRequest::getKeyWord()const
{
	return keyWord_;
}

void NodeListRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setCoreParameter("KeyWord", keyWord);
}

long NodeListRequest::getUserId()const
{
	return userId_;
}

void NodeListRequest::setUserId(long userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string NodeListRequest::getSerialNumbers()const
{
	return serialNumbers_;
}

void NodeListRequest::setSerialNumbers(const std::string& serialNumbers)
{
	serialNumbers_ = serialNumbers;
	setCoreParameter("SerialNumbers", serialNumbers);
}

int NodeListRequest::getPageNumber()const
{
	return pageNumber_;
}

void NodeListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string NodeListRequest::getStatus()const
{
	return status_;
}

void NodeListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

