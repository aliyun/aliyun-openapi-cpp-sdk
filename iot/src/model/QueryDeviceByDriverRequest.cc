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

#include <alibabacloud/iot/model/QueryDeviceByDriverRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceByDriverRequest;

QueryDeviceByDriverRequest::QueryDeviceByDriverRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceByDriver")
{}

QueryDeviceByDriverRequest::~QueryDeviceByDriverRequest()
{}

int QueryDeviceByDriverRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryDeviceByDriverRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryDeviceByDriverRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceByDriverRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceByDriverRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryDeviceByDriverRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryDeviceByDriverRequest::getDriverId()const
{
	return driverId_;
}

void QueryDeviceByDriverRequest::setDriverId(const std::string& driverId)
{
	driverId_ = driverId;
	setCoreParameter("DriverId", driverId);
}

std::string QueryDeviceByDriverRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceByDriverRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceByDriverRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceByDriverRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

