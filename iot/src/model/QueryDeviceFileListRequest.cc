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

#include <alibabacloud/iot/model/QueryDeviceFileListRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceFileListRequest;

QueryDeviceFileListRequest::QueryDeviceFileListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceFileList")
{}

QueryDeviceFileListRequest::~QueryDeviceFileListRequest()
{}

int QueryDeviceFileListRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryDeviceFileListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryDeviceFileListRequest::getProductKey()const
{
	return productKey_;
}

void QueryDeviceFileListRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string QueryDeviceFileListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceFileListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceFileListRequest::getIotId()const
{
	return iotId_;
}

void QueryDeviceFileListRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string QueryDeviceFileListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceFileListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceFileListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceFileListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string QueryDeviceFileListRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDeviceFileListRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

