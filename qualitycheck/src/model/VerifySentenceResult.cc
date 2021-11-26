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

#include <alibabacloud/qualitycheck/model/VerifySentenceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

VerifySentenceResult::VerifySentenceResult() :
	ServiceResult()
{}

VerifySentenceResult::VerifySentenceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VerifySentenceResult::~VerifySentenceResult()
{}

void VerifySentenceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Delta"];
	for (auto valueDataDelta : allDataNode)
	{
		Delta dataObject;
		if(!valueDataDelta["Type"].isNull())
			dataObject.type = valueDataDelta["Type"].asString();
		auto sourceNode = value["Source"];
		if(!sourceNode["Position"].isNull())
			dataObject.source.position = std::stoi(sourceNode["Position"].asString());
			auto allLine = sourceNode["Line"]["Line"];
			for (auto value : allLine)
				dataObject.source.line.push_back(value.asString());
		auto targetNode = value["Target"];
		if(!targetNode["Position"].isNull())
			dataObject.target.position = std::stoi(targetNode["Position"].asString());
			auto allLine1 = targetNode["Line"]["Line"];
			for (auto value : allLine1)
				dataObject.target.line1.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["IncorrectWords"].isNull())
		incorrectWords_ = std::stoi(value["IncorrectWords"].asString());
	if(!value["TargetRole"].isNull())
		targetRole_ = std::stoi(value["TargetRole"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["SourceRole"].isNull())
		sourceRole_ = std::stoi(value["SourceRole"].asString());

}

int VerifySentenceResult::getSourceRole()const
{
	return sourceRole_;
}

int VerifySentenceResult::getIncorrectWords()const
{
	return incorrectWords_;
}

std::string VerifySentenceResult::getMessage()const
{
	return message_;
}

int VerifySentenceResult::getTargetRole()const
{
	return targetRole_;
}

std::vector<VerifySentenceResult::Delta> VerifySentenceResult::getData()const
{
	return data_;
}

std::string VerifySentenceResult::getCode()const
{
	return code_;
}

bool VerifySentenceResult::getSuccess()const
{
	return success_;
}

