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

#include <alibabacloud/retailcloud/model/ListSlbAPsRequest.h>

using AlibabaCloud::Retailcloud::Model::ListSlbAPsRequest;

ListSlbAPsRequest::ListSlbAPsRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListSlbAPs")
{
	setMethod(HttpRequest::Method::Post);
}

ListSlbAPsRequest::~ListSlbAPsRequest()
{}

std::vector<std::string> ListSlbAPsRequest::getProtocolList()const
{
	return protocolList_;
}

void ListSlbAPsRequest::setProtocolList(const std::vector<std::string>& protocolList)
{
	protocolList_ = protocolList;
	for(int dep1 = 0; dep1!= protocolList.size(); dep1++) {
		setBodyParameter("ProtocolList."+ std::to_string(dep1), protocolList.at(dep1));
	}
}

std::string ListSlbAPsRequest::getSlbId()const
{
	return slbId_;
}

void ListSlbAPsRequest::setSlbId(const std::string& slbId)
{
	slbId_ = slbId;
	setParameter("SlbId", slbId);
}

long ListSlbAPsRequest::getAppId()const
{
	return appId_;
}

void ListSlbAPsRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string ListSlbAPsRequest::getName()const
{
	return name_;
}

void ListSlbAPsRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int ListSlbAPsRequest::getPageSize()const
{
	return pageSize_;
}

void ListSlbAPsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListSlbAPsRequest::getEnvId()const
{
	return envId_;
}

void ListSlbAPsRequest::setEnvId(long envId)
{
	envId_ = envId;
	setParameter("EnvId", std::to_string(envId));
}

std::string ListSlbAPsRequest::getNetworkMode()const
{
	return networkMode_;
}

void ListSlbAPsRequest::setNetworkMode(const std::string& networkMode)
{
	networkMode_ = networkMode;
	setParameter("NetworkMode", networkMode);
}

int ListSlbAPsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListSlbAPsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

