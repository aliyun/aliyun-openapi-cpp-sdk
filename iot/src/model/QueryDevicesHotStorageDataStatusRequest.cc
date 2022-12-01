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

#include <alibabacloud/iot/model/QueryDevicesHotStorageDataStatusRequest.h>

using AlibabaCloud::Iot::Model::QueryDevicesHotStorageDataStatusRequest;

QueryDevicesHotStorageDataStatusRequest::QueryDevicesHotStorageDataStatusRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDevicesHotStorageDataStatus")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDevicesHotStorageDataStatusRequest::~QueryDevicesHotStorageDataStatusRequest()
{}

std::string QueryDevicesHotStorageDataStatusRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryDevicesHotStorageDataStatusRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

std::string QueryDevicesHotStorageDataStatusRequest::getRealTenantId()const
{
	return realTenantId_;
}

void QueryDevicesHotStorageDataStatusRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string QueryDevicesHotStorageDataStatusRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void QueryDevicesHotStorageDataStatusRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string QueryDevicesHotStorageDataStatusRequest::getIotId()const
{
	return iotId_;
}

void QueryDevicesHotStorageDataStatusRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDevicesHotStorageDataStatusRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDevicesHotStorageDataStatusRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDevicesHotStorageDataStatusRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDevicesHotStorageDataStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDevicesHotStorageDataStatusRequest::getUserTopic()const
{
	return userTopic_;
}

void QueryDevicesHotStorageDataStatusRequest::setUserTopic(const std::string& userTopic)
{
	userTopic_ = userTopic;
	setParameter("UserTopic", userTopic);
}

std::string QueryDevicesHotStorageDataStatusRequest::getProductKey()const
{
	return productKey_;
}

void QueryDevicesHotStorageDataStatusRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

int QueryDevicesHotStorageDataStatusRequest::getAsc()const
{
	return asc_;
}

void QueryDevicesHotStorageDataStatusRequest::setAsc(int asc)
{
	asc_ = asc;
	setParameter("Asc", std::to_string(asc));
}

std::string QueryDevicesHotStorageDataStatusRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDevicesHotStorageDataStatusRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDevicesHotStorageDataStatusRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDevicesHotStorageDataStatusRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDevicesHotStorageDataStatusRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDevicesHotStorageDataStatusRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

