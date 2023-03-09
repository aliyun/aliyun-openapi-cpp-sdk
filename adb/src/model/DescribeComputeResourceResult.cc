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

#include <alibabacloud/adb/model/DescribeComputeResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeComputeResourceResult::DescribeComputeResourceResult() :
	ServiceResult()
{}

DescribeComputeResourceResult::DescribeComputeResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeComputeResourceResult::~DescribeComputeResourceResult()
{}

void DescribeComputeResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComputeResourceNode = value["ComputeResource"]["ComputeResourceItem"];
	for (auto valueComputeResourceComputeResourceItem : allComputeResourceNode)
	{
		ComputeResourceItem computeResourceObject;
		if(!valueComputeResourceComputeResourceItem["DisplayValue"].isNull())
			computeResourceObject.displayValue = valueComputeResourceComputeResourceItem["DisplayValue"].asString();
		if(!valueComputeResourceComputeResourceItem["RealValue"].isNull())
			computeResourceObject.realValue = valueComputeResourceComputeResourceItem["RealValue"].asString();
		computeResource_.push_back(computeResourceObject);
	}

}

std::vector<DescribeComputeResourceResult::ComputeResourceItem> DescribeComputeResourceResult::getComputeResource()const
{
	return computeResource_;
}

