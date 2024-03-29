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

#include <alibabacloud/imageprocess/model/RunMedQAResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imageprocess;
using namespace AlibabaCloud::Imageprocess::Model;

RunMedQAResult::RunMedQAResult() :
	ServiceResult()
{}

RunMedQAResult::RunMedQAResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RunMedQAResult::~RunMedQAResult()
{}

void RunMedQAResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["SessionId"].isNull())
		data_.sessionId = dataNode["SessionId"].asString();
	if(!dataNode["QuestionType"].isNull())
		data_.questionType = dataNode["QuestionType"].asString();
	if(!dataNode["Question"].isNull())
		data_.question = dataNode["Question"].asString();
	if(!dataNode["AnswerType"].isNull())
		data_.answerType = dataNode["AnswerType"].asString();
	if(!dataNode["Reports"].isNull())
		data_.reports = dataNode["Reports"].asString();
		auto allOptions = dataNode["Options"]["options"];
		for (auto value : allOptions)
			data_.options.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RunMedQAResult::getMessage()const
{
	return message_;
}

RunMedQAResult::Data RunMedQAResult::getData()const
{
	return data_;
}

std::string RunMedQAResult::getCode()const
{
	return code_;
}

