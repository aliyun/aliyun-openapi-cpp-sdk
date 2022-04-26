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

#include <alibabacloud/ccc/model/ImportCustomCallTaggingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ImportCustomCallTaggingResult::ImportCustomCallTaggingResult() :
	ServiceResult()
{}

ImportCustomCallTaggingResult::ImportCustomCallTaggingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportCustomCallTaggingResult::~ImportCustomCallTaggingResult()
{}

void ImportCustomCallTaggingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["FailureItem"];
	for (auto valueDataFailureItem : allDataNode)
	{
		FailureItem dataObject;
		if(!valueDataFailureItem["Item"].isNull())
			dataObject.item = valueDataFailureItem["Item"].asString();
		if(!valueDataFailureItem["Reason"].isNull())
			dataObject.reason = valueDataFailureItem["Reason"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ImportCustomCallTaggingResult::getMessage()const
{
	return message_;
}

int ImportCustomCallTaggingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ImportCustomCallTaggingResult::FailureItem> ImportCustomCallTaggingResult::getData()const
{
	return data_;
}

std::string ImportCustomCallTaggingResult::getCode()const
{
	return code_;
}

