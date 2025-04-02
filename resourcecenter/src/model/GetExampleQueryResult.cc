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

#include <alibabacloud/resourcecenter/model/GetExampleQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

GetExampleQueryResult::GetExampleQueryResult() :
	ServiceResult()
{}

GetExampleQueryResult::GetExampleQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetExampleQueryResult::~GetExampleQueryResult()
{}

void GetExampleQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto exampleQueryNode = value["ExampleQuery"];
	if(!exampleQueryNode["Description"].isNull())
		exampleQuery_.description = exampleQueryNode["Description"].asString();
	if(!exampleQueryNode["Expression"].isNull())
		exampleQuery_.expression = exampleQueryNode["Expression"].asString();
	if(!exampleQueryNode["Name"].isNull())
		exampleQuery_.name = exampleQueryNode["Name"].asString();
	if(!exampleQueryNode["QueryId"].isNull())
		exampleQuery_.queryId = exampleQueryNode["QueryId"].asString();

}

GetExampleQueryResult::ExampleQuery GetExampleQueryResult::getExampleQuery()const
{
	return exampleQuery_;
}

