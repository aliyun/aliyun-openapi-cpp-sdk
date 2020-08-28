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

#include <alibabacloud/industry-brain/model/InvokeServiceRequest.h>

using AlibabaCloud::Industry_brain::Model::InvokeServiceRequest;

InvokeServiceRequest::InvokeServiceRequest() :
	RpcServiceRequest("industry-brain", "2019-06-29", "InvokeService")
{
	setMethod(HttpRequest::Method::Post);
}

InvokeServiceRequest::~InvokeServiceRequest()
{}

std::string InvokeServiceRequest::getRequestParams()const
{
	return requestParams_;
}

void InvokeServiceRequest::setRequestParams(const std::string& requestParams)
{
	requestParams_ = requestParams;
	setParameter("RequestParams", requestParams);
}

bool InvokeServiceRequest::getShowBizInfo()const
{
	return showBizInfo_;
}

void InvokeServiceRequest::setShowBizInfo(bool showBizInfo)
{
	showBizInfo_ = showBizInfo;
	setParameter("ShowBizInfo", showBizInfo ? "true" : "false");
}

bool InvokeServiceRequest::getForceInvokeConfiguration()const
{
	return forceInvokeConfiguration_;
}

void InvokeServiceRequest::setForceInvokeConfiguration(bool forceInvokeConfiguration)
{
	forceInvokeConfiguration_ = forceInvokeConfiguration;
	setParameter("ForceInvokeConfiguration", forceInvokeConfiguration ? "true" : "false");
}

std::string InvokeServiceRequest::getContext()const
{
	return context_;
}

void InvokeServiceRequest::setContext(const std::string& context)
{
	context_ = context;
	setParameter("Context", context);
}

std::string InvokeServiceRequest::getServiceId()const
{
	return serviceId_;
}

void InvokeServiceRequest::setServiceId(const std::string& serviceId)
{
	serviceId_ = serviceId;
	setParameter("ServiceId", serviceId);
}

std::string InvokeServiceRequest::getRequestData()const
{
	return requestData_;
}

void InvokeServiceRequest::setRequestData(const std::string& requestData)
{
	requestData_ = requestData;
	setParameter("RequestData", requestData);
}

bool InvokeServiceRequest::getShowParams()const
{
	return showParams_;
}

void InvokeServiceRequest::setShowParams(bool showParams)
{
	showParams_ = showParams;
	setParameter("ShowParams", showParams ? "true" : "false");
}

