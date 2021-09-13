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

#include <alibabacloud/linkwan/model/SubmitGatewayLocalConfigAddingTaskRequest.h>

using AlibabaCloud::LinkWAN::Model::SubmitGatewayLocalConfigAddingTaskRequest;

SubmitGatewayLocalConfigAddingTaskRequest::SubmitGatewayLocalConfigAddingTaskRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SubmitGatewayLocalConfigAddingTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitGatewayLocalConfigAddingTaskRequest::~SubmitGatewayLocalConfigAddingTaskRequest()
{}

int SubmitGatewayLocalConfigAddingTaskRequest::getFreq()const
{
	return freq_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setFreq(int freq)
{
	freq_ = freq;
	setParameter("Freq", std::to_string(freq));
}

int SubmitGatewayLocalConfigAddingTaskRequest::getDatr()const
{
	return datr_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setDatr(int datr)
{
	datr_ = datr;
	setParameter("Datr", std::to_string(datr));
}

std::string SubmitGatewayLocalConfigAddingTaskRequest::getD2dKey()const
{
	return d2dKey_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setD2dKey(const std::string& d2dKey)
{
	d2dKey_ = d2dKey;
	setParameter("D2dKey", d2dKey);
}

std::string SubmitGatewayLocalConfigAddingTaskRequest::getGwEui()const
{
	return gwEui_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string SubmitGatewayLocalConfigAddingTaskRequest::getD2dAddr()const
{
	return d2dAddr_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setD2dAddr(const std::string& d2dAddr)
{
	d2dAddr_ = d2dAddr;
	setParameter("D2dAddr", d2dAddr);
}

std::string SubmitGatewayLocalConfigAddingTaskRequest::getApiProduct()const
{
	return apiProduct_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SubmitGatewayLocalConfigAddingTaskRequest::getApiRevision()const
{
	return apiRevision_;
}

void SubmitGatewayLocalConfigAddingTaskRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

