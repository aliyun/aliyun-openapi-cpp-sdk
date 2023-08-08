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
	auto allLiveAppRecordListNode = value["LiveAppRecordList"]["LiveAppRecord"];
	for (auto valueLiveAppRecordListLiveAppRecord : allLiveAppRecordListNode)
	{
		LiveAppRecord liveAppRecordListObject;
		if(!valueLiveAppRecordListLiveAppRecord["EndTime"].isNull())
			liveAppRecordListObject.endTime = valueLiveAppRecordListLiveAppRecord["EndTime"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["StartTime"].isNull())
			liveAppRecordListObject.startTime = valueLiveAppRecordListLiveAppRecord["StartTime"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["AppName"].isNull())
			liveAppRecordListObject.appName = valueLiveAppRecordListLiveAppRecord["AppName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["StreamName"].isNull())
			liveAppRecordListObject.streamName = valueLiveAppRecordListLiveAppRecord["StreamName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["DelayTime"].isNull())
			liveAppRecordListObject.delayTime = std::stoi(valueLiveAppRecordListLiveAppRecord["DelayTime"].asString());
		if(!valueLiveAppRecordListLiveAppRecord["CreateTime"].isNull())
			liveAppRecordListObject.createTime = valueLiveAppRecordListLiveAppRecord["CreateTime"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["OnDemond"].isNull())
			liveAppRecordListObject.onDemond = std::stoi(valueLiveAppRecordListLiveAppRecord["OnDemond"].asString());
		if(!valueLiveAppRecordListLiveAppRecord["OssBucket"].isNull())
			liveAppRecordListObject.ossBucket = valueLiveAppRecordListLiveAppRecord["OssBucket"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["DomainName"].isNull())
			liveAppRecordListObject.domainName = valueLiveAppRecordListLiveAppRecord["DomainName"].asString();
		if(!valueLiveAppRecordListLiveAppRecord["OssEndpoint"].isNull())
			liveAppRecordListObject.ossEndpoint = valueLiveAppRecordListLiveAppRecord["OssEndpoint"].asString();
		auto allRecordFormatListNode = valueLiveAppRecordListLiveAppRecord["RecordFormatList"]["RecordFormat"];
		for (auto valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat : allRecordFormatListNode)
		{
			LiveAppRecord::RecordFormat recordFormatListObject;
			if(!valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["SliceDuration"].isNull())
				recordFormatListObject.sliceDuration = std::stoi(valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["SliceDuration"].asString());
			if(!valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["CycleDuration"].isNull())
				recordFormatListObject.cycleDuration = std::stoi(valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["CycleDuration"].asString());
			if(!valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["SliceOssObjectPrefix"].isNull())
				recordFormatListObject.sliceOssObjectPrefix = valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["SliceOssObjectPrefix"].asString();
			if(!valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["OssObjectPrefix"].isNull())
				recordFormatListObject.ossObjectPrefix = valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["OssObjectPrefix"].asString();
			if(!valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["Format"].isNull())
				recordFormatListObject.format = valueLiveAppRecordListLiveAppRecordRecordFormatListRecordFormat["Format"].asString();
			liveAppRecordListObject.recordFormatList.push_back(recordFormatListObject);
		}
		auto allTranscodeRecordFormatListNode = valueLiveAppRecordListLiveAppRecord["TranscodeRecordFormatList"]["RecordFormat"];
		for (auto valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat : allTranscodeRecordFormatListNode)
		{
			LiveAppRecord::RecordFormat transcodeRecordFormatListObject;
			if(!valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["SliceDuration"].isNull())
				transcodeRecordFormatListObject.sliceDuration = std::stoi(valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["SliceDuration"].asString());
			if(!valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["CycleDuration"].isNull())
				transcodeRecordFormatListObject.cycleDuration = std::stoi(valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["CycleDuration"].asString());
			if(!valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["SliceOssObjectPrefix"].isNull())
				transcodeRecordFormatListObject.sliceOssObjectPrefix = valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["SliceOssObjectPrefix"].asString();
			if(!valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["OssObjectPrefix"].isNull())
				transcodeRecordFormatListObject.ossObjectPrefix = valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["OssObjectPrefix"].asString();
			if(!valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["Format"].isNull())
				transcodeRecordFormatListObject.format = valueLiveAppRecordListLiveAppRecordTranscodeRecordFormatListRecordFormat["Format"].asString();
			liveAppRecordListObject.transcodeRecordFormatList.push_back(transcodeRecordFormatListObject);
		}
		auto allTranscodeTemplates = value["TranscodeTemplates"]["Templates"];
		for (auto value : allTranscodeTemplates)
			liveAppRecordListObject.transcodeTemplates.push_back(value.asString());
		liveAppRecordList_.push_back(liveAppRecordListObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["Order"].isNull())
		order_ = value["Order"].asString();
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

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

int DescribeLiveRecordConfigResult::getTotalPage()const
{
	return totalPage_;
}

int DescribeLiveRecordConfigResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeLiveRecordConfigResult::LiveAppRecord> DescribeLiveRecordConfigResult::getLiveAppRecordList()const
{
	return liveAppRecordList_;
}

