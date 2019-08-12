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

#include <alibabacloud/live/model/DescribeLiveRecordVodConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveRecordVodConfigsResult::DescribeLiveRecordVodConfigsResult() :
	ServiceResult()
{}

DescribeLiveRecordVodConfigsResult::DescribeLiveRecordVodConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveRecordVodConfigsResult::~DescribeLiveRecordVodConfigsResult()
{}

void DescribeLiveRecordVodConfigsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allLiveRecordVodConfigs = value["LiveRecordVodConfigs"]["LiveRecordVodConfig"];
	for (auto value : allLiveRecordVodConfigs)
	{
		LiveRecordVodConfig liveRecordVodConfigsObject;
		if(!value["CreateTime"].isNull())
			liveRecordVodConfigsObject.createTime = value["CreateTime"].asString();
		if(!value["DomainName"].isNull())
			liveRecordVodConfigsObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveRecordVodConfigsObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			liveRecordVodConfigsObject.streamName = value["StreamName"].asString();
		if(!value["VodTranscodeGroupId"].isNull())
			liveRecordVodConfigsObject.vodTranscodeGroupId = value["VodTranscodeGroupId"].asString();
		if(!value["CycleDuration"].isNull())
			liveRecordVodConfigsObject.cycleDuration = std::stoi(value["CycleDuration"].asString());
		if(!value["AutoCompose"].isNull())
			liveRecordVodConfigsObject.autoCompose = value["AutoCompose"].asString();
		if(!value["ComposeVodTranscodeGroupId"].isNull())
			liveRecordVodConfigsObject.composeVodTranscodeGroupId = value["ComposeVodTranscodeGroupId"].asString();
		liveRecordVodConfigs_.push_back(liveRecordVodConfigsObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::vector<DescribeLiveRecordVodConfigsResult::LiveRecordVodConfig> DescribeLiveRecordVodConfigsResult::getLiveRecordVodConfigs()const
{
	return liveRecordVodConfigs_;
}

int DescribeLiveRecordVodConfigsResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveRecordVodConfigsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeLiveRecordVodConfigsResult::getTotal()const
{
	return total_;
}

