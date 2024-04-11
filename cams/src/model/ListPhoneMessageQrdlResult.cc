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

#include <alibabacloud/cams/model/ListPhoneMessageQrdlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

ListPhoneMessageQrdlResult::ListPhoneMessageQrdlResult() :
	ServiceResult()
{}

ListPhoneMessageQrdlResult::ListPhoneMessageQrdlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPhoneMessageQrdlResult::~ListPhoneMessageQrdlResult()
{}

void ListPhoneMessageQrdlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["列表"];
	for (auto valueData列表 : allDataNode)
	{
		列表 dataObject;
		if(!valueData列表["PhoneNumber"].isNull())
			dataObject.phoneNumber = valueData列表["PhoneNumber"].asString();
		if(!valueData列表["QrdlCode"].isNull())
			dataObject.qrdlCode = valueData列表["QrdlCode"].asString();
		if(!valueData列表["GenerateQrImage"].isNull())
			dataObject.generateQrImage = valueData列表["GenerateQrImage"].asString();
		if(!valueData列表["PrefilledMessage"].isNull())
			dataObject.prefilledMessage = valueData列表["PrefilledMessage"].asString();
		if(!valueData列表["DeepLinkUrl"].isNull())
			dataObject.deepLinkUrl = valueData列表["DeepLinkUrl"].asString();
		if(!valueData列表["QrImageUrl"].isNull())
			dataObject.qrImageUrl = valueData列表["QrImageUrl"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPhoneMessageQrdlResult::getMessage()const
{
	return message_;
}

std::vector<ListPhoneMessageQrdlResult::列表> ListPhoneMessageQrdlResult::getData()const
{
	return data_;
}

std::string ListPhoneMessageQrdlResult::getCode()const
{
	return code_;
}

