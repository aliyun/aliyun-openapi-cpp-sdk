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

#include <alibabacloud/paifeaturestore/model/CheckModelFeatureFGFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

CheckModelFeatureFGFeatureResult::CheckModelFeatureFGFeatureResult() :
	ServiceResult()
{}

CheckModelFeatureFGFeatureResult::CheckModelFeatureFGFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckModelFeatureFGFeatureResult::~CheckModelFeatureFGFeatureResult()
{}

void CheckModelFeatureFGFeatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFGCheckResultsNode = value["FGCheckResults"]["FGCheckResultsItem"];
	for (auto valueFGCheckResultsFGCheckResultsItem : allFGCheckResultsNode)
	{
		FGCheckResultsItem fGCheckResultsObject;
		if(!valueFGCheckResultsFGCheckResultsItem["RuleCode"].isNull())
			fGCheckResultsObject.ruleCode = valueFGCheckResultsFGCheckResultsItem["RuleCode"].asString();
		if(!valueFGCheckResultsFGCheckResultsItem["Status"].isNull())
			fGCheckResultsObject.status = valueFGCheckResultsFGCheckResultsItem["Status"].asString() == "true";
		if(!valueFGCheckResultsFGCheckResultsItem["Message"].isNull())
			fGCheckResultsObject.message = valueFGCheckResultsFGCheckResultsItem["Message"].asString();
		fGCheckResults_.push_back(fGCheckResultsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string CheckModelFeatureFGFeatureResult::getRequestId()const
{
	return requestId_;
}

std::vector<CheckModelFeatureFGFeatureResult::FGCheckResultsItem> CheckModelFeatureFGFeatureResult::getFGCheckResults()const
{
	return fGCheckResults_;
}

