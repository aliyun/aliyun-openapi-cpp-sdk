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

#include <alibabacloud/emr/model/GetUserOutputStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetUserOutputStatisticInfoRequest;

GetUserOutputStatisticInfoRequest::GetUserOutputStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetUserOutputStatisticInfo")
{}

GetUserOutputStatisticInfoRequest::~GetUserOutputStatisticInfoRequest()
{}

std::string GetUserOutputStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetUserOutputStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setCoreParameter("FromDatetime", fromDatetime);
}

long GetUserOutputStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetUserOutputStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetUserOutputStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetUserOutputStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetUserOutputStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetUserOutputStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string GetUserOutputStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetUserOutputStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setCoreParameter("ToDatetime", toDatetime);
}

std::string GetUserOutputStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetUserOutputStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

