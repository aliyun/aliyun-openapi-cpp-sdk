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

#include <alibabacloud/governance/model/ListAccountFactoryBaselinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListAccountFactoryBaselinesResult::ListAccountFactoryBaselinesResult() :
	ServiceResult()
{}

ListAccountFactoryBaselinesResult::ListAccountFactoryBaselinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAccountFactoryBaselinesResult::~ListAccountFactoryBaselinesResult()
{}

void ListAccountFactoryBaselinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselinesNode = value["Baselines"]["Baseline"];
	for (auto valueBaselinesBaseline : allBaselinesNode)
	{
		Baseline baselinesObject;
		if(!valueBaselinesBaseline["BaselineId"].isNull())
			baselinesObject.baselineId = valueBaselinesBaseline["BaselineId"].asString();
		if(!valueBaselinesBaseline["BaselineName"].isNull())
			baselinesObject.baselineName = valueBaselinesBaseline["BaselineName"].asString();
		if(!valueBaselinesBaseline["CreateTime"].isNull())
			baselinesObject.createTime = valueBaselinesBaseline["CreateTime"].asString();
		if(!valueBaselinesBaseline["Description"].isNull())
			baselinesObject.description = valueBaselinesBaseline["Description"].asString();
		if(!valueBaselinesBaseline["Type"].isNull())
			baselinesObject.type = valueBaselinesBaseline["Type"].asString();
		if(!valueBaselinesBaseline["UpdateTime"].isNull())
			baselinesObject.updateTime = valueBaselinesBaseline["UpdateTime"].asString();
		baselines_.push_back(baselinesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListAccountFactoryBaselinesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListAccountFactoryBaselinesResult::Baseline> ListAccountFactoryBaselinesResult::getBaselines()const
{
	return baselines_;
}

