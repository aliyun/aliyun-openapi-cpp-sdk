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

#include <alibabacloud/industry-brain/model/InvokeServiceAsyncRequest.h>

using AlibabaCloud::Industry_brain::Model::InvokeServiceAsyncRequest;

InvokeServiceAsyncRequest::InvokeServiceAsyncRequest() :
	RpcServiceRequest("industry-brain", "2019-06-29", "InvokeServiceAsync")
{
	setMethod(HttpRequest::Method::Post);
}

InvokeServiceAsyncRequest::~InvokeServiceAsyncRequest()
{}

bool InvokeServiceAsyncRequest::getIsShowInput()const
{
	return isShowInput_;
}

void InvokeServiceAsyncRequest::setIsShowInput(bool isShowInput)
{
	isShowInput_ = isShowInput;
	setParameter("IsShowInput", isShowInput ? "true" : "false");
}

std::string InvokeServiceAsyncRequest::getServiceId()const
{
	return serviceId_;
}

void InvokeServiceAsyncRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string InvokeServiceAsyncRequest::getParams()const
{
	return params_;
}

void InvokeServiceAsyncRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string InvokeServiceAsyncRequest::getRequestData()const
{
	return requestData_;
}

void InvokeServiceAsyncRequest::setRequestData(const std::string& requestData)
{
	requestData_ = requestData;
	setParameter("RequestData", requestData);
}

