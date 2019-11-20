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

#include <alibabacloud/ehpc/model/ListPreferredEcsTypesRequest.h>

using AlibabaCloud::EHPC::Model::ListPreferredEcsTypesRequest;

ListPreferredEcsTypesRequest::ListPreferredEcsTypesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListPreferredEcsTypes")
{
	setMethod(HttpRequest::Method::Get);
}

ListPreferredEcsTypesRequest::~ListPreferredEcsTypesRequest()
{}

std::string ListPreferredEcsTypesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPreferredEcsTypesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListPreferredEcsTypesRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void ListPreferredEcsTypesRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string ListPreferredEcsTypesRequest::getZoneId()const
{
	return zoneId_;
}

void ListPreferredEcsTypesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string ListPreferredEcsTypesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ListPreferredEcsTypesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

