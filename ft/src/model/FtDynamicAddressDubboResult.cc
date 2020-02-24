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

#include <alibabacloud/ft/model/FtDynamicAddressDubboResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

FtDynamicAddressDubboResult::FtDynamicAddressDubboResult() :
	ServiceResult()
{}

FtDynamicAddressDubboResult::FtDynamicAddressDubboResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FtDynamicAddressDubboResult::~FtDynamicAddressDubboResult()
{}

void FtDynamicAddressDubboResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["StringValue"].isNull())
		stringValue_ = value["StringValue"].asString();
	if(!value["IntValue"].isNull())
		intValue_ = std::stoi(value["IntValue"].asString());

}

std::string FtDynamicAddressDubboResult::getStringValue()const
{
	return stringValue_;
}

int FtDynamicAddressDubboResult::getIntValue()const
{
	return intValue_;
}

