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

#include <alibabacloud/cloudapi/model/DescribeApiQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiQpsDataResult::DescribeApiQpsDataResult() :
	ServiceResult()
{}

DescribeApiQpsDataResult::DescribeApiQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiQpsDataResult::~DescribeApiQpsDataResult()
{}

void DescribeApiQpsDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allCallSuccesses = value["CallSuccesses"]["MonitorItem"];
	for (auto value : allCallSuccesses)
	{
		MonitorItem callSuccessesObject;
		if(!value["ItemTime"].isNull())
			callSuccessesObject.itemTime = value["ItemTime"].asString();
		if(!value["ItemValue"].isNull())
			callSuccessesObject.itemValue = value["ItemValue"].asString();
		callSuccesses_.push_back(callSuccessesObject);
	}
	auto allCallFails = value["CallFails"]["MonitorItem"];
	for (auto value : allCallFails)
	{
		MonitorItem callFailsObject;
		if(!value["ItemTime"].isNull())
			callFailsObject.itemTime = value["ItemTime"].asString();
		if(!value["ItemValue"].isNull())
			callFailsObject.itemValue = value["ItemValue"].asString();
		callFails_.push_back(callFailsObject);
	}

}

std::vector<DescribeApiQpsDataResult::MonitorItem> DescribeApiQpsDataResult::getCallFails()const
{
	return callFails_;
}

std::vector<DescribeApiQpsDataResult::MonitorItem> DescribeApiQpsDataResult::getCallSuccesses()const
{
	return callSuccesses_;
}

