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

#include <alibabacloud/foas/model/GetClusterResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Foas;
using namespace AlibabaCloud::Foas::Model;

GetClusterResourceResult::GetClusterResourceResult() :
	ServiceResult()
{}

GetClusterResourceResult::GetClusterResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetClusterResourceResult::~GetClusterResourceResult()
{}

void GetClusterResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["TotalMB"].isNull())
		resource_.totalMB = std::stol(resourceNode["TotalMB"].asString());
	if(!resourceNode["AllocatedMB"].isNull())
		resource_.allocatedMB = std::stol(resourceNode["AllocatedMB"].asString());
	if(!resourceNode["AvailableMB"].isNull())
		resource_.availableMB = std::stol(resourceNode["AvailableMB"].asString());
	if(!resourceNode["TotalVirtualCores"].isNull())
		resource_.totalVirtualCores = std::stol(resourceNode["TotalVirtualCores"].asString());
	if(!resourceNode["AllocatedVirtualCores"].isNull())
		resource_.allocatedVirtualCores = std::stol(resourceNode["AllocatedVirtualCores"].asString());
	if(!resourceNode["AvailableVirtualCores"].isNull())
		resource_.availableVirtualCores = std::stol(resourceNode["AvailableVirtualCores"].asString());

}

GetClusterResourceResult::Resource GetClusterResourceResult::getResource()const
{
	return resource_;
}

