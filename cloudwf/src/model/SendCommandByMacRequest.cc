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

#include <alibabacloud/cloudwf/model/SendCommandByMacRequest.h>

using AlibabaCloud::Cloudwf::Model::SendCommandByMacRequest;

SendCommandByMacRequest::SendCommandByMacRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SendCommandByMac")
{
	setMethod(HttpRequest::Method::Post);
}

SendCommandByMacRequest::~SendCommandByMacRequest()
{}

std::string SendCommandByMacRequest::getCommand()const
{
	return command_;
}

void SendCommandByMacRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

std::string SendCommandByMacRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendCommandByMacRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<std::string> SendCommandByMacRequest::getMacList()const
{
	return macList_;
}

void SendCommandByMacRequest::setMacList(const std::vector<std::string>& macList)
{
	macList_ = macList;
	for(int dep1 = 0; dep1!= macList.size(); dep1++) {
		setParameter("MacList."+ std::to_string(dep1), macList.at(dep1));
	}
}

