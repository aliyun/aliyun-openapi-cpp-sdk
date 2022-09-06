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

#include <alibabacloud/iot/model/QueryProjectShareDeviceListRequest.h>

using AlibabaCloud::Iot::Model::QueryProjectShareDeviceListRequest;

QueryProjectShareDeviceListRequest::QueryProjectShareDeviceListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryProjectShareDeviceList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryProjectShareDeviceListRequest::~QueryProjectShareDeviceListRequest()
{}

int QueryProjectShareDeviceListRequest::getPageId()const
{
	return pageId_;
}

void QueryProjectShareDeviceListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QueryProjectShareDeviceListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryProjectShareDeviceListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QueryProjectShareDeviceListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryProjectShareDeviceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QueryProjectShareDeviceListRequest::getProductKey()const
{
	return productKey_;
}

void QueryProjectShareDeviceListRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string QueryProjectShareDeviceListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryProjectShareDeviceListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryProjectShareDeviceListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryProjectShareDeviceListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryProjectShareDeviceListRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryProjectShareDeviceListRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

