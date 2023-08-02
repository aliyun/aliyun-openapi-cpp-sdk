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

#include <alibabacloud/gpdb/model/QueryCollectionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

QueryCollectionDataResult::QueryCollectionDataResult() :
	ServiceResult()
{}

QueryCollectionDataResult::QueryCollectionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCollectionDataResult::~QueryCollectionDataResult()
{}

void QueryCollectionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMatchesNode = value["Matches"]["match"];
	for (auto valueMatchesmatch : allMatchesNode)
	{
		Match matchesObject;
		if(!valueMatchesmatch["Id"].isNull())
			matchesObject.id = valueMatchesmatch["Id"].asString();
		if(!valueMatchesmatch["Metadata"].isNull())
			matchesObject.metadata = valueMatchesmatch["Metadata"].asString();
		if(!valueMatchesmatch["Similarity"].isNull())
			matchesObject.similarity = valueMatchesmatch["Similarity"].asString();
		auto allValues = value["Values"]["value"];
		for (auto value : allValues)
			matchesObject.values.push_back(value.asString());
		matches_.push_back(matchesObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCollectionDataResult::getStatus()const
{
	return status_;
}

std::vector<QueryCollectionDataResult::Match> QueryCollectionDataResult::getMatches()const
{
	return matches_;
}

std::string QueryCollectionDataResult::getMessage()const
{
	return message_;
}

