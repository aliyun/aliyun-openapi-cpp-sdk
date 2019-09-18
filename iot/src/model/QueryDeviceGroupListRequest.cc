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

#include <alibabacloud/iot/model/QueryDeviceGroupListRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceGroupListRequest;

QueryDeviceGroupListRequest::QueryDeviceGroupListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceGroupList")
{}

QueryDeviceGroupListRequest::~QueryDeviceGroupListRequest()
{}

std::string QueryDeviceGroupListRequest::getSuperGroupId()const
{
	return superGroupId_;
}

void QueryDeviceGroupListRequest::setSuperGroupId(const std::string& superGroupId)
{
	superGroupId_ = superGroupId;
	setCoreParameter("SuperGroupId", superGroupId);
}

int QueryDeviceGroupListRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryDeviceGroupListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryDeviceGroupListRequest::getGroupName()const
{
	return groupName_;
}

void QueryDeviceGroupListRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string QueryDeviceGroupListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceGroupListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceGroupListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceGroupListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceGroupListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceGroupListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

