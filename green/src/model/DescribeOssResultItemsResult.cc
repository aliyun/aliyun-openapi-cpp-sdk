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

#include <alibabacloud/green/model/DescribeOssResultItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeOssResultItemsResult::DescribeOssResultItemsResult() :
	ServiceResult()
{}

DescribeOssResultItemsResult::DescribeOssResultItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssResultItemsResult::~DescribeOssResultItemsResult()
{}

void DescribeOssResultItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScanResultListNode = value["ScanResultList"]["ScanResult"];
	for (auto valueScanResultListScanResult : allScanResultListNode)
	{
		ScanResult scanResultListObject;
		if(!valueScanResultListScanResult["TaskId"].isNull())
			scanResultListObject.taskId = valueScanResultListScanResult["TaskId"].asString();
		if(!valueScanResultListScanResult["DataId"].isNull())
			scanResultListObject.dataId = valueScanResultListScanResult["DataId"].asString();
		if(!valueScanResultListScanResult["NewUrl"].isNull())
			scanResultListObject.newUrl = valueScanResultListScanResult["NewUrl"].asString();
		if(!valueScanResultListScanResult["Thumbnail"].isNull())
			scanResultListObject.thumbnail = valueScanResultListScanResult["Thumbnail"].asString();
		if(!valueScanResultListScanResult["RequestTime"].isNull())
			scanResultListObject.requestTime = valueScanResultListScanResult["RequestTime"].asString();
		if(!valueScanResultListScanResult["ScanFinishedTime"].isNull())
			scanResultListObject.scanFinishedTime = valueScanResultListScanResult["ScanFinishedTime"].asString();
		if(!valueScanResultListScanResult["CreateTime"].isNull())
			scanResultListObject.createTime = valueScanResultListScanResult["CreateTime"].asString();
		if(!valueScanResultListScanResult["Suggestion"].isNull())
			scanResultListObject.suggestion = valueScanResultListScanResult["Suggestion"].asString();
		if(!valueScanResultListScanResult["Id"].isNull())
			scanResultListObject.id = std::stol(valueScanResultListScanResult["Id"].asString());
		if(!valueScanResultListScanResult["Bucket"].isNull())
			scanResultListObject.bucket = valueScanResultListScanResult["Bucket"].asString();
		if(!valueScanResultListScanResult["Object"].isNull())
			scanResultListObject.object = valueScanResultListScanResult["Object"].asString();
		if(!valueScanResultListScanResult["Score"].isNull())
			scanResultListObject.score = valueScanResultListScanResult["Score"].asString();
		if(!valueScanResultListScanResult["HandleStatus"].isNull())
			scanResultListObject.handleStatus = std::stoi(valueScanResultListScanResult["HandleStatus"].asString());
		if(!valueScanResultListScanResult["ResourceStatus"].isNull())
			scanResultListObject.resourceStatus = std::stoi(valueScanResultListScanResult["ResourceStatus"].asString());
		if(!valueScanResultListScanResult["Content"].isNull())
			scanResultListObject.content = valueScanResultListScanResult["Content"].asString();
		auto allFrameResultsNode = valueScanResultListScanResult["FrameResults"]["FrameResult"];
		for (auto valueScanResultListScanResultFrameResultsFrameResult : allFrameResultsNode)
		{
			ScanResult::FrameResult frameResultsObject;
			if(!valueScanResultListScanResultFrameResultsFrameResult["Thumbnail"].isNull())
				frameResultsObject.thumbnail = valueScanResultListScanResultFrameResultsFrameResult["Thumbnail"].asString();
			if(!valueScanResultListScanResultFrameResultsFrameResult["Offset"].isNull())
				frameResultsObject.offset = std::stoi(valueScanResultListScanResultFrameResultsFrameResult["Offset"].asString());
			if(!valueScanResultListScanResultFrameResultsFrameResult["Url"].isNull())
				frameResultsObject.url = valueScanResultListScanResultFrameResultsFrameResult["Url"].asString();
			scanResultListObject.frameResults.push_back(frameResultsObject);
		}
		auto allVoiceSegmentAntispamResultsNode = valueScanResultListScanResult["VoiceSegmentAntispamResults"]["VoiceSegmentAntispamResult"];
		for (auto valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult : allVoiceSegmentAntispamResultsNode)
		{
			ScanResult::VoiceSegmentAntispamResult voiceSegmentAntispamResultsObject;
			if(!valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["Text"].isNull())
				voiceSegmentAntispamResultsObject.text = valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["Text"].asString();
			if(!valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["EndTime"].isNull())
				voiceSegmentAntispamResultsObject.endTime = std::stoi(valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["EndTime"].asString());
			if(!valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["StartTime"].isNull())
				voiceSegmentAntispamResultsObject.startTime = std::stoi(valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["StartTime"].asString());
			if(!valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["Label"].isNull())
				voiceSegmentAntispamResultsObject.label = valueScanResultListScanResultVoiceSegmentAntispamResultsVoiceSegmentAntispamResult["Label"].asString();
			scanResultListObject.voiceSegmentAntispamResults.push_back(voiceSegmentAntispamResultsObject);
		}
		scanResultList_.push_back(scanResultListObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["QueryId"].isNull())
		queryId_ = value["QueryId"].asString();

}

int DescribeOssResultItemsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeOssResultItemsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOssResultItemsResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeOssResultItemsResult::getQueryId()const
{
	return queryId_;
}

std::vector<DescribeOssResultItemsResult::ScanResult> DescribeOssResultItemsResult::getScanResultList()const
{
	return scanResultList_;
}

