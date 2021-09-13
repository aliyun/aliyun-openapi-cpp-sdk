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

#include <alibabacloud/linkwan/model/GetNodeLocalConfigRequest.h>

using AlibabaCloud::LinkWAN::Model::GetNodeLocalConfigRequest;

GetNodeLocalConfigRequest::GetNodeLocalConfigRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "GetNodeLocalConfig")
{
	setMethod(HttpRequest::Method::Post);
}

GetNodeLocalConfigRequest::~GetNodeLocalConfigRequest()
{}

std::string GetNodeLocalConfigRequest::getDevEui()const
{
	return devEui_;
}

void GetNodeLocalConfigRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string GetNodeLocalConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetNodeLocalConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetNodeLocalConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetNodeLocalConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

