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

#include <alibabacloud/address-purification/model/GetConsoleResultRequest.h>

using AlibabaCloud::Address_purification::Model::GetConsoleResultRequest;

GetConsoleResultRequest::GetConsoleResultRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetConsoleResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetConsoleResultRequest::~GetConsoleResultRequest()
{}

std::string GetConsoleResultRequest::getProductCode()const
{
	return productCode_;
}

void GetConsoleResultRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string GetConsoleResultRequest::getApiCode()const
{
	return apiCode_;
}

void GetConsoleResultRequest::setApiCode(const std::string& apiCode)
{
	apiCode_ = apiCode;
	setBodyParameter("ApiCode", apiCode);
}

std::string GetConsoleResultRequest::getCommodityCode()const
{
	return commodityCode_;
}

void GetConsoleResultRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setBodyParameter("CommodityCode", commodityCode);
}

std::string GetConsoleResultRequest::getParameters()const
{
	return parameters_;
}

void GetConsoleResultRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setBodyParameter("Parameters", parameters);
}

