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

#include <alibabacloud/ehpc/model/ListAvailableEcsTypesRequest.h>

using AlibabaCloud::EHPC::Model::ListAvailableEcsTypesRequest;

ListAvailableEcsTypesRequest::ListAvailableEcsTypesRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListAvailableEcsTypes")
{}

ListAvailableEcsTypesRequest::~ListAvailableEcsTypesRequest()
{}

std::string ListAvailableEcsTypesRequest::getSpotStrategy()const
{
	return spotStrategy_;
}

void ListAvailableEcsTypesRequest::setSpotStrategy(const std::string& spotStrategy)
{
	spotStrategy_ = spotStrategy;
	setCoreParameter("SpotStrategy", spotStrategy);
}

std::string ListAvailableEcsTypesRequest::getZoneId()const
{
	return zoneId_;
}

void ListAvailableEcsTypesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

bool ListAvailableEcsTypesRequest::getShowSoldOut()const
{
	return showSoldOut_;
}

void ListAvailableEcsTypesRequest::setShowSoldOut(bool showSoldOut)
{
	showSoldOut_ = showSoldOut;
	setCoreParameter("ShowSoldOut", showSoldOut ? "true" : "false");
}

std::string ListAvailableEcsTypesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ListAvailableEcsTypesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string ListAvailableEcsTypesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAvailableEcsTypesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

