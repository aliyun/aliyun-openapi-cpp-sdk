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

#include <alibabacloud/slb/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeAvailableResourceResult::DescribeAvailableResourceResult() :
	ServiceResult()
{}

DescribeAvailableResourceResult::DescribeAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceResult::~DescribeAvailableResourceResult()
{}

void DescribeAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableResources = value["AvailableResources"]["AvailableResource"];
	for (auto value : allAvailableResources)
	{
		AvailableResource availableResourcesObject;
		if(!value["MasterZoneId"].isNull())
			availableResourcesObject.masterZoneId = value["MasterZoneId"].asString();
		if(!value["SlaveZoneId"].isNull())
			availableResourcesObject.slaveZoneId = value["SlaveZoneId"].asString();
		auto allSupportResources = value["SupportResources"]["SupportResource"];
		for (auto value : allSupportResources)
		{
			AvailableResource::SupportResource supportResourcesObject;
			if(!value["AddressType"].isNull())
				supportResourcesObject.addressType = value["AddressType"].asString();
			if(!value["AddressIPVersion"].isNull())
				supportResourcesObject.addressIPVersion = value["AddressIPVersion"].asString();
			availableResourcesObject.supportResources.push_back(supportResourcesObject);
		}
		availableResources_.push_back(availableResourcesObject);
	}

}

std::vector<DescribeAvailableResourceResult::AvailableResource> DescribeAvailableResourceResult::getAvailableResources()const
{
	return availableResources_;
}

