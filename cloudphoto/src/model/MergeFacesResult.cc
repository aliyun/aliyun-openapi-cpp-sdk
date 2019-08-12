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

#include <alibabacloud/cloudphoto/model/MergeFacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

MergeFacesResult::MergeFacesResult() :
	ServiceResult()
{}

MergeFacesResult::MergeFacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MergeFacesResult::~MergeFacesResult()
{}

void MergeFacesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allResults = value["Results"]["Result"];
	for (auto value : allResults)
	{
		Result resultsObject;
		if(!value["Id"].isNull())
			resultsObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			resultsObject.idStr = value["IdStr"].asString();
		if(!value["Code"].isNull())
			resultsObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			resultsObject.message = value["Message"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string MergeFacesResult::getAction()const
{
	return action_;
}

std::string MergeFacesResult::getMessage()const
{
	return message_;
}

std::vector<MergeFacesResult::Result> MergeFacesResult::getResults()const
{
	return results_;
}

std::string MergeFacesResult::getCode()const
{
	return code_;
}

