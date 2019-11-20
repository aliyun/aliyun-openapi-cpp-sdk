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

#include <alibabacloud/appmallsservice/model/RemoveMessagesRequest.h>

using AlibabaCloud::AppMallsService::Model::RemoveMessagesRequest;

RemoveMessagesRequest::RemoveMessagesRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "RemoveMessages")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveMessagesRequest::~RemoveMessagesRequest()
{}

std::string RemoveMessagesRequest::getMsgIds()const
{
	return msgIds_;
}

void RemoveMessagesRequest::setMsgIds(const std::string& msgIds)
{
	msgIds_ = msgIds;
	setCoreParameter("MsgIds", msgIds);
}

std::string RemoveMessagesRequest::getParamsJson()const
{
	return paramsJson_;
}

void RemoveMessagesRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setCoreParameter("ParamsJson", paramsJson);
}

