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

#include <alibabacloud/iot/model/CreateParserRequest.h>

using AlibabaCloud::Iot::Model::CreateParserRequest;

CreateParserRequest::CreateParserRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateParser")
{
	setMethod(HttpRequest::Method::Post);
}

CreateParserRequest::~CreateParserRequest()
{}

std::string CreateParserRequest::getDescription()const
{
	return description_;
}

void CreateParserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateParserRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateParserRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateParserRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateParserRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateParserRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateParserRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateParserRequest::getName()const
{
	return name_;
}

void CreateParserRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateParserRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateParserRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

