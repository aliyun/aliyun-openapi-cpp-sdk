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

#include <alibabacloud/iot/model/QueryDeviceOriginalPropertyDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceOriginalPropertyDataRequest;

QueryDeviceOriginalPropertyDataRequest::QueryDeviceOriginalPropertyDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceOriginalPropertyData")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceOriginalPropertyDataRequest::~QueryDeviceOriginalPropertyDataRequest()
{}

std::string QueryDeviceOriginalPropertyDataRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryDeviceOriginalPropertyDataRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

long QueryDeviceOriginalPropertyDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDeviceOriginalPropertyDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string QueryDeviceOriginalPropertyDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceOriginalPropertyDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDeviceOriginalPropertyDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceOriginalPropertyDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceOriginalPropertyDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceOriginalPropertyDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDeviceOriginalPropertyDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDeviceOriginalPropertyDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setParameter("Identifier", identifier);
}

long QueryDeviceOriginalPropertyDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDeviceOriginalPropertyDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryDeviceOriginalPropertyDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceOriginalPropertyDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

int QueryDeviceOriginalPropertyDataRequest::getAsc()const
{
	return asc_;
}

void QueryDeviceOriginalPropertyDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setParameter("Asc", std::to_string(asc));
}

std::string QueryDeviceOriginalPropertyDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceOriginalPropertyDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceOriginalPropertyDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceOriginalPropertyDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceOriginalPropertyDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceOriginalPropertyDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

