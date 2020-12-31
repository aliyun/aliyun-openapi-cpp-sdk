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

#include <alibabacloud/iot/model/QueryDeviceOriginalPropertyStatusRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceOriginalPropertyStatusRequest;

QueryDeviceOriginalPropertyStatusRequest::QueryDeviceOriginalPropertyStatusRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceOriginalPropertyStatus")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDeviceOriginalPropertyStatusRequest::~QueryDeviceOriginalPropertyStatusRequest()
{}

std::string QueryDeviceOriginalPropertyStatusRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void QueryDeviceOriginalPropertyStatusRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setParameter("NextPageToken", nextPageToken);
}

std::string QueryDeviceOriginalPropertyStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceOriginalPropertyStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceOriginalPropertyStatusRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceOriginalPropertyStatusRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryDeviceOriginalPropertyStatusRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceOriginalPropertyStatusRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceOriginalPropertyStatusRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceOriginalPropertyStatusRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDeviceOriginalPropertyStatusRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceOriginalPropertyStatusRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

int QueryDeviceOriginalPropertyStatusRequest::getAsc()const
{
	return asc_;
}

void QueryDeviceOriginalPropertyStatusRequest::setAsc(int asc)
{
	asc_ = asc;
	setParameter("Asc", std::to_string(asc));
}

std::string QueryDeviceOriginalPropertyStatusRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDeviceOriginalPropertyStatusRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDeviceOriginalPropertyStatusRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDeviceOriginalPropertyStatusRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDeviceOriginalPropertyStatusRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceOriginalPropertyStatusRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

