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

#include <alibabacloud/iot/model/QueryDeviceOriginalServiceDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceOriginalServiceDataRequest;

QueryDeviceOriginalServiceDataRequest::QueryDeviceOriginalServiceDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceOriginalServiceData")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceOriginalServiceDataRequest::~QueryDeviceOriginalServiceDataRequest()
{}

std::string QueryDeviceOriginalServiceDataRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryDeviceOriginalServiceDataRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

long QueryDeviceOriginalServiceDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDeviceOriginalServiceDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string QueryDeviceOriginalServiceDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceOriginalServiceDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDeviceOriginalServiceDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceOriginalServiceDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceOriginalServiceDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceOriginalServiceDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDeviceOriginalServiceDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDeviceOriginalServiceDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setParameter("Identifier", identifier);
}

long QueryDeviceOriginalServiceDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDeviceOriginalServiceDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryDeviceOriginalServiceDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceOriginalServiceDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

int QueryDeviceOriginalServiceDataRequest::getAsc()const
{
	return asc_;
}

void QueryDeviceOriginalServiceDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setParameter("Asc", std::to_string(asc));
}

std::string QueryDeviceOriginalServiceDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceOriginalServiceDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceOriginalServiceDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceOriginalServiceDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceOriginalServiceDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceOriginalServiceDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

