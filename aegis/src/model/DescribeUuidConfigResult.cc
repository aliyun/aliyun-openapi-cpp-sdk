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

#include <alibabacloud/aegis/model/DescribeUuidConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeUuidConfigResult::DescribeUuidConfigResult() :
	ServiceResult()
{}

DescribeUuidConfigResult::DescribeUuidConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUuidConfigResult::~DescribeUuidConfigResult()
{}

void DescribeUuidConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Flag"].isNull())
		data_.flag = dataNode["Flag"].asString();

}

DescribeUuidConfigResult::Data DescribeUuidConfigResult::getData()const
{
	return data_;
}

