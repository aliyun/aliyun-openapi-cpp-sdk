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

#include <alibabacloud/iot/model/QueryDevicesHotStorageDataRequest.h>

using AlibabaCloud::Iot::Model::QueryDevicesHotStorageDataRequest;

QueryDevicesHotStorageDataRequest::QueryDevicesHotStorageDataRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDevicesHotStorageData")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDevicesHotStorageDataRequest::~QueryDevicesHotStorageDataRequest()
{}

std::string QueryDevicesHotStorageDataRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryDevicesHotStorageDataRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

std::string QueryDevicesHotStorageDataRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryDevicesHotStorageDataRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

long QueryDevicesHotStorageDataRequest::getStartTime()const
{
	return startTime_;
}

void QueryDevicesHotStorageDataRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string QueryDevicesHotStorageDataRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryDevicesHotStorageDataRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryDevicesHotStorageDataRequest::getIotId()const
{
	return iotId_;
}

void QueryDevicesHotStorageDataRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDevicesHotStorageDataRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDevicesHotStorageDataRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDevicesHotStorageDataRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDevicesHotStorageDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDevicesHotStorageDataRequest::getIdentifier()const
{
	return identifier_;
}

void QueryDevicesHotStorageDataRequest::setIdentifier(const std::string& identifier)
{
	identifier_ = identifier;
	setParameter("Identifier", identifier);
}

std::string QueryDevicesHotStorageDataRequest::getUserTopic()const
{
	return userTopic_;
}

void QueryDevicesHotStorageDataRequest::setUserTopic(const std::string& userTopic)
{
	userTopic_ = userTopic;
	setParameter("UserTopic", userTopic);
}

long QueryDevicesHotStorageDataRequest::getEndTime()const
{
	return endTime_;
}

void QueryDevicesHotStorageDataRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryDevicesHotStorageDataRequest::getProductKey()const
{
	return productKey_;
}

void QueryDevicesHotStorageDataRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

int QueryDevicesHotStorageDataRequest::getAsc()const
{
	return asc_;
}

void QueryDevicesHotStorageDataRequest::setAsc(int asc)
{
	asc_ = asc;
	setParameter("Asc", std::to_string(asc));
}

std::string QueryDevicesHotStorageDataRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDevicesHotStorageDataRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDevicesHotStorageDataRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDevicesHotStorageDataRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDevicesHotStorageDataRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDevicesHotStorageDataRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

