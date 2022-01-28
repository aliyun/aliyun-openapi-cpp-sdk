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

#include <alibabacloud/ens/model/DescribeCloudDiskTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeCloudDiskTypesResult::DescribeCloudDiskTypesResult() :
	ServiceResult()
{}

DescribeCloudDiskTypesResult::DescribeCloudDiskTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudDiskTypesResult::~DescribeCloudDiskTypesResult()
{}

void DescribeCloudDiskTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSupportResourcesNode = value["SupportResources"]["SupportResource"];
	for (auto valueSupportResourcesSupportResource : allSupportResourcesNode)
	{
		SupportResource supportResourcesObject;
		if(!valueSupportResourcesSupportResource["Category"].isNull())
			supportResourcesObject.category = valueSupportResourcesSupportResource["Category"].asString();
		if(!valueSupportResourcesSupportResource["EnsRegionId"].isNull())
			supportResourcesObject.ensRegionId = valueSupportResourcesSupportResource["EnsRegionId"].asString();
		supportResources_.push_back(supportResourcesObject);
	}

}

std::vector<DescribeCloudDiskTypesResult::SupportResource> DescribeCloudDiskTypesResult::getSupportResources()const
{
	return supportResources_;
}

