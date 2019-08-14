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

#include <alibabacloud/cdn/model/DescribeLiveStreamSnapshotInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveStreamSnapshotInfoResult::DescribeLiveStreamSnapshotInfoResult() :
	ServiceResult()
{}

DescribeLiveStreamSnapshotInfoResult::DescribeLiveStreamSnapshotInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamSnapshotInfoResult::~DescribeLiveStreamSnapshotInfoResult()
{}

void DescribeLiveStreamSnapshotInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allLiveStreamSnapshotInfoList = value["LiveStreamSnapshotInfoList"]["LiveStreamSnapshotInfo"];
	for (auto value : allLiveStreamSnapshotInfoList)
	{
		LiveStreamSnapshotInfo liveStreamSnapshotInfoListObject;
		if(!value["OssEndpoint"].isNull())
			liveStreamSnapshotInfoListObject.ossEndpoint = value["OssEndpoint"].asString();
		if(!value["OssBucket"].isNull())
			liveStreamSnapshotInfoListObject.ossBucket = value["OssBucket"].asString();
		if(!value["OssObject"].isNull())
			liveStreamSnapshotInfoListObject.ossObject = value["OssObject"].asString();
		if(!value["CreateTime"].isNull())
			liveStreamSnapshotInfoListObject.createTime = value["CreateTime"].asString();
		liveStreamSnapshotInfoList_.push_back(liveStreamSnapshotInfoListObject);
	}
	if(!value["NextStartTime"].isNull())
		nextStartTime_ = value["NextStartTime"].asString();

}

std::vector<DescribeLiveStreamSnapshotInfoResult::LiveStreamSnapshotInfo> DescribeLiveStreamSnapshotInfoResult::getLiveStreamSnapshotInfoList()const
{
	return liveStreamSnapshotInfoList_;
}

std::string DescribeLiveStreamSnapshotInfoResult::getNextStartTime()const
{
	return nextStartTime_;
}

