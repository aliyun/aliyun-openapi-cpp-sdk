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

#include <alibabacloud/iot/model/GisQueryDeviceLocationRequest.h>

using AlibabaCloud::Iot::Model::GisQueryDeviceLocationRequest;

GisQueryDeviceLocationRequest::GisQueryDeviceLocationRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GisQueryDeviceLocation")
{
	setMethod(HttpRequest::Method::Post);
}

GisQueryDeviceLocationRequest::~GisQueryDeviceLocationRequest()
{}

std::string GisQueryDeviceLocationRequest::getThingList()const
{
	return thingList_;
}

void GisQueryDeviceLocationRequest::setThingList(const std::string& thingList)
{
	thingList_ = thingList;
	setCoreParameter("ThingList", thingList);
}

std::string GisQueryDeviceLocationRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GisQueryDeviceLocationRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string GisQueryDeviceLocationRequest::getApiProduct()const
{
	return apiProduct_;
}

void GisQueryDeviceLocationRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setCoreParameter("ApiProduct", apiProduct);
}

std::string GisQueryDeviceLocationRequest::getApiRevision()const
{
	return apiRevision_;
}

void GisQueryDeviceLocationRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setCoreParameter("ApiRevision", apiRevision);
}

