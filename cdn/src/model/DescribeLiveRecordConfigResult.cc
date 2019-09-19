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

#include <alibabacloud/cdn/model/DescribeLiveRecordConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveRecordConfigResult::DescribeLiveRecordConfigResult() :
	ServiceResult()
{}

DescribeLiveRecordConfigResult::DescribeLiveRecordConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveRecordConfigResult::~DescribeLiveRecordConfigResult()
{}

void DescribeLiveRecordConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveAppRecordListNode = value["LiveAppRecordList"]["LiveAppRecord"];
	for (auto valueLiveAppRecordListLiveAppRecord : allLiveAppRecordListNode)
	{
		LiveAppRecord liveAppRecordListObject;
		if(!valueLiveAppRecordListLiveAppRecord["DomainName"].isNull())
			liveAppRecordListObject.domainName = valueLiveAppRecordListLiveAppRecord["DomainName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["AppName"].isNull())
			liveAppRecordListObject.appName = valueLiveAppRecordListLiveAppRecord["AppName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["OssEndpoint"].isNull())
			liveAppRecordListObject.ossEndpoint = valueLiveAppRecordListLiveAppRecord["OssEndpoint"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["OssBucket"].isNull())
			liveAppRecordListObject.ossBucket = valueLiveAppRecordListLiveAppRecord["OssBucket"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["OssObjectPrefix"].isNull())
			liveAppRecordListObject.ossObjectPrefix = valueLiveAppRecordListLiveAppRecord["OssObjectPrefix"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["CreateTime"].isNull())
			liveAppRecordListObject.createTime = valueLiveAppRecordListLiveAppRecord["CreateTime"].asString();
		liveAppRecordList_.push_back(liveAppRecordListObject);
	}

}

std::vector<DescribeLiveRecordConfigResult::LiveAppRecord> DescribeLiveRecordConfigResult::getLiveAppRecordList()const
{
	return liveAppRecordList_;
}

