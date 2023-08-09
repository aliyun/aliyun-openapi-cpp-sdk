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

#include <alibabacloud/config/model/ListAggregateRemediationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListAggregateRemediationsResult::ListAggregateRemediationsResult() :
	ServiceResult()
{}

ListAggregateRemediationsResult::ListAggregateRemediationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAggregateRemediationsResult::~ListAggregateRemediationsResult()
{}

void ListAggregateRemediationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRemediationsNode = value["Remediations"]["Remediation"];
	for (auto valueRemediationsRemediation : allRemediationsNode)
	{
		Remediation remediationsObject;
		if(!valueRemediationsRemediation["RemediationTemplateId"].isNull())
			remediationsObject.remediationTemplateId = valueRemediationsRemediation["RemediationTemplateId"].asString();
		if(!valueRemediationsRemediation["RemediationDynamicParams"].isNull())
			remediationsObject.remediationDynamicParams = valueRemediationsRemediation["RemediationDynamicParams"].asString();
		if(!valueRemediationsRemediation["RemediationSourceType"].isNull())
			remediationsObject.remediationSourceType = valueRemediationsRemediation["RemediationSourceType"].asString();
		if(!valueRemediationsRemediation["RemediationType"].isNull())
			remediationsObject.remediationType = valueRemediationsRemediation["RemediationType"].asString();
		if(!valueRemediationsRemediation["LastSuccessfulInvocationId"].isNull())
			remediationsObject.lastSuccessfulInvocationId = valueRemediationsRemediation["LastSuccessfulInvocationId"].asString();
		if(!valueRemediationsRemediation["AccountId"].isNull())
			remediationsObject.accountId = std::stol(valueRemediationsRemediation["AccountId"].asString());
		if(!valueRemediationsRemediation["AggregatorId"].isNull())
			remediationsObject.aggregatorId = valueRemediationsRemediation["AggregatorId"].asString();
		if(!valueRemediationsRemediation["LastSuccessfulInvocationType"].isNull())
			remediationsObject.lastSuccessfulInvocationType = valueRemediationsRemediation["LastSuccessfulInvocationType"].asString();
		if(!valueRemediationsRemediation["RemediationId"].isNull())
			remediationsObject.remediationId = valueRemediationsRemediation["RemediationId"].asString();
		if(!valueRemediationsRemediation["InvokeType"].isNull())
			remediationsObject.invokeType = valueRemediationsRemediation["InvokeType"].asString();
		if(!valueRemediationsRemediation["ConfigRuleId"].isNull())
			remediationsObject.configRuleId = valueRemediationsRemediation["ConfigRuleId"].asString();
		if(!valueRemediationsRemediation["LastSuccessfulInvocationTime"].isNull())
			remediationsObject.lastSuccessfulInvocationTime = std::stol(valueRemediationsRemediation["LastSuccessfulInvocationTime"].asString());
		if(!valueRemediationsRemediation["RemediaitonOriginParams"].isNull())
			remediationsObject.remediaitonOriginParams = valueRemediationsRemediation["RemediaitonOriginParams"].asString();
		remediations_.push_back(remediationsObject);
	}

}

std::vector<ListAggregateRemediationsResult::Remediation> ListAggregateRemediationsResult::getRemediations()const
{
	return remediations_;
}

