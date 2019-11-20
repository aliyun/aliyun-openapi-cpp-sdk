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

#include <alibabacloud/iot/model/QueryEdgeInstanceDeviceRequest.h>

using AlibabaCloud::Iot::Model::QueryEdgeInstanceDeviceRequest;

QueryEdgeInstanceDeviceRequest::QueryEdgeInstanceDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryEdgeInstanceDevice")
{
	setMethod(HttpRequest::Method::Post);
}

QueryEdgeInstanceDeviceRequest::~QueryEdgeInstanceDeviceRequest()
{}

int QueryEdgeInstanceDeviceRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryEdgeInstanceDeviceRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryEdgeInstanceDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryEdgeInstanceDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryEdgeInstanceDeviceRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryEdgeInstanceDeviceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryEdgeInstanceDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryEdgeInstanceDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryEdgeInstanceDeviceRequest::getPageSize()const
{
	return pageSize_;
}

void QueryEdgeInstanceDeviceRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

