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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQosPoliciesNode = value["QosPolicies"]["QosPolicy"];
	for (auto valueQosPoliciesQosPolicy : allQosPoliciesNode)
	{
		QosPolicy qosPoliciesObject;
		if(!valueQosPoliciesQosPolicy["IpProtocol"].isNull())
			qosPoliciesObject.ipProtocol = valueQosPoliciesQosPolicy["IpProtocol"].asString();
		if(!valueQosPoliciesQosPolicy["QosId"].isNull())
			qosPoliciesObject.qosId = valueQosPoliciesQosPolicy["QosId"].asString();
		if(!valueQosPoliciesQosPolicy["Priority"].isNull())
			qosPoliciesObject.priority = std::stoi(valueQosPoliciesQosPolicy["Priority"].asString());
		if(!valueQosPoliciesQosPolicy["EndTime"].isNull())
			qosPoliciesObject.endTime = valueQosPoliciesQosPolicy["EndTime"].asString();
		if(!valueQosPoliciesQosPolicy["StartTime"].isNull())
			qosPoliciesObject.startTime = valueQosPoliciesQosPolicy["StartTime"].asString();
		if(!valueQosPoliciesQosPolicy["Description"].isNull())
			qosPoliciesObject.description = valueQosPoliciesQosPolicy["Description"].asString();
		if(!valueQosPoliciesQosPolicy["DestCidr"].isNull())
			qosPoliciesObject.destCidr = valueQosPoliciesQosPolicy["DestCidr"].asString();
		if(!valueQosPoliciesQosPolicy["DestPortRange"].isNull())
			qosPoliciesObject.destPortRange = valueQosPoliciesQosPolicy["DestPortRange"].asString();
		if(!valueQosPoliciesQosPolicy["QosPolicyId"].isNull())
			qosPoliciesObject.qosPolicyId = valueQosPoliciesQosPolicy["QosPolicyId"].asString();
		if(!valueQosPoliciesQosPolicy["Name"].isNull())
			qosPoliciesObject.name = valueQosPoliciesQosPolicy["Name"].asString();
		if(!valueQosPoliciesQosPolicy["SourceCidr"].isNull())
			qosPoliciesObject.sourceCidr = valueQosPoliciesQosPolicy["SourceCidr"].asString();
		if(!valueQosPoliciesQosPolicy["SourcePortRange"].isNull())
			qosPoliciesObject.sourcePortRange = valueQosPoliciesQosPolicy["SourcePortRange"].asString();
		auto allDpiSignatureIds = value["DpiSignatureIds"]["DpiSignatureId"];
		for (auto value : allDpiSignatureIds)
			qosPoliciesObject.dpiSignatureIds.push_back(value.asString());
		auto allDpiGroupIds = value["DpiGroupIds"]["DpiGroupId"];
		for (auto value : allDpiGroupIds)
			qosPoliciesObject.dpiGroupIds.push_back(value.asString());
		qosPolicies_.push_back(qosPoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

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

