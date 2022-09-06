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

#include <alibabacloud/iot/model/QuerySpeechLicenseDeviceListRequest.h>

using AlibabaCloud::Iot::Model::QuerySpeechLicenseDeviceListRequest;

QuerySpeechLicenseDeviceListRequest::QuerySpeechLicenseDeviceListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySpeechLicenseDeviceList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySpeechLicenseDeviceListRequest::~QuerySpeechLicenseDeviceListRequest()
{}

int QuerySpeechLicenseDeviceListRequest::getPageId()const
{
	return pageId_;
}

void QuerySpeechLicenseDeviceListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setParameter("PageId", std::to_string(pageId));
}

std::vector<std::string> QuerySpeechLicenseDeviceListRequest::getLicenseStatusList()const
{
	return licenseStatusList_;
}

void QuerySpeechLicenseDeviceListRequest::setLicenseStatusList(const std::vector<std::string>& licenseStatusList)
{
	licenseStatusList_ = licenseStatusList;
	for(int dep1 = 0; dep1!= licenseStatusList.size(); dep1++) {
		setBodyParameter("LicenseStatusList."+ std::to_string(dep1), licenseStatusList.at(dep1));
	}
}

std::string QuerySpeechLicenseDeviceListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySpeechLicenseDeviceListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QuerySpeechLicenseDeviceListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySpeechLicenseDeviceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySpeechLicenseDeviceListRequest::getProductKey()const
{
	return productKey_;
}

void QuerySpeechLicenseDeviceListRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string QuerySpeechLicenseDeviceListRequest::getCheckGroupId()const
{
	return checkGroupId_;
}

void QuerySpeechLicenseDeviceListRequest::setCheckGroupId(const std::string& checkGroupId)
{
	checkGroupId_ = checkGroupId;
	setBodyParameter("CheckGroupId", checkGroupId);
}

std::string QuerySpeechLicenseDeviceListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySpeechLicenseDeviceListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySpeechLicenseDeviceListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySpeechLicenseDeviceListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QuerySpeechLicenseDeviceListRequest::getDeviceName()const
{
	return deviceName_;
}

void QuerySpeechLicenseDeviceListRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

