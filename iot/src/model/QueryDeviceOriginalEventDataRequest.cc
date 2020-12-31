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

#include <alibabacloud/iot/model/QueryDeviceOriginalEventDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceOriginalEventDataRequest;

QueryDeviceOriginalEventDataRequest::QueryDeviceOriginalEventDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceOriginalEventData")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceOriginalEventDataRequest::~QueryDeviceOriginalEventDataRequest()
{}

std::string QueryDeviceOriginalEventDataRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryDeviceOriginalEventDataRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

long QueryDeviceOriginalEventDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDeviceOriginalEventDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string QueryDeviceOriginalEventDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceOriginalEventDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDeviceOriginalEventDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceOriginalEventDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceOriginalEventDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceOriginalEventDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDeviceOriginalEventDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDeviceOriginalEventDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setParameter("Identifier", identifier);
}

long QueryDeviceOriginalEventDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDeviceOriginalEventDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryDeviceOriginalEventDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceOriginalEventDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

int QueryDeviceOriginalEventDataRequest::getAsc()const
{
	return asc_;
}

void QueryDeviceOriginalEventDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setParameter("Asc", std::to_string(asc));
}

std::string QueryDeviceOriginalEventDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceOriginalEventDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceOriginalEventDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceOriginalEventDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceOriginalEventDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceOriginalEventDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

