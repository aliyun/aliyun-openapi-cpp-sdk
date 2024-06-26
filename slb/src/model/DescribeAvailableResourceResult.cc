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
	auto allAvailableResourcesNode = value["AvailableResources"]["AvailableResource"];
	for (auto valueAvailableResourcesAvailableResource : allAvailableResourcesNode)
	{
		AvailableResource availableResourcesObject;
		if(!valueAvailableResourcesAvailableResource["SlaveZoneId"].isNull())
			availableResourcesObject.slaveZoneId = valueAvailableResourcesAvailableResource["SlaveZoneId"].asString();
		if(!valueAvailableResourcesAvailableResource["MasterZoneId"].isNull())
			availableResourcesObject.masterZoneId = valueAvailableResourcesAvailableResource["MasterZoneId"].asString();
		auto allSupportResourcesNode = valueAvailableResourcesAvailableResource["SupportResources"]["SupportResource"];
		for (auto valueAvailableResourcesAvailableResourceSupportResourcesSupportResource : allSupportResourcesNode)
		{
			AvailableResource::SupportResource supportResourcesObject;
			if(!valueAvailableResourcesAvailableResourceSupportResourcesSupportResource["AddressType"].isNull())
				supportResourcesObject.addressType = valueAvailableResourcesAvailableResourceSupportResourcesSupportResource["AddressType"].asString();
			if(!valueAvailableResourcesAvailableResourceSupportResourcesSupportResource["AddressIPVersion"].isNull())
				supportResourcesObject.addressIPVersion = valueAvailableResourcesAvailableResourceSupportResourcesSupportResource["AddressIPVersion"].asString();
			availableResourcesObject.supportResources.push_back(supportResourcesObject);
		}
		availableResources_.push_back(availableResourcesObject);
	}

}

std::vector<DescribeAvailableResourceResult::AvailableResource> DescribeAvailableResourceResult::getAvailableResources()const
{
	return availableResources_;
}

