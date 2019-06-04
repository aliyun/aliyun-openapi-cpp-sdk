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

#include <alibabacloud/live/model/DescribeLiveRecordConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

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
	auto allLiveAppRecordList = value["LiveAppRecordList"]["LiveAppRecord"];
	for (auto value : allLiveAppRecordList)
	{
		LiveAppRecord liveAppRecordListObject;
		if(!value["DomainName"].isNull())
			liveAppRecordListObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveAppRecordListObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			liveAppRecordListObject.streamName = value["StreamName"].asString();
		if(!value["OssEndpoint"].isNull())
			liveAppRecordListObject.ossEndpoint = value["OssEndpoint"].asString();
		if(!value["OssBucket"].isNull())
			liveAppRecordListObject.ossBucket = value["OssBucket"].asString();
		if(!value["CreateTime"].isNull())
			liveAppRecordListObject.createTime = value["CreateTime"].asString();
		if(!value["StartTime"].isNull())
			liveAppRecordListObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			liveAppRecordListObject.endTime = value["EndTime"].asString();
		if(!value["OnDemond"].isNull())
			liveAppRecordListObject.onDemond = std::stoi(value["OnDemond"].asString());
		auto allRecordFormatList = value["RecordFormatList"]["RecordFormat"];
		for (auto value : allRecordFormatList)
		{
			LiveAppRecord::RecordFormat recordFormatListObject;
			if(!value["Format"].isNull())
				recordFormatListObject.format = value["Format"].asString();
			if(!value["OssObjectPrefix"].isNull())
				recordFormatListObject.ossObjectPrefix = value["OssObjectPrefix"].asString();
			if(!value["SliceOssObjectPrefix"].isNull())
				recordFormatListObject.sliceOssObjectPrefix = value["SliceOssObjectPrefix"].asString();
			if(!value["CycleDuration"].isNull())
				recordFormatListObject.cycleDuration = std::stoi(value["CycleDuration"].asString());
			liveAppRecordListObject.recordFormatList.push_back(recordFormatListObject);
		}
		liveAppRecordList_.push_back(liveAppRecordListObject);
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

std::string DescribeLiveRecordConfigResult::getOrder()const
{
	return order_;
}

int DescribeLiveRecordConfigResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveRecordConfigResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveRecordConfigResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveRecordConfigResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeLiveRecordConfigResult::LiveAppRecord> DescribeLiveRecordConfigResult::getLiveAppRecordList()const
{
	return liveAppRecordList_;
}

