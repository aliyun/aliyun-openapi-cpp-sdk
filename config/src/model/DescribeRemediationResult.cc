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

#include <alibabacloud/config/model/DescribeRemediationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

DescribeRemediationResult::DescribeRemediationResult() :
	ServiceResult()
{}

DescribeRemediationResult::DescribeRemediationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRemediationResult::~DescribeRemediationResult()
{}

void DescribeRemediationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto remediationNode = value["Remediation"];
	if(!remediationNode["LastSuccessfulInvocationType"].isNull())
		remediation_.lastSuccessfulInvocationType = remediationNode["LastSuccessfulInvocationType"].asString();
	if(!remediationNode["RemediationTemplateId"].isNull())
		remediation_.remediationTemplateId = remediationNode["RemediationTemplateId"].asString();
	if(!remediationNode["RemediationDynamicParams"].isNull())
		remediation_.remediationDynamicParams = remediationNode["RemediationDynamicParams"].asString();
	if(!remediationNode["RemediationOriginParams"].isNull())
		remediation_.remediationOriginParams = remediationNode["RemediationOriginParams"].asString();
	if(!remediationNode["RemediationId"].isNull())
		remediation_.remediationId = remediationNode["RemediationId"].asString();
	if(!remediationNode["RemediationSourceType"].isNull())
		remediation_.remediationSourceType = remediationNode["RemediationSourceType"].asString();
	if(!remediationNode["RemediationType"].isNull())
		remediation_.remediationType = remediationNode["RemediationType"].asString();
	if(!remediationNode["LastSuccessfulInvocationId"].isNull())
		remediation_.lastSuccessfulInvocationId = remediationNode["LastSuccessfulInvocationId"].asString();
	if(!remediationNode["AccountId"].isNull())
		remediation_.accountId = std::stol(remediationNode["AccountId"].asString());
	if(!remediationNode["InvokeType"].isNull())
		remediation_.invokeType = remediationNode["InvokeType"].asString();
	if(!remediationNode["ConfigRuleId"].isNull())
		remediation_.configRuleId = remediationNode["ConfigRuleId"].asString();
	if(!remediationNode["LastSuccessfulInvocationTime"].isNull())
		remediation_.lastSuccessfulInvocationTime = std::stol(remediationNode["LastSuccessfulInvocationTime"].asString());

}

DescribeRemediationResult::Remediation DescribeRemediationResult::getRemediation()const
{
	return remediation_;
}

