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

#include <alibabacloud/quotas/model/CreateQuotaApplicationsForTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quotas;
using namespace AlibabaCloud::Quotas::Model;

CreateQuotaApplicationsForTemplateResult::CreateQuotaApplicationsForTemplateResult() :
	ServiceResult()
{}

CreateQuotaApplicationsForTemplateResult::CreateQuotaApplicationsForTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateQuotaApplicationsForTemplateResult::~CreateQuotaApplicationsForTemplateResult()
{}

void CreateQuotaApplicationsForTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailResultsNode = value["FailResults"]["failResultsItem"];
	for (auto valueFailResultsfailResultsItem : allFailResultsNode)
	{
		FailResultsItem failResultsObject;
		if(!valueFailResultsfailResultsItem["AliyunUid"].isNull())
			failResultsObject.aliyunUid = valueFailResultsfailResultsItem["AliyunUid"].asString();
		if(!valueFailResultsfailResultsItem["Reason"].isNull())
			failResultsObject.reason = valueFailResultsfailResultsItem["Reason"].asString();
		failResults_.push_back(failResultsObject);
	}
	auto allAliyunUids = value["AliyunUids"]["aliyunUids"];
	for (const auto &item : allAliyunUids)
		aliyunUids_.push_back(item.asString());
	if(!value["BatchQuotaApplicationId"].isNull())
		batchQuotaApplicationId_ = value["BatchQuotaApplicationId"].asString();

}

std::string CreateQuotaApplicationsForTemplateResult::getBatchQuotaApplicationId()const
{
	return batchQuotaApplicationId_;
}

std::vector<std::string> CreateQuotaApplicationsForTemplateResult::getAliyunUids()const
{
	return aliyunUids_;
}

std::vector<CreateQuotaApplicationsForTemplateResult::FailResultsItem> CreateQuotaApplicationsForTemplateResult::getFailResults()const
{
	return failResults_;
}

