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

#include <alibabacloud/iot/model/UpdateParserDataSourceRequest.h>

using AlibabaCloud::Iot::Model::UpdateParserDataSourceRequest;

UpdateParserDataSourceRequest::UpdateParserDataSourceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateParserDataSource")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateParserDataSourceRequest::~UpdateParserDataSourceRequest()
{}

std::string UpdateParserDataSourceRequest::getDescription()const
{
	return description_;
}

void UpdateParserDataSourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateParserDataSourceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateParserDataSourceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateParserDataSourceRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateParserDataSourceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

long UpdateParserDataSourceRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void UpdateParserDataSourceRequest::setDataSourceId(long dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string UpdateParserDataSourceRequest::getName()const
{
	return name_;
}

void UpdateParserDataSourceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateParserDataSourceRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateParserDataSourceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

