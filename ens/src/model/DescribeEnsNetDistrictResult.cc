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

#include <alibabacloud/ens/model/DescribeEnsNetDistrictResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsNetDistrictResult::DescribeEnsNetDistrictResult() :
	ServiceResult()
{}

DescribeEnsNetDistrictResult::DescribeEnsNetDistrictResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsNetDistrictResult::~DescribeEnsNetDistrictResult()
{}

void DescribeEnsNetDistrictResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEnsNetDistrictsNode = value["EnsNetDistricts"]["EnsNetDistrict"];
	for (auto valueEnsNetDistrictsEnsNetDistrict : allEnsNetDistrictsNode)
	{
		EnsNetDistrict ensNetDistrictsObject;
		if(!valueEnsNetDistrictsEnsNetDistrict["EnsRegionIdCount"].isNull())
			ensNetDistrictsObject.ensRegionIdCount = valueEnsNetDistrictsEnsNetDistrict["EnsRegionIdCount"].asString();
		if(!valueEnsNetDistrictsEnsNetDistrict["NetDistrictCode"].isNull())
			ensNetDistrictsObject.netDistrictCode = valueEnsNetDistrictsEnsNetDistrict["NetDistrictCode"].asString();
		if(!valueEnsNetDistrictsEnsNetDistrict["NetDistrictEnName"].isNull())
			ensNetDistrictsObject.netDistrictEnName = valueEnsNetDistrictsEnsNetDistrict["NetDistrictEnName"].asString();
		if(!valueEnsNetDistrictsEnsNetDistrict["NetDistrictFatherCode"].isNull())
			ensNetDistrictsObject.netDistrictFatherCode = valueEnsNetDistrictsEnsNetDistrict["NetDistrictFatherCode"].asString();
		if(!valueEnsNetDistrictsEnsNetDistrict["NetDistrictLevel"].isNull())
			ensNetDistrictsObject.netDistrictLevel = valueEnsNetDistrictsEnsNetDistrict["NetDistrictLevel"].asString();
		if(!valueEnsNetDistrictsEnsNetDistrict["NetDistrictName"].isNull())
			ensNetDistrictsObject.netDistrictName = valueEnsNetDistrictsEnsNetDistrict["NetDistrictName"].asString();
		ensNetDistricts_.push_back(ensNetDistrictsObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());

}

int DescribeEnsNetDistrictResult::getCode()const
{
	return code_;
}

std::vector<DescribeEnsNetDistrictResult::EnsNetDistrict> DescribeEnsNetDistrictResult::getEnsNetDistricts()const
{
	return ensNetDistricts_;
}

