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

#include <alibabacloud/ens/model/GetBucketLifecycleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

GetBucketLifecycleResult::GetBucketLifecycleResult() :
	ServiceResult()
{}

GetBucketLifecycleResult::GetBucketLifecycleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBucketLifecycleResult::~GetBucketLifecycleResult()
{}

void GetBucketLifecycleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleNode = value["Rule"]["RuleItem"];
	for (auto valueRuleRuleItem : allRuleNode)
	{
		RuleItem ruleObject;
		if(!valueRuleRuleItem["ID"].isNull())
			ruleObject.iD = valueRuleRuleItem["ID"].asString();
		if(!valueRuleRuleItem["Prefix"].isNull())
			ruleObject.prefix = valueRuleRuleItem["Prefix"].asString();
		if(!valueRuleRuleItem["Status"].isNull())
			ruleObject.status = valueRuleRuleItem["Status"].asString();
		auto expirationNode = value["Expiration"];
		if(!expirationNode["Days"].isNull())
			ruleObject.expiration.days = expirationNode["Days"].asString();
		if(!expirationNode["CreatedBeforeDate"].isNull())
			ruleObject.expiration.createdBeforeDate = expirationNode["CreatedBeforeDate"].asString();
		rule_.push_back(ruleObject);
	}

}

std::vector<GetBucketLifecycleResult::RuleItem> GetBucketLifecycleResult::getRule()const
{
	return rule_;
}

