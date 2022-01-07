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

#include <alibabacloud/dypnsapi/model/GetCertifyResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

GetCertifyResultResult::GetCertifyResultResult() :
	ServiceResult()
{}

GetCertifyResultResult::GetCertifyResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCertifyResultResult::~GetCertifyResultResult()
{}

void GetCertifyResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["MaterialInfo"].isNull())
			dataObject.materialInfo = valueDataDataItem["MaterialInfo"].asString();
		if(!valueDataDataItem["IdentityInfo"].isNull())
			dataObject.identityInfo = valueDataDataItem["IdentityInfo"].asString();
		if(!valueDataDataItem["VerifyDesc"].isNull())
			dataObject.verifyDesc = valueDataDataItem["VerifyDesc"].asString();
		if(!valueDataDataItem["VerifyResult"].isNull())
			dataObject.verifyResult = valueDataDataItem["VerifyResult"].asString();
		if(!valueDataDataItem["DeviceToken"].isNull())
			dataObject.deviceToken = valueDataDataItem["DeviceToken"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCertifyResultResult::getMessage()const
{
	return message_;
}

std::vector<GetCertifyResultResult::DataItem> GetCertifyResultResult::getData()const
{
	return data_;
}

std::string GetCertifyResultResult::getCode()const
{
	return code_;
}

