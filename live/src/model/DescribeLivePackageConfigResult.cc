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

#include <alibabacloud/live/model/DescribeLivePackageConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLivePackageConfigResult::DescribeLivePackageConfigResult() :
	ServiceResult()
{}

DescribeLivePackageConfigResult::DescribeLivePackageConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLivePackageConfigResult::~DescribeLivePackageConfigResult()
{}

void DescribeLivePackageConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLivePackageConfigListNode = value["LivePackageConfigList"]["LivePackageConfig"];
	for (auto valueLivePackageConfigListLivePackageConfig : allLivePackageConfigListNode)
	{
		LivePackageConfig livePackageConfigListObject;
		if(!valueLivePackageConfigListLivePackageConfig["AppName"].isNull())
			livePackageConfigListObject.appName = valueLivePackageConfigListLivePackageConfig["AppName"].asString();
		if(!valueLivePackageConfigListLivePackageConfig["DomainName"].isNull())
			livePackageConfigListObject.domainName = valueLivePackageConfigListLivePackageConfig["DomainName"].asString();
		if(!valueLivePackageConfigListLivePackageConfig["IgnoreTranscode"].isNull())
			livePackageConfigListObject.ignoreTranscode = valueLivePackageConfigListLivePackageConfig["IgnoreTranscode"].asString() == "true";
		if(!valueLivePackageConfigListLivePackageConfig["PartDuration"].isNull())
			livePackageConfigListObject.partDuration = std::stoi(valueLivePackageConfigListLivePackageConfig["PartDuration"].asString());
		if(!valueLivePackageConfigListLivePackageConfig["Protocol"].isNull())
			livePackageConfigListObject.protocol = valueLivePackageConfigListLivePackageConfig["Protocol"].asString();
		if(!valueLivePackageConfigListLivePackageConfig["SegmentDuration"].isNull())
			livePackageConfigListObject.segmentDuration = std::stoi(valueLivePackageConfigListLivePackageConfig["SegmentDuration"].asString());
		if(!valueLivePackageConfigListLivePackageConfig["SegmentNum"].isNull())
			livePackageConfigListObject.segmentNum = std::stoi(valueLivePackageConfigListLivePackageConfig["SegmentNum"].asString());
		if(!valueLivePackageConfigListLivePackageConfig["StreamName"].isNull())
			livePackageConfigListObject.streamName = valueLivePackageConfigListLivePackageConfig["StreamName"].asString();
		livePackageConfigList_.push_back(livePackageConfigListObject);
	}
	if(!value["Order"].isNull())
		order_ = value["Order"].asString();
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

std::string DescribeLivePackageConfigResult::getOrder()const
{
	return order_;
}

int DescribeLivePackageConfigResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLivePackageConfigResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLivePackageConfigResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLivePackageConfigResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeLivePackageConfigResult::LivePackageConfig> DescribeLivePackageConfigResult::getLivePackageConfigList()const
{
	return livePackageConfigList_;
}

