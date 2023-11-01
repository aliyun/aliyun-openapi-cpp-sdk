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

#include <alibabacloud/cloud-siem/model/ShowQuickAnalysisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ShowQuickAnalysisResult::ShowQuickAnalysisResult() :
	ServiceResult()
{}

ShowQuickAnalysisResult::ShowQuickAnalysisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ShowQuickAnalysisResult::~ShowQuickAnalysisResult()
{}

void ShowQuickAnalysisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
		auto allIndexList = dataNode["IndexList"]["IndexList"];
		for (auto value : allIndexList)
			data_.indexList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["DyCode"].isNull())
		dyCode_ = value["DyCode"].asString();
	if(!value["DyMessage"].isNull())
		dyMessage_ = value["DyMessage"].asString();

}

std::string ShowQuickAnalysisResult::getDyCode()const
{
	return dyCode_;
}

std::string ShowQuickAnalysisResult::getMessage()const
{
	return message_;
}

ShowQuickAnalysisResult::Data ShowQuickAnalysisResult::getData()const
{
	return data_;
}

int ShowQuickAnalysisResult::getCode()const
{
	return code_;
}

std::string ShowQuickAnalysisResult::getDyMessage()const
{
	return dyMessage_;
}

bool ShowQuickAnalysisResult::getSuccess()const
{
	return success_;
}

std::string ShowQuickAnalysisResult::getErrCode()const
{
	return errCode_;
}

