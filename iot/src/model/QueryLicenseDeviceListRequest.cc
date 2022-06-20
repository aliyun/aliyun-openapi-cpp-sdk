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

#include <alibabacloud/iot/model/QueryLicenseDeviceListRequest.h>

using AlibabaCloud::Iot::Model::QueryLicenseDeviceListRequest;

QueryLicenseDeviceListRequest::QueryLicenseDeviceListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryLicenseDeviceList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryLicenseDeviceListRequest::~QueryLicenseDeviceListRequest()
{}

long QueryLicenseDeviceListRequest::getStartTime()const
{
	return startTime_;
}

void QueryLicenseDeviceListRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

int QueryLicenseDeviceListRequest::getPageId()const
{
	return pageId_;
}

void QueryLicenseDeviceListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setParameter("PageId", std::to_string(pageId));
}

std::string QueryLicenseDeviceListRequest::getIotId()const
{
	return iotId_;
}

void QueryLicenseDeviceListRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string QueryLicenseDeviceListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryLicenseDeviceListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryLicenseDeviceListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryLicenseDeviceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long QueryLicenseDeviceListRequest::getEndTime()const
{
	return endTime_;
}

void QueryLicenseDeviceListRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryLicenseDeviceListRequest::getProductKey()const
{
	return productKey_;
}

void QueryLicenseDeviceListRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryLicenseDeviceListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryLicenseDeviceListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryLicenseDeviceListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryLicenseDeviceListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryLicenseDeviceListRequest::getLicenseCode()const
{
	return licenseCode_;
}

void QueryLicenseDeviceListRequest::setLicenseCode(const std::string& licenseCode)
{
	licenseCode_ = licenseCode;
	setParameter("LicenseCode", licenseCode);
}

