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

#include <alibabacloud/cloudapi/model/DescribeApiTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiTrafficDataResult::DescribeApiTrafficDataResult() :
	ServiceResult()
{}

DescribeApiTrafficDataResult::DescribeApiTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiTrafficDataResult::~DescribeApiTrafficDataResult()
{}

void DescribeApiTrafficDataResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allCallUploads = value["CallUploads"]["MonitorItem"];
	for (auto value : allCallUploads)
	{
		MonitorItem callUploadsObject;
		if(!value["ItemTime"].isNull())
			callUploadsObject.itemTime = value["ItemTime"].asString();
		if(!value["ItemValue"].isNull())
			callUploadsObject.itemValue = value["ItemValue"].asString();
		callUploads_.push_back(callUploadsObject);
	}
	auto allCallDownloads = value["CallDownloads"]["MonitorItem"];
	for (auto value : allCallDownloads)
	{
		MonitorItem callDownloadsObject;
		if(!value["ItemTime"].isNull())
			callDownloadsObject.itemTime = value["ItemTime"].asString();
		if(!value["ItemValue"].isNull())
			callDownloadsObject.itemValue = value["ItemValue"].asString();
		callDownloads_.push_back(callDownloadsObject);
	}

}

std::vector<DescribeApiTrafficDataResult::MonitorItem> DescribeApiTrafficDataResult::getCallUploads()const
{
	return callUploads_;
}

std::vector<DescribeApiTrafficDataResult::MonitorItem> DescribeApiTrafficDataResult::getCallDownloads()const
{
	return callDownloads_;
}

