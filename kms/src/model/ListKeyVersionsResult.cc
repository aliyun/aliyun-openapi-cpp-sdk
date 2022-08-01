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

#include <alibabacloud/kms/model/ListKeyVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListKeyVersionsResult::ListKeyVersionsResult() :
	ServiceResult()
{}

ListKeyVersionsResult::ListKeyVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKeyVersionsResult::~ListKeyVersionsResult()
{}

void ListKeyVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKeyVersionsNode = value["KeyVersions"]["KeyVersion"];
	for (auto valueKeyVersionsKeyVersion : allKeyVersionsNode)
	{
		KeyVersion keyVersionsObject;
		if(!valueKeyVersionsKeyVersion["KeyId"].isNull())
			keyVersionsObject.keyId = valueKeyVersionsKeyVersion["KeyId"].asString();
		if(!valueKeyVersionsKeyVersion["KeyVersionId"].isNull())
			keyVersionsObject.keyVersionId = valueKeyVersionsKeyVersion["KeyVersionId"].asString();
		if(!valueKeyVersionsKeyVersion["CreationDate"].isNull())
			keyVersionsObject.creationDate = valueKeyVersionsKeyVersion["CreationDate"].asString();
		keyVersions_.push_back(keyVersionsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<ListKeyVersionsResult::KeyVersion> ListKeyVersionsResult::getKeyVersions()const
{
	return keyVersions_;
}

int ListKeyVersionsResult::getTotalCount()const
{
	return totalCount_;
}

int ListKeyVersionsResult::getPageSize()const
{
	return pageSize_;
}

int ListKeyVersionsResult::getPageNumber()const
{
	return pageNumber_;
}

