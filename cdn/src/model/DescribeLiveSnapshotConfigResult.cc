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

#include <alibabacloud/cdn/model/DescribeLiveSnapshotConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveSnapshotConfigResult::DescribeLiveSnapshotConfigResult() :
	ServiceResult()
{}

DescribeLiveSnapshotConfigResult::DescribeLiveSnapshotConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveSnapshotConfigResult::~DescribeLiveSnapshotConfigResult()
{}

void DescribeLiveSnapshotConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLiveStreamSnapshotConfigList = value["LiveStreamSnapshotConfigList"]["LiveStreamSnapshotConfig"];
	for (auto value : allLiveStreamSnapshotConfigList)
	{
		LiveStreamSnapshotConfig liveStreamSnapshotConfigListObject;
		if(!value["DomainName"].isNull())
			liveStreamSnapshotConfigListObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveStreamSnapshotConfigListObject.appName = value["AppName"].asString();
		if(!value["TimeInterval"].isNull())
			liveStreamSnapshotConfigListObject.timeInterval = std::stoi(value["TimeInterval"].asString());
		if(!value["OssEndpoint"].isNull())
			liveStreamSnapshotConfigListObject.ossEndpoint = value["OssEndpoint"].asString();
		if(!value["OssBucket"].isNull())
			liveStreamSnapshotConfigListObject.ossBucket = value["OssBucket"].asString();
		if(!value["OverwriteOssObject"].isNull())
			liveStreamSnapshotConfigListObject.overwriteOssObject = value["OverwriteOssObject"].asString();
		if(!value["SequenceOssObject"].isNull())
			liveStreamSnapshotConfigListObject.sequenceOssObject = value["SequenceOssObject"].asString();
		if(!value["CreateTime"].isNull())
			liveStreamSnapshotConfigListObject.createTime = value["CreateTime"].asString();
		liveStreamSnapshotConfigList_.push_back(liveStreamSnapshotConfigListObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Order"].isNull())
		order_ = value["Order"].asString();
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

std::string DescribeLiveSnapshotConfigResult::getOrder()const
{
	return order_;
}

int DescribeLiveSnapshotConfigResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveSnapshotConfigResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveSnapshotConfigResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveSnapshotConfigResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeLiveSnapshotConfigResult::LiveStreamSnapshotConfig> DescribeLiveSnapshotConfigResult::getLiveStreamSnapshotConfigList()const
{
	return liveStreamSnapshotConfigList_;
}

