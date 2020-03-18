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

#include <alibabacloud/address-purification/model/GetAlgorithmResultRequest.h>

using AlibabaCloud::Address_purification::Model::GetAlgorithmResultRequest;

GetAlgorithmResultRequest::GetAlgorithmResultRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetAlgorithmResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetAlgorithmResultRequest::~GetAlgorithmResultRequest()
{}

std::string GetAlgorithmResultRequest::getServiceCode()const
{
	return serviceCode_;
}

void GetAlgorithmResultRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setBodyParameter("ServiceCode", serviceCode);
}

std::string GetAlgorithmResultRequest::getApiCode()const
{
	return apiCode_;
}

void GetAlgorithmResultRequest::setApiCode(const std::string& apiCode)
{
	apiCode_ = apiCode;
	setBodyParameter("ApiCode", apiCode);
}

std::string GetAlgorithmResultRequest::getParameters()const
{
	return parameters_;
}

void GetAlgorithmResultRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setBodyParameter("Parameters", parameters);
}

