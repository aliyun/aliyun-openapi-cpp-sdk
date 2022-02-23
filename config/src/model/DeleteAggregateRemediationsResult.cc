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

#include <alibabacloud/config/model/DeleteAggregateRemediationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

DeleteAggregateRemediationsResult::DeleteAggregateRemediationsResult() :
	ServiceResult()
{}

DeleteAggregateRemediationsResult::DeleteAggregateRemediationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAggregateRemediationsResult::~DeleteAggregateRemediationsResult()
{}

void DeleteAggregateRemediationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRemediationDeleteResultsNode = value["RemediationDeleteResults"]["RemediationDeleteResult"];
	for (auto valueRemediationDeleteResultsRemediationDeleteResult : allRemediationDeleteResultsNode)
	{
		RemediationDeleteResult remediationDeleteResultsObject;
		if(!valueRemediationDeleteResultsRemediationDeleteResult["RemediationId"].isNull())
			remediationDeleteResultsObject.remediationId = valueRemediationDeleteResultsRemediationDeleteResult["RemediationId"].asString();
		if(!valueRemediationDeleteResultsRemediationDeleteResult["ErrorMessage"].isNull())
			remediationDeleteResultsObject.errorMessage = valueRemediationDeleteResultsRemediationDeleteResult["ErrorMessage"].asString();
		if(!valueRemediationDeleteResultsRemediationDeleteResult["Success"].isNull())
			remediationDeleteResultsObject.success = valueRemediationDeleteResultsRemediationDeleteResult["Success"].asString() == "true";
		remediationDeleteResults_.push_back(remediationDeleteResultsObject);
	}

}

std::vector<DeleteAggregateRemediationsResult::RemediationDeleteResult> DeleteAggregateRemediationsResult::getRemediationDeleteResults()const
{
	return remediationDeleteResults_;
}

