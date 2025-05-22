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

#include <alibabacloud/rds/model/DescribeSecretsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSecretsResult::DescribeSecretsResult() :
	ServiceResult()
{}

DescribeSecretsResult::DescribeSecretsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSecretsResult::~DescribeSecretsResult()
{}

void DescribeSecretsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecretsNode = value["Secrets"]["SecretsItem"];
	for (auto valueSecretsSecretsItem : allSecretsNode)
	{
		SecretsItem secretsObject;
		if(!valueSecretsSecretsItem["AccountId"].isNull())
			secretsObject.accountId = valueSecretsSecretsItem["AccountId"].asString();
		if(!valueSecretsSecretsItem["Description"].isNull())
			secretsObject.description = valueSecretsSecretsItem["Description"].asString();
		if(!valueSecretsSecretsItem["RegionId"].isNull())
			secretsObject.regionId = valueSecretsSecretsItem["RegionId"].asString();
		if(!valueSecretsSecretsItem["SecretArn"].isNull())
			secretsObject.secretArn = valueSecretsSecretsItem["SecretArn"].asString();
		if(!valueSecretsSecretsItem["SecretName"].isNull())
			secretsObject.secretName = valueSecretsSecretsItem["SecretName"].asString();
		if(!valueSecretsSecretsItem["Username"].isNull())
			secretsObject.username = valueSecretsSecretsItem["Username"].asString();
		secrets_.push_back(secretsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<DescribeSecretsResult::SecretsItem> DescribeSecretsResult::getSecrets()const
{
	return secrets_;
}

long DescribeSecretsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeSecretsResult::getPageNumber()const
{
	return pageNumber_;
}

