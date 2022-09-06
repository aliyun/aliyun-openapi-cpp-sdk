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

#include <alibabacloud/iot/model/PageQuerySharedSpeechOpenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

PageQuerySharedSpeechOpenResult::PageQuerySharedSpeechOpenResult() :
	ServiceResult()
{}

PageQuerySharedSpeechOpenResult::PageQuerySharedSpeechOpenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageQuerySharedSpeechOpenResult::~PageQuerySharedSpeechOpenResult()
{}

void PageQuerySharedSpeechOpenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageId"].isNull())
		data_.pageId = std::stoi(dataNode["PageId"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allResultDataNode = dataNode["ResultData"]["Data"];
	for (auto dataNodeResultDataData : allResultDataNode)
	{
		Data::Data1 data1Object;
		if(!dataNodeResultDataData["Code"].isNull())
			data1Object.code = dataNodeResultDataData["Code"].asString();
		if(!dataNodeResultDataData["BizCode"].isNull())
			data1Object.bizCode = dataNodeResultDataData["BizCode"].asString();
		if(!dataNodeResultDataData["Text"].isNull())
			data1Object.text = dataNodeResultDataData["Text"].asString();
		if(!dataNodeResultDataData["Voice"].isNull())
			data1Object.voice = dataNodeResultDataData["Voice"].asString();
		if(!dataNodeResultDataData["SpeechRate"].isNull())
			data1Object.speechRate = std::stoi(dataNodeResultDataData["SpeechRate"].asString());
		if(!dataNodeResultDataData["Volume"].isNull())
			data1Object.volume = std::stoi(dataNodeResultDataData["Volume"].asString());
		if(!dataNodeResultDataData["AudioFormat"].isNull())
			data1Object.audioFormat = dataNodeResultDataData["AudioFormat"].asString();
		if(!dataNodeResultDataData["Status"].isNull())
			data1Object.status = std::stoi(dataNodeResultDataData["Status"].asString());
		data_.resultData.push_back(data1Object);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

PageQuerySharedSpeechOpenResult::Data PageQuerySharedSpeechOpenResult::getData()const
{
	return data_;
}

std::string PageQuerySharedSpeechOpenResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string PageQuerySharedSpeechOpenResult::getCode()const
{
	return code_;
}

bool PageQuerySharedSpeechOpenResult::getSuccess()const
{
	return success_;
}

