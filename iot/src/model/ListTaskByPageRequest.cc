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

#include <alibabacloud/iot/model/ListTaskByPageRequest.h>

using AlibabaCloud::Iot::Model::ListTaskByPageRequest;

ListTaskByPageRequest::ListTaskByPageRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListTaskByPage")
{
	setMethod(HttpRequest::Method::Post);
}

ListTaskByPageRequest::~ListTaskByPageRequest()
{}

std::string ListTaskByPageRequest::getJobId()const
{
	return jobId_;
}

void ListTaskByPageRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string ListTaskByPageRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListTaskByPageRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListTaskByPageRequest::getPageSize()const
{
	return pageSize_;
}

void ListTaskByPageRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string ListTaskByPageRequest::getJobName()const
{
	return jobName_;
}

void ListTaskByPageRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

std::string ListTaskByPageRequest::getPageNo()const
{
	return pageNo_;
}

void ListTaskByPageRequest::setPageNo(const std::string& pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", pageNo);
}

std::string ListTaskByPageRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListTaskByPageRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListTaskByPageRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListTaskByPageRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListTaskByPageRequest::getDeviceName()const
{
	return deviceName_;
}

void ListTaskByPageRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string ListTaskByPageRequest::getDevice()const
{
	return device_;
}

void ListTaskByPageRequest::setDevice(const std::string& device)
{
	device_ = device;
	setParameter("Device", device);
}

std::string ListTaskByPageRequest::getStatus()const
{
	return status_;
}

void ListTaskByPageRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

