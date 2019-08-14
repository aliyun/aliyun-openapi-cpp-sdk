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

#include <alibabacloud/linkface/model/SearchFaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkFace;
using namespace AlibabaCloud::LinkFace::Model;

SearchFaceResult::SearchFaceResult() :
	ServiceResult()
{}

SearchFaceResult::SearchFaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchFaceResult::~SearchFaceResult()
{}

void SearchFaceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allTopUserItem = value["TopUserItem"]["TopUserItemItem"];
	for (auto value : allTopUserItem)
	{
		Data::TopUserItemItem topUserItemItemObject;
		if(!value["UserId"].isNull())
			topUserItemItemObject.userId = value["UserId"].asString();
		if(!value["Score"].isNull())
			topUserItemItemObject.score = std::stof(value["Score"].asString());
		data_.topUserItem.push_back(topUserItemItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string SearchFaceResult::getMessage()const
{
	return message_;
}

SearchFaceResult::Data SearchFaceResult::getData()const
{
	return data_;
}

int SearchFaceResult::getCode()const
{
	return code_;
}

bool SearchFaceResult::getSuccess()const
{
	return success_;
}

