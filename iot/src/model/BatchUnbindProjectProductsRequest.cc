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

#include <alibabacloud/iot/model/BatchUnbindProjectProductsRequest.h>

using AlibabaCloud::Iot::Model::BatchUnbindProjectProductsRequest;

BatchUnbindProjectProductsRequest::BatchUnbindProjectProductsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchUnbindProjectProducts")
{
	setMethod(HttpRequest::Method::Post);
}

BatchUnbindProjectProductsRequest::~BatchUnbindProjectProductsRequest()
{}

std::vector<std::string> BatchUnbindProjectProductsRequest::getProductKeys()const
{
	return productKeys_;
}

void BatchUnbindProjectProductsRequest::setProductKeys(const std::vector<std::string>& productKeys)
{
	productKeys_ = productKeys;
	for(int dep1 = 0; dep1!= productKeys.size(); dep1++) {
		setBodyParameter("ProductKeys."+ std::to_string(dep1), productKeys.at(dep1));
	}
}

std::string BatchUnbindProjectProductsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchUnbindProjectProductsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string BatchUnbindProjectProductsRequest::getProjectId()const
{
	return projectId_;
}

void BatchUnbindProjectProductsRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string BatchUnbindProjectProductsRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchUnbindProjectProductsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchUnbindProjectProductsRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchUnbindProjectProductsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

