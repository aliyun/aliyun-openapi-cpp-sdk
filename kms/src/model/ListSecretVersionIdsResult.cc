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

#include <alibabacloud/kms/model/ListSecretVersionIdsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListSecretVersionIdsResult::ListSecretVersionIdsResult() :
	ServiceResult()
{}

ListSecretVersionIdsResult::ListSecretVersionIdsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSecretVersionIdsResult::~ListSecretVersionIdsResult()
{}

void ListSecretVersionIdsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVersionIdsNode = value["VersionIds"]["VersionId"];
	for (auto valueVersionIdsVersionId : allVersionIdsNode)
	{
		VersionId versionIdsObject;
		if(!valueVersionIdsVersionId["VersionId"].isNull())
			versionIdsObject.versionId = valueVersionIdsVersionId["VersionId"].asString();
		if(!valueVersionIdsVersionId["CreateTime"].isNull())
			versionIdsObject.createTime = valueVersionIdsVersionId["CreateTime"].asString();
		auto allVersionStages = value["VersionStages"]["VersionStage"];
		for (auto value : allVersionStages)
			versionIdsObject.versionStages.push_back(value.asString());
		versionIds_.push_back(versionIdsObject);
	}
	if(!value["SecretName"].isNull())
		secretName_ = value["SecretName"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::string ListSecretVersionIdsResult::getSecretName()const
{
	return secretName_;
}

int ListSecretVersionIdsResult::getTotalCount()const
{
	return totalCount_;
}

int ListSecretVersionIdsResult::getPageSize()const
{
	return pageSize_;
}

int ListSecretVersionIdsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListSecretVersionIdsResult::VersionId> ListSecretVersionIdsResult::getVersionIds()const
{
	return versionIds_;
}

