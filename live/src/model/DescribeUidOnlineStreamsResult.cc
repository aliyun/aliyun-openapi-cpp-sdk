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

#include <alibabacloud/live/model/DescribeUidOnlineStreamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeUidOnlineStreamsResult::DescribeUidOnlineStreamsResult() :
	ServiceResult()
{}

DescribeUidOnlineStreamsResult::DescribeUidOnlineStreamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUidOnlineStreamsResult::~DescribeUidOnlineStreamsResult()
{}

void DescribeUidOnlineStreamsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["DomainName"].isNull())
			dataObject.domainName = valueDataDataItem["DomainName"].asString();
		if(!valueDataDataItem["AppName"].isNull())
			dataObject.appName = valueDataDataItem["AppName"].asString();
		if(!valueDataDataItem["StreamName"].isNull())
			dataObject.streamName = valueDataDataItem["StreamName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long DescribeUidOnlineStreamsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<DescribeUidOnlineStreamsResult::DataItem> DescribeUidOnlineStreamsResult::getData()const
{
	return data_;
}

