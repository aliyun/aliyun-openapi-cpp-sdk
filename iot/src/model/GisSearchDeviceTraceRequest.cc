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

#include <alibabacloud/iot/model/GisSearchDeviceTraceRequest.h>

using AlibabaCloud::Iot::Model::GisSearchDeviceTraceRequest;

GisSearchDeviceTraceRequest::GisSearchDeviceTraceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GisSearchDeviceTrace")
{
	setMethod(HttpRequest::Method::Post);
}

GisSearchDeviceTraceRequest::~GisSearchDeviceTraceRequest()
{}

int GisSearchDeviceTraceRequest::getMapMatch()const
{
	return mapMatch_;
}

void GisSearchDeviceTraceRequest::setMapMatch(int mapMatch)
{
	mapMatch_ = mapMatch;
	setParameter("MapMatch", std::to_string(mapMatch));
}

long GisSearchDeviceTraceRequest::getStartTime()const
{
	return startTime_;
}

void GisSearchDeviceTraceRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string GisSearchDeviceTraceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GisSearchDeviceTraceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long GisSearchDeviceTraceRequest::getEndTime()const
{
	return endTime_;
}

void GisSearchDeviceTraceRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string GisSearchDeviceTraceRequest::getProductKey()const
{
	return productKey_;
}

void GisSearchDeviceTraceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string GisSearchDeviceTraceRequest::getApiProduct()const
{
	return apiProduct_;
}

void GisSearchDeviceTraceRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GisSearchDeviceTraceRequest::getApiRevision()const
{
	return apiRevision_;
}

void GisSearchDeviceTraceRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string GisSearchDeviceTraceRequest::getDeviceName()const
{
	return deviceName_;
}

void GisSearchDeviceTraceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

