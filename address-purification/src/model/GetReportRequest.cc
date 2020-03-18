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

#include <alibabacloud/address-purification/model/GetReportRequest.h>

using AlibabaCloud::Address_purification::Model::GetReportRequest;

GetReportRequest::GetReportRequest() :
	RpcServiceRequest("address-purification", "2019-11-18", "GetReport")
{
	setMethod(HttpRequest::Method::Post);
}

GetReportRequest::~GetReportRequest()
{}

std::string GetReportRequest::getProductCode()const
{
	return productCode_;
}

void GetReportRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setBodyParameter("ProductCode", productCode);
}

std::string GetReportRequest::getReportType()const
{
	return reportType_;
}

void GetReportRequest::setReportType(const std::string& reportType)
{
	reportType_ = reportType;
	setBodyParameter("ReportType", reportType);
}

std::string GetReportRequest::getApiCode()const
{
	return apiCode_;
}

void GetReportRequest::setApiCode(const std::string& apiCode)
{
	apiCode_ = apiCode;
	setBodyParameter("ApiCode", apiCode);
}

std::string GetReportRequest::getGranularity()const
{
	return granularity_;
}

void GetReportRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setBodyParameter("Granularity", granularity);
}

std::string GetReportRequest::getCommodityCode()const
{
	return commodityCode_;
}

void GetReportRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setBodyParameter("CommodityCode", commodityCode);
}

std::string GetReportRequest::getParameters()const
{
	return parameters_;
}

void GetReportRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setBodyParameter("Parameters", parameters);
}

