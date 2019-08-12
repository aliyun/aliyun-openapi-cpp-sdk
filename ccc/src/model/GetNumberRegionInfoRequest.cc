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

#include <alibabacloud/ccc/model/GetNumberRegionInfoRequest.h>

using AlibabaCloud::CCC::Model::GetNumberRegionInfoRequest;

GetNumberRegionInfoRequest::GetNumberRegionInfoRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetNumberRegionInfo")
{}

GetNumberRegionInfoRequest::~GetNumberRegionInfoRequest()
{}

std::string GetNumberRegionInfoRequest::getNumber()const
{
	return number_;
}

void GetNumberRegionInfoRequest::setNumber(const std::string& number)
{
	number_ = number;
	setCoreParameter("Number", std::to_string(number));
}

std::string GetNumberRegionInfoRequest::getInstanceId()const
{
	return instanceId_;
}

void GetNumberRegionInfoRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string GetNumberRegionInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetNumberRegionInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

