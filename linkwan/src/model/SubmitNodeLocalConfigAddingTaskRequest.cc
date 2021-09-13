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

#include <alibabacloud/linkwan/model/SubmitNodeLocalConfigAddingTaskRequest.h>

using AlibabaCloud::LinkWAN::Model::SubmitNodeLocalConfigAddingTaskRequest;

SubmitNodeLocalConfigAddingTaskRequest::SubmitNodeLocalConfigAddingTaskRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "SubmitNodeLocalConfigAddingTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitNodeLocalConfigAddingTaskRequest::~SubmitNodeLocalConfigAddingTaskRequest()
{}

int SubmitNodeLocalConfigAddingTaskRequest::getFreq()const
{
	return freq_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setFreq(int freq)
{
	freq_ = freq;
	setParameter("Freq", std::to_string(freq));
}

int SubmitNodeLocalConfigAddingTaskRequest::getDatr()const
{
	return datr_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setDatr(int datr)
{
	datr_ = datr;
	setParameter("Datr", std::to_string(datr));
}

std::string SubmitNodeLocalConfigAddingTaskRequest::getD2dKey()const
{
	return d2dKey_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setD2dKey(const std::string& d2dKey)
{
	d2dKey_ = d2dKey;
	setParameter("D2dKey", d2dKey);
}

std::string SubmitNodeLocalConfigAddingTaskRequest::getDevEui()const
{
	return devEui_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setParameter("DevEui", devEui);
}

std::string SubmitNodeLocalConfigAddingTaskRequest::getD2dAddr()const
{
	return d2dAddr_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setD2dAddr(const std::string& d2dAddr)
{
	d2dAddr_ = d2dAddr;
	setParameter("D2dAddr", d2dAddr);
}

std::string SubmitNodeLocalConfigAddingTaskRequest::getApiProduct()const
{
	return apiProduct_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string SubmitNodeLocalConfigAddingTaskRequest::getApiRevision()const
{
	return apiRevision_;
}

void SubmitNodeLocalConfigAddingTaskRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

