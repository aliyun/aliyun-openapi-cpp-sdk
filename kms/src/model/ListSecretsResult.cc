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

#include <alibabacloud/kms/model/ListSecretsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListSecretsResult::ListSecretsResult() :
	ServiceResult()
{}

ListSecretsResult::ListSecretsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecretsResult::~ListSecretsResult()
{}

void ListSecretsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecretListNode = value["SecretList"]["Secret"];
	for (auto valueSecretListSecret : allSecretListNode)
	{
		Secret secretListObject;
		if(!valueSecretListSecret["SecretName"].isNull())
			secretListObject.secretName = valueSecretListSecret["SecretName"].asString();
		if(!valueSecretListSecret["UpdateTime"].isNull())
			secretListObject.updateTime = valueSecretListSecret["UpdateTime"].asString();
		if(!valueSecretListSecret["SecretType"].isNull())
			secretListObject.secretType = valueSecretListSecret["SecretType"].asString();
		if(!valueSecretListSecret["PlannedDeleteTime"].isNull())
			secretListObject.plannedDeleteTime = valueSecretListSecret["PlannedDeleteTime"].asString();
		if(!valueSecretListSecret["CreateTime"].isNull())
			secretListObject.createTime = valueSecretListSecret["CreateTime"].asString();
		auto allTagsNode = valueSecretListSecret["Tags"]["Tag"];
		for (auto valueSecretListSecretTagsTag : allTagsNode)
		{
			Secret::Tag tagsObject;
			if(!valueSecretListSecretTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueSecretListSecretTagsTag["TagValue"].asString();
			if(!valueSecretListSecretTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueSecretListSecretTagsTag["TagKey"].asString();
			secretListObject.tags.push_back(tagsObject);
		}
		secretList_.push_back(secretListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListSecretsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListSecretsResult::Secret> ListSecretsResult::getSecretList()const
{
	return secretList_;
}

int ListSecretsResult::getPageSize()const
{
	return pageSize_;
}

int ListSecretsResult::getPageNumber()const
{
	return pageNumber_;
}

