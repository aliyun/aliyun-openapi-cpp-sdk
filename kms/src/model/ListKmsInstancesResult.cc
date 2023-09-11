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

#include <alibabacloud/kms/model/ListKmsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

ListKmsInstancesResult::ListKmsInstancesResult() :
	ServiceResult()
{}

ListKmsInstancesResult::ListKmsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKmsInstancesResult::~ListKmsInstancesResult()
{}

void ListKmsInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allKmsInstancesNode = value["KmsInstances"]["KmsInstance"];
	for (auto valueKmsInstancesKmsInstance : allKmsInstancesNode)
	{
		KmsInstance kmsInstancesObject;
		if(!valueKmsInstancesKmsInstance["KmsInstanceArn"].isNull())
			kmsInstancesObject.kmsInstanceArn = valueKmsInstancesKmsInstance["KmsInstanceArn"].asString();
		if(!valueKmsInstancesKmsInstance["KmsInstanceId"].isNull())
			kmsInstancesObject.kmsInstanceId = valueKmsInstancesKmsInstance["KmsInstanceId"].asString();
		kmsInstances_.push_back(kmsInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListKmsInstancesResult::getTotalCount()const
{
	return totalCount_;
}

long ListKmsInstancesResult::getPageSize()const
{
	return pageSize_;
}

long ListKmsInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListKmsInstancesResult::KmsInstance> ListKmsInstancesResult::getKmsInstances()const
{
	return kmsInstances_;
}

