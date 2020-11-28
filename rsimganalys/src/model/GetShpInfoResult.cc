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

#include <alibabacloud/rsimganalys/model/GetShpInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

GetShpInfoResult::GetShpInfoResult() :
	ServiceResult()
{}

GetShpInfoResult::GetShpInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetShpInfoResult::~GetShpInfoResult()
{}

void GetShpInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Area"].isNull())
		data_.area = dataNode["Area"].asString();
	if(!dataNode["Category"].isNull())
		data_.category = dataNode["Category"].asString();
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

GetShpInfoResult::Data GetShpInfoResult::getData()const
{
	return data_;
}

std::string GetShpInfoResult::getResultMessage()const
{
	return resultMessage_;
}

int GetShpInfoResult::getResultCode()const
{
	return resultCode_;
}

