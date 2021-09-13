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

#include <alibabacloud/linkwan/model/SubmitGatewayLocalConfigDeletingTaskRequest.h>

using AlibabaCloud::LinkWAN::Model::SubmitGatewayLocalConfigDeletingTaskRequest;

SubmitGatewayLocalConfigDeletingTaskRequest::SubmitGatewayLocalConfigDeletingTaskRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SubmitGatewayLocalConfigDeletingTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitGatewayLocalConfigDeletingTaskRequest::~SubmitGatewayLocalConfigDeletingTaskRequest()
{}

std::string SubmitGatewayLocalConfigDeletingTaskRequest::getGwEui()const
{
	return gwEui_;
}

void SubmitGatewayLocalConfigDeletingTaskRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string SubmitGatewayLocalConfigDeletingTaskRequest::getD2dAddr()const
{
	return d2dAddr_;
}

void SubmitGatewayLocalConfigDeletingTaskRequest::setD2dAddr(const std::string& d2dAddr)
{
	d2dAddr_ = d2dAddr;
	setParameter("D2dAddr", d2dAddr);
}

std::string SubmitGatewayLocalConfigDeletingTaskRequest::getApiProduct()const
{
	return apiProduct_;
}

void SubmitGatewayLocalConfigDeletingTaskRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SubmitGatewayLocalConfigDeletingTaskRequest::getApiRevision()const
{
	return apiRevision_;
}

void SubmitGatewayLocalConfigDeletingTaskRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

