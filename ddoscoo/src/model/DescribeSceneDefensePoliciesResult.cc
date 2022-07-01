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

#include <alibabacloud/ddoscoo/model/DescribeSceneDefensePoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeSceneDefensePoliciesResult::DescribeSceneDefensePoliciesResult() :
	ServiceResult()
{}

DescribeSceneDefensePoliciesResult::DescribeSceneDefensePoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSceneDefensePoliciesResult::~DescribeSceneDefensePoliciesResult()
{}

void DescribeSceneDefensePoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["Policy"];
	for (auto valuePoliciesPolicy : allPoliciesNode)
	{
		Policy policiesObject;
		if(!valuePoliciesPolicy["Done"].isNull())
			policiesObject.done = std::stoi(valuePoliciesPolicy["Done"].asString());
		if(!valuePoliciesPolicy["EndTime"].isNull())
			policiesObject.endTime = std::stol(valuePoliciesPolicy["EndTime"].asString());
		if(!valuePoliciesPolicy["Status"].isNull())
			policiesObject.status = std::stoi(valuePoliciesPolicy["Status"].asString());
		if(!valuePoliciesPolicy["StartTime"].isNull())
			policiesObject.startTime = std::stol(valuePoliciesPolicy["StartTime"].asString());
		if(!valuePoliciesPolicy["ObjectCount"].isNull())
			policiesObject.objectCount = std::stoi(valuePoliciesPolicy["ObjectCount"].asString());
		if(!valuePoliciesPolicy["Template"].isNull())
			policiesObject._template = valuePoliciesPolicy["Template"].asString();
		if(!valuePoliciesPolicy["PolicyId"].isNull())
			policiesObject.policyId = valuePoliciesPolicy["PolicyId"].asString();
		if(!valuePoliciesPolicy["Name"].isNull())
			policiesObject.name = valuePoliciesPolicy["Name"].asString();
		auto allRuntimePoliciesNode = valuePoliciesPolicy["RuntimePolicies"]["Policy"];
		for (auto valuePoliciesPolicyRuntimePoliciesPolicy : allRuntimePoliciesNode)
		{
			Policy::Policy1 runtimePoliciesObject;
			if(!valuePoliciesPolicyRuntimePoliciesPolicy["Status"].isNull())
				runtimePoliciesObject.status = std::stoi(valuePoliciesPolicyRuntimePoliciesPolicy["Status"].asString());
			if(!valuePoliciesPolicyRuntimePoliciesPolicy["oldValue"].isNull())
				runtimePoliciesObject.oldValue = valuePoliciesPolicyRuntimePoliciesPolicy["oldValue"].asString();
			if(!valuePoliciesPolicyRuntimePoliciesPolicy["NewValue"].isNull())
				runtimePoliciesObject.newValue = valuePoliciesPolicyRuntimePoliciesPolicy["NewValue"].asString();
			if(!valuePoliciesPolicyRuntimePoliciesPolicy["PolicyType"].isNull())
				runtimePoliciesObject.policyType = std::stoi(valuePoliciesPolicyRuntimePoliciesPolicy["PolicyType"].asString());
			policiesObject.runtimePolicies.push_back(runtimePoliciesObject);
		}
		policies_.push_back(policiesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSceneDefensePoliciesResult::Policy> DescribeSceneDefensePoliciesResult::getPolicies()const
{
	return policies_;
}

bool DescribeSceneDefensePoliciesResult::getSuccess()const
{
	return success_;
}

