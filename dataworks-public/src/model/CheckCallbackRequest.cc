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

#include <alibabacloud/dataworks-public/model/CheckCallbackRequest.h>

using AlibabaCloud::Dataworks_public::Model::CheckCallbackRequest;

CheckCallbackRequest::CheckCallbackRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "CheckCallback")
{
	setMethod(HttpRequest::Method::Post);
}

CheckCallbackRequest::~CheckCallbackRequest()
{}

std::string CheckCallbackRequest::getCallbackResultString()const
{
	return callbackResultString_;
}

void CheckCallbackRequest::setCallbackResultString(const std::string& callbackResultString)
{
	callbackResultString_ = callbackResultString;
	setBodyParameter("CallbackResultString", callbackResultString);
}

