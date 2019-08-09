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

#include <alibabacloud/smartag/model/DescribeQosPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeQosPoliciesResult::DescribeQosPoliciesResult() :
	ServiceResult()
{}

DescribeQosPoliciesResult::DescribeQosPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQosPoliciesResult::~DescribeQosPoliciesResult()
{}

void DescribeQosPoliciesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allQosPolicies = value["QosPolicies"]["QosPolicy"];
	for (auto value : allQosPolicies)
	{
		QosPolicy qosPoliciesObject;
		if(!value["QosPolicyId"].isNull())
			qosPoliciesObject.qosPolicyId = value["QosPolicyId"].asString();
		if(!value["QosId"].isNull())
			qosPoliciesObject.qosId = value["QosId"].asString();
		if(!value["Priority"].isNull())
			qosPoliciesObject.priority = std::stoi(value["Priority"].asString());
		if(!value["Description"].isNull())
			qosPoliciesObject.description = value["Description"].asString();
		if(!value["SourceCidr"].isNull())
			qosPoliciesObject.sourceCidr = value["SourceCidr"].asString();
		if(!value["DestCidr"].isNull())
			qosPoliciesObject.destCidr = value["DestCidr"].asString();
		if(!value["IpProtocol"].isNull())
			qosPoliciesObject.ipProtocol = value["IpProtocol"].asString();
		if(!value["SourcePortRange"].isNull())
			qosPoliciesObject.sourcePortRange = value["SourcePortRange"].asString();
		if(!value["DestPortRange"].isNull())
			qosPoliciesObject.destPortRange = value["DestPortRange"].asString();
		if(!value["StartTime"].isNull())
			qosPoliciesObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			qosPoliciesObject.endTime = std::stol(value["EndTime"].asString());
		qosPolicies_.push_back(qosPoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeQosPoliciesResult::QosPolicy> DescribeQosPoliciesResult::getQosPolicies()const
{
	return qosPolicies_;
}

int DescribeQosPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeQosPoliciesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeQosPoliciesResult::getPageNumber()const
{
	return pageNumber_;
}

