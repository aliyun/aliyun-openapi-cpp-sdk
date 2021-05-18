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

#include <alibabacloud/iot/model/GetSpeechVoiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GetSpeechVoiceResult::GetSpeechVoiceResult() :
	ServiceResult()
{}

GetSpeechVoiceResult::GetSpeechVoiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSpeechVoiceResult::~GetSpeechVoiceResult()
{}

void GetSpeechVoiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Items"];
	for (auto valueDataItems : allDataNode)
	{
		Items dataObject;
		if(!valueDataItems["Value"].isNull())
			dataObject.value = valueDataItems["Value"].asString();
		if(!valueDataItems["Label"].isNull())
			dataObject.label = valueDataItems["Label"].asString();
		auto allVoiceListNode = valueDataItems["VoiceList"]["Items"];
		for (auto valueDataItemsVoiceListItems : allVoiceListNode)
		{
			Items::Items1 voiceListObject;
			if(!valueDataItemsVoiceListItems["Value"].isNull())
				voiceListObject.value = valueDataItemsVoiceListItems["Value"].asString();
			if(!valueDataItemsVoiceListItems["Label"].isNull())
				voiceListObject.label = valueDataItemsVoiceListItems["Label"].asString();
			dataObject.voiceList.push_back(voiceListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<GetSpeechVoiceResult::Items> GetSpeechVoiceResult::getData()const
{
	return data_;
}

std::string GetSpeechVoiceResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetSpeechVoiceResult::getCode()const
{
	return code_;
}

bool GetSpeechVoiceResult::getSuccess()const
{
	return success_;
}

