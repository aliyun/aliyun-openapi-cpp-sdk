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
	RpcServiceRequest("ehpc", "2017-07-14", "ListPreferredEcsTypes")
{}

ListPreferredEcsTypesRequest::~ListPreferredEcsTypesRequest()
{}

std::string ListPreferredEcsTypesRequest::getZoneId()const
{
	return zoneId_;
}

void ListPreferredEcsTypesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string ListPreferredEcsTypesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListPreferredEcsTypesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

