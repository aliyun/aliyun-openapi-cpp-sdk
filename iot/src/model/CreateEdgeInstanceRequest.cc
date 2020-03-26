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

#include <alibabacloud/iot/model/CreateEdgeInstanceRequest.h>

using AlibabaCloud::Iot::Model::CreateEdgeInstanceRequest;

CreateEdgeInstanceRequest::CreateEdgeInstanceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateEdgeInstance")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEdgeInstanceRequest::~CreateEdgeInstanceRequest()
{}

int CreateEdgeInstanceRequest::getSpec()const
{
	return spec_;
}

void CreateEdgeInstanceRequest::setSpec(int spec)
{
	spec_ = spec;
	setParameter("Spec", std::to_string(spec));
}

std::string CreateEdgeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateEdgeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateEdgeInstanceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateEdgeInstanceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateEdgeInstanceRequest::getTags()const
{
	return tags_;
}

void CreateEdgeInstanceRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateEdgeInstanceRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateEdgeInstanceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateEdgeInstanceRequest::getName()const
{
	return name_;
}

void CreateEdgeInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateEdgeInstanceRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateEdgeInstanceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

