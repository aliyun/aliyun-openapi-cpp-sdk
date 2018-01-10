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
		LiveStreamSnapshotConfig liveStreamSnapshotConfigObject;
		liveStreamSnapshotConfigObject.domainName = value["DomainName"].asString();
		liveStreamSnapshotConfigObject.appName = value["AppName"].asString();
		liveStreamSnapshotConfigObject.timeInterval = std::stoi(value["TimeInterval"].asString());
		liveStreamSnapshotConfigObject.ossEndpoint = value["OssEndpoint"].asString();
		liveStreamSnapshotConfigObject.ossBucket = value["OssBucket"].asString();
		liveStreamSnapshotConfigObject.overwriteOssObject = value["OverwriteOssObject"].asString();
		liveStreamSnapshotConfigObject.sequenceOssObject = value["SequenceOssObject"].asString();
		liveStreamSnapshotConfigObject.createTime = value["CreateTime"].asString();
		liveStreamSnapshotConfigList_.push_back(liveStreamSnapshotConfigObject);
	}
	pageNum_ = std::stoi(value["PageNum"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	order_ = value["Order"].asString();
	totalNum_ = std::stoi(value["TotalNum"].asString());
	totalPage_ = std::stoi(value["TotalPage"].asString());

}

std::string DescribeLiveSnapshotConfigResult::getOrder()const
{
	return order_;
}

void DescribeLiveSnapshotConfigResult::setOrder(const std::string& order)
{
	order_ = order;
}

int DescribeLiveSnapshotConfigResult::getTotalNum()const
{
	return totalNum_;
}

void DescribeLiveSnapshotConfigResult::setTotalNum(int totalNum)
{
	totalNum_ = totalNum;
}

int DescribeLiveSnapshotConfigResult::getPageNum()const
{
	return pageNum_;
}

void DescribeLiveSnapshotConfigResult::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
}

int DescribeLiveSnapshotConfigResult::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveSnapshotConfigResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeLiveSnapshotConfigResult::getTotalPage()const
{
	return totalPage_;
}

void DescribeLiveSnapshotConfigResult::setTotalPage(int totalPage)
{
	totalPage_ = totalPage;
}

