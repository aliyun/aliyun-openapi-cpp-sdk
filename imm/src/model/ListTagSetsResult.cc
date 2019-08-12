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

#include <alibabacloud/imm/model/ListTagSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListTagSetsResult::ListTagSetsResult() :
	ServiceResult()
{}

ListTagSetsResult::ListTagSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagSetsResult::~ListTagSetsResult()
{}

void ListTagSetsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSets = value["Sets"]["SetsItem"];
	for (auto value : allSets)
	{
		SetsItem setsObject;
		if(!value["SetId"].isNull())
			setsObject.setId = value["SetId"].asString();
		if(!value["Status"].isNull())
			setsObject.status = value["Status"].asString();
		if(!value["Photos"].isNull())
			setsObject.photos = std::stol(value["Photos"].asString());
		if(!value["CreateTime"].isNull())
			setsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifyTime"].isNull())
			setsObject.modifyTime = value["ModifyTime"].asString();
		sets_.push_back(setsObject);
	}
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<ListTagSetsResult::SetsItem> ListTagSetsResult::getSets()const
{
	return sets_;
}

std::string ListTagSetsResult::getNextMarker()const
{
	return nextMarker_;
}

