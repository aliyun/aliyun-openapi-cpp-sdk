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

#include <alibabacloud/dytnsapi/model/InvalidPhoneNumberFilterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dytnsapi;
using namespace AlibabaCloud::Dytnsapi::Model;

InvalidPhoneNumberFilterResult::InvalidPhoneNumberFilterResult() :
	ServiceResult()
{}

InvalidPhoneNumberFilterResult::InvalidPhoneNumberFilterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

InvalidPhoneNumberFilterResult::~InvalidPhoneNumberFilterResult()
{}

void InvalidPhoneNumberFilterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Code"].isNull())
			dataObject.code = valueDataDataItem["Code"].asString();
		if(!valueDataDataItem["OriginalNumber"].isNull())
			dataObject.originalNumber = valueDataDataItem["OriginalNumber"].asString();
		if(!valueDataDataItem["EncryptedNumber"].isNull())
			dataObject.encryptedNumber = valueDataDataItem["EncryptedNumber"].asString();
		if(!valueDataDataItem["ExpireTime"].isNull())
			dataObject.expireTime = valueDataDataItem["ExpireTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string InvalidPhoneNumberFilterResult::getMessage()const
{
	return message_;
}

std::vector<InvalidPhoneNumberFilterResult::DataItem> InvalidPhoneNumberFilterResult::getData()const
{
	return data_;
}

std::string InvalidPhoneNumberFilterResult::getCode()const
{
	return code_;
}

