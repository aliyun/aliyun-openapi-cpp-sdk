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

#include <alibabacloud/config/model/ListRemediationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListRemediationsResult::ListRemediationsResult() :
	ServiceResult()
{}

ListRemediationsResult::ListRemediationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRemediationsResult::~ListRemediationsResult()
{}

void ListRemediationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRemediationsNode = value["Remediations"]["Remediation"];
	for (auto valueRemediationsRemediation : allRemediationsNode)
	{
		Remediation remediationsObject;
		if(!valueRemediationsRemediation["LastSuccessfulInvocationType"].isNull())
			remediationsObject.lastSuccessfulInvocationType = valueRemediationsRemediation["LastSuccessfulInvocationType"].asString();
		if(!valueRemediationsRemediation["RemediationTemplateId"].isNull())
			remediationsObject.remediationTemplateId = valueRemediationsRemediation["RemediationTemplateId"].asString();
		if(!valueRemediationsRemediation["RemediationDynamicParams"].isNull())
			remediationsObject.remediationDynamicParams = valueRemediationsRemediation["RemediationDynamicParams"].asString();
		if(!valueRemediationsRemediation["RemediationId"].isNull())
			remediationsObject.remediationId = valueRemediationsRemediation["RemediationId"].asString();
		if(!valueRemediationsRemediation["RemediationSourceType"].isNull())
			remediationsObject.remediationSourceType = valueRemediationsRemediation["RemediationSourceType"].asString();
		if(!valueRemediationsRemediation["RemediationType"].isNull())
			remediationsObject.remediationType = valueRemediationsRemediation["RemediationType"].asString();
		if(!valueRemediationsRemediation["LastSuccessfulInvocationId"].isNull())
			remediationsObject.lastSuccessfulInvocationId = valueRemediationsRemediation["LastSuccessfulInvocationId"].asString();
		if(!valueRemediationsRemediation["AccountId"].isNull())
			remediationsObject.accountId = std::stol(valueRemediationsRemediation["AccountId"].asString());
		if(!valueRemediationsRemediation["InvokeType"].isNull())
			remediationsObject.invokeType = valueRemediationsRemediation["InvokeType"].asString();
		if(!valueRemediationsRemediation["ConfigRuleId"].isNull())
			remediationsObject.configRuleId = valueRemediationsRemediation["ConfigRuleId"].asString();
		if(!valueRemediationsRemediation["LastSuccessfulInvocationTime"].isNull())
			remediationsObject.lastSuccessfulInvocationTime = std::stol(valueRemediationsRemediation["LastSuccessfulInvocationTime"].asString());
		if(!valueRemediationsRemediation["RemediationOriginParams"].isNull())
			remediationsObject.remediationOriginParams = valueRemediationsRemediation["RemediationOriginParams"].asString();
		remediations_.push_back(remediationsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListRemediationsResult::getTotalCount()const
{
	return totalCount_;
}

long ListRemediationsResult::getPageSize()const
{
	return pageSize_;
}

long ListRemediationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListRemediationsResult::Remediation> ListRemediationsResult::getRemediations()const
{
	return remediations_;
}

