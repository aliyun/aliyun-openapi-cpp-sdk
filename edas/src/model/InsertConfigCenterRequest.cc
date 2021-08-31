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

#include <alibabacloud/edas/model/InsertConfigCenterRequest.h>

using AlibabaCloud::Edas::Model::InsertConfigCenterRequest;

InsertConfigCenterRequest::InsertConfigCenterRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/configCenter");
	setMethod(HttpRequest::Method::Post);
}

InsertConfigCenterRequest::~InsertConfigCenterRequest()
{}

std::string InsertConfigCenterRequest::getDataId()const
{
	return dataId_;
}

void InsertConfigCenterRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setParameter("DataId", dataId);
}

std::string InsertConfigCenterRequest::getData()const
{
	return data_;
}

void InsertConfigCenterRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string InsertConfigCenterRequest::getAppName()const
{
	return appName_;
}

void InsertConfigCenterRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string InsertConfigCenterRequest::getLogicalRegionId()const
{
	return logicalRegionId_;
}

void InsertConfigCenterRequest::setLogicalRegionId(const std::string& logicalRegionId)
{
	logicalRegionId_ = logicalRegionId;
	setParameter("LogicalRegionId", logicalRegionId);
}

std::string InsertConfigCenterRequest::getGroup()const
{
	return group_;
}

void InsertConfigCenterRequest::setGroup(const std::string& group)
{
	group_ = group;
	setParameter("Group", group);
}

