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

#include <alibabacloud/smartag/model/DescribeQosCarsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeQosCarsResult::DescribeQosCarsResult() :
	ServiceResult()
{}

DescribeQosCarsResult::DescribeQosCarsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQosCarsResult::~DescribeQosCarsResult()
{}

void DescribeQosCarsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQosCarsNode = value["QosCars"]["QosCar"];
	for (auto valueQosCarsQosCar : allQosCarsNode)
	{
		QosCar qosCarsObject;
		if(!valueQosCarsQosCar["MaxBandwidthAbs"].isNull())
			qosCarsObject.maxBandwidthAbs = std::stoi(valueQosCarsQosCar["MaxBandwidthAbs"].asString());
		if(!valueQosCarsQosCar["PercentSourceType"].isNull())
			qosCarsObject.percentSourceType = valueQosCarsQosCar["PercentSourceType"].asString();
		if(!valueQosCarsQosCar["MinBandwidthAbs"].isNull())
			qosCarsObject.minBandwidthAbs = std::stoi(valueQosCarsQosCar["MinBandwidthAbs"].asString());
		if(!valueQosCarsQosCar["MaxBandwidthPercent"].isNull())
			qosCarsObject.maxBandwidthPercent = std::stoi(valueQosCarsQosCar["MaxBandwidthPercent"].asString());
		if(!valueQosCarsQosCar["Description"].isNull())
			qosCarsObject.description = valueQosCarsQosCar["Description"].asString();
		if(!valueQosCarsQosCar["QosId"].isNull())
			qosCarsObject.qosId = valueQosCarsQosCar["QosId"].asString();
		if(!valueQosCarsQosCar["LimitType"].isNull())
			qosCarsObject.limitType = valueQosCarsQosCar["LimitType"].asString();
		if(!valueQosCarsQosCar["Priority"].isNull())
			qosCarsObject.priority = std::stoi(valueQosCarsQosCar["Priority"].asString());
		if(!valueQosCarsQosCar["Name"].isNull())
			qosCarsObject.name = valueQosCarsQosCar["Name"].asString();
		if(!valueQosCarsQosCar["MinBandwidthPercent"].isNull())
			qosCarsObject.minBandwidthPercent = std::stoi(valueQosCarsQosCar["MinBandwidthPercent"].asString());
		if(!valueQosCarsQosCar["QosCarId"].isNull())
			qosCarsObject.qosCarId = valueQosCarsQosCar["QosCarId"].asString();
		qosCars_.push_back(qosCarsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeQosCarsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeQosCarsResult::QosCar> DescribeQosCarsResult::getQosCars()const
{
	return qosCars_;
}

int DescribeQosCarsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeQosCarsResult::getPageNumber()const
{
	return pageNumber_;
}

