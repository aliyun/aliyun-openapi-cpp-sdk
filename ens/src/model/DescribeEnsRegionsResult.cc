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

#include <alibabacloud/ens/model/DescribeEnsRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsRegionsResult::DescribeEnsRegionsResult() :
	ServiceResult()
{}

DescribeEnsRegionsResult::DescribeEnsRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsRegionsResult::~DescribeEnsRegionsResult()
{}

void DescribeEnsRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEnsRegionsNode = value["EnsRegions"]["EnsRegionsItem"];
	for (auto valueEnsRegionsEnsRegionsItem : allEnsRegionsNode)
	{
		EnsRegionsItem ensRegionsObject;
		if(!valueEnsRegionsEnsRegionsItem["Area"].isNull())
			ensRegionsObject.area = valueEnsRegionsEnsRegionsItem["Area"].asString();
		if(!valueEnsRegionsEnsRegionsItem["EnName"].isNull())
			ensRegionsObject.enName = valueEnsRegionsEnsRegionsItem["EnName"].asString();
		if(!valueEnsRegionsEnsRegionsItem["EnsRegionId"].isNull())
			ensRegionsObject.ensRegionId = valueEnsRegionsEnsRegionsItem["EnsRegionId"].asString();
		if(!valueEnsRegionsEnsRegionsItem["Name"].isNull())
			ensRegionsObject.name = valueEnsRegionsEnsRegionsItem["Name"].asString();
		if(!valueEnsRegionsEnsRegionsItem["Province"].isNull())
			ensRegionsObject.province = valueEnsRegionsEnsRegionsItem["Province"].asString();
		ensRegions_.push_back(ensRegionsObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

std::vector<DescribeEnsRegionsResult::EnsRegionsItem> DescribeEnsRegionsResult::getEnsRegions()const
{
	return ensRegions_;
}

int DescribeEnsRegionsResult::getCode()const
{
	return code_;
}

