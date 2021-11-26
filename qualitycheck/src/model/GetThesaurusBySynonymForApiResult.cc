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

#include <alibabacloud/qualitycheck/model/GetThesaurusBySynonymForApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetThesaurusBySynonymForApiResult::GetThesaurusBySynonymForApiResult() :
	ServiceResult()
{}

GetThesaurusBySynonymForApiResult::GetThesaurusBySynonymForApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetThesaurusBySynonymForApiResult::~GetThesaurusBySynonymForApiResult()
{}

void GetThesaurusBySynonymForApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ThesaurusPo"];
	for (auto valueDataThesaurusPo : allDataNode)
	{
		ThesaurusPo dataObject;
		if(!valueDataThesaurusPo["Business"].isNull())
			dataObject.business = valueDataThesaurusPo["Business"].asString();
		if(!valueDataThesaurusPo["Id"].isNull())
			dataObject.id = std::stol(valueDataThesaurusPo["Id"].asString());
		auto allSynonymList = value["SynonymList"]["SynonymList"];
		for (auto value : allSynonymList)
			dataObject.synonymList.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetThesaurusBySynonymForApiResult::getMessage()const
{
	return message_;
}

std::vector<GetThesaurusBySynonymForApiResult::ThesaurusPo> GetThesaurusBySynonymForApiResult::getData()const
{
	return data_;
}

std::string GetThesaurusBySynonymForApiResult::getCode()const
{
	return code_;
}

bool GetThesaurusBySynonymForApiResult::getSuccess()const
{
	return success_;
}

