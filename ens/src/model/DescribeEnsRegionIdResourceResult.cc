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

#include <alibabacloud/ens/model/DescribeEnsRegionIdResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsRegionIdResourceResult::DescribeEnsRegionIdResourceResult() :
	ServiceResult()
{}

DescribeEnsRegionIdResourceResult::DescribeEnsRegionIdResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsRegionIdResourceResult::~DescribeEnsRegionIdResourceResult()
{}

void DescribeEnsRegionIdResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEnsRegionIdResourcesNode = value["EnsRegionIdResources"]["EnsRegionIdResource"];
	for (auto valueEnsRegionIdResourcesEnsRegionIdResource : allEnsRegionIdResourcesNode)
	{
		EnsRegionIdResource ensRegionIdResourcesObject;
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["Area"].isNull())
			ensRegionIdResourcesObject.area = valueEnsRegionIdResourcesEnsRegionIdResource["Area"].asString();
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["AreaCode"].isNull())
			ensRegionIdResourcesObject.areaCode = valueEnsRegionIdResourcesEnsRegionIdResource["AreaCode"].asString();
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["BizDate"].isNull())
			ensRegionIdResourcesObject.bizDate = valueEnsRegionIdResourcesEnsRegionIdResource["BizDate"].asString();
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["EnsRegionId"].isNull())
			ensRegionIdResourcesObject.ensRegionId = valueEnsRegionIdResourcesEnsRegionIdResource["EnsRegionId"].asString();
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["EnsRegionIdName"].isNull())
			ensRegionIdResourcesObject.ensRegionIdName = valueEnsRegionIdResourcesEnsRegionIdResource["EnsRegionIdName"].asString();
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["InstanceCount"].isNull())
			ensRegionIdResourcesObject.instanceCount = std::stoi(valueEnsRegionIdResourcesEnsRegionIdResource["InstanceCount"].asString());
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["InternetBandwidth"].isNull())
			ensRegionIdResourcesObject.internetBandwidth = std::stol(valueEnsRegionIdResourcesEnsRegionIdResource["InternetBandwidth"].asString());
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["Isp"].isNull())
			ensRegionIdResourcesObject.isp = valueEnsRegionIdResourcesEnsRegionIdResource["Isp"].asString();
		if(!valueEnsRegionIdResourcesEnsRegionIdResource["VCpu"].isNull())
			ensRegionIdResourcesObject.vCpu = std::stoi(valueEnsRegionIdResourcesEnsRegionIdResource["VCpu"].asString());
		ensRegionIdResources_.push_back(ensRegionIdResourcesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeEnsRegionIdResourceResult::EnsRegionIdResource> DescribeEnsRegionIdResourceResult::getEnsRegionIdResources()const
{
	return ensRegionIdResources_;
}

int DescribeEnsRegionIdResourceResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEnsRegionIdResourceResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEnsRegionIdResourceResult::getPageNumber()const
{
	return pageNumber_;
}

