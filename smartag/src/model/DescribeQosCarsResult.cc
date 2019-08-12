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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allQosCars = value["QosCars"]["QosCar"];
	for (auto value : allQosCars)
	{
		QosCar qosCarsObject;
		if(!value["QosCarId"].isNull())
			qosCarsObject.qosCarId = value["QosCarId"].asString();
		if(!value["QosId"].isNull())
			qosCarsObject.qosId = value["QosId"].asString();
		if(!value["Description"].isNull())
			qosCarsObject.description = value["Description"].asString();
		if(!value["Priority"].isNull())
			qosCarsObject.priority = std::stoi(value["Priority"].asString());
		if(!value["LimitType"].isNull())
			qosCarsObject.limitType = value["LimitType"].asString();
		if(!value["MinBandwidthAbs"].isNull())
			qosCarsObject.minBandwidthAbs = std::stoi(value["MinBandwidthAbs"].asString());
		if(!value["MaxBandwidthAbs"].isNull())
			qosCarsObject.maxBandwidthAbs = std::stoi(value["MaxBandwidthAbs"].asString());
		if(!value["MinBandwidthPercent"].isNull())
			qosCarsObject.minBandwidthPercent = std::stoi(value["MinBandwidthPercent"].asString());
		if(!value["MaxBandwidthPercent"].isNull())
			qosCarsObject.maxBandwidthPercent = std::stoi(value["MaxBandwidthPercent"].asString());
		if(!value["PercentSourceType"].isNull())
			qosCarsObject.percentSourceType = value["PercentSourceType"].asString();
		qosCars_.push_back(qosCarsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

