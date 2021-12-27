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

#include <alibabacloud/dcdn/model/DescribeDcdnEsExceptionDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnEsExceptionDataResult::DescribeDcdnEsExceptionDataResult() :
	ServiceResult()
{}

DescribeDcdnEsExceptionDataResult::DescribeDcdnEsExceptionDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnEsExceptionDataResult::~DescribeDcdnEsExceptionDataResult()
{}

void DescribeDcdnEsExceptionDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContentsNode = value["Contents"]["Content"];
	for (auto valueContentsContent : allContentsNode)
	{
		Content contentsObject;
		if(!valueContentsContent["Name"].isNull())
			contentsObject.name = valueContentsContent["Name"].asString();
		auto allColumns = value["Columns"]["columns"];
		for (auto value : allColumns)
			contentsObject.columns.push_back(value.asString());
		auto allPoints = value["Points"]["points"];
		for (auto value : allPoints)
			contentsObject.points.push_back(value.asString());
		contents_.push_back(contentsObject);
	}

}

std::vector<DescribeDcdnEsExceptionDataResult::Content> DescribeDcdnEsExceptionDataResult::getContents()const
{
	return contents_;
}

