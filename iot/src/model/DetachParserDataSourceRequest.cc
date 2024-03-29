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

#include <alibabacloud/iot/model/DetachParserDataSourceRequest.h>

using AlibabaCloud::Iot::Model::DetachParserDataSourceRequest;

DetachParserDataSourceRequest::DetachParserDataSourceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DetachParserDataSource")
{
	setMethod(HttpRequest::Method::Post);
}

DetachParserDataSourceRequest::~DetachParserDataSourceRequest()
{}

std::string DetachParserDataSourceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DetachParserDataSourceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long DetachParserDataSourceRequest::getParserId()const
{
	return parserId_;
}

void DetachParserDataSourceRequest::setParserId(long parserId)
{
	parserId_ = parserId;
	setParameter("ParserId", std::to_string(parserId));
}

std::string DetachParserDataSourceRequest::getApiProduct()const
{
	return apiProduct_;
}

void DetachParserDataSourceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

long DetachParserDataSourceRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void DetachParserDataSourceRequest::setDataSourceId(long dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string DetachParserDataSourceRequest::getApiRevision()const
{
	return apiRevision_;
}

void DetachParserDataSourceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

