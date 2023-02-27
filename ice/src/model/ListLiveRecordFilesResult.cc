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

#include <alibabacloud/ice/model/ListLiveRecordFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveRecordFilesResult::ListLiveRecordFilesResult() :
	ServiceResult()
{}

ListLiveRecordFilesResult::ListLiveRecordFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveRecordFilesResult::~ListLiveRecordFilesResult()
{}

void ListLiveRecordFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFilesNode = value["Files"]["RecordFileInfo"];
	for (auto valueFilesRecordFileInfo : allFilesNode)
	{
		RecordFileInfo filesObject;
		if(!valueFilesRecordFileInfo["RecordUrl"].isNull())
			filesObject.recordUrl = valueFilesRecordFileInfo["RecordUrl"].asString();
		if(!valueFilesRecordFileInfo["StartTime"].isNull())
			filesObject.startTime = valueFilesRecordFileInfo["StartTime"].asString();
		if(!valueFilesRecordFileInfo["EndTime"].isNull())
			filesObject.endTime = valueFilesRecordFileInfo["EndTime"].asString();
		if(!valueFilesRecordFileInfo["Duration"].isNull())
			filesObject.duration = std::stof(valueFilesRecordFileInfo["Duration"].asString());
		if(!valueFilesRecordFileInfo["Width"].isNull())
			filesObject.width = std::stoi(valueFilesRecordFileInfo["Width"].asString());
		if(!valueFilesRecordFileInfo["Height"].isNull())
			filesObject.height = std::stoi(valueFilesRecordFileInfo["Height"].asString());
		if(!valueFilesRecordFileInfo["CreateTime"].isNull())
			filesObject.createTime = valueFilesRecordFileInfo["CreateTime"].asString();
		if(!valueFilesRecordFileInfo["RecordOutput"].isNull())
			filesObject.recordOutput = valueFilesRecordFileInfo["RecordOutput"].asString();
		if(!valueFilesRecordFileInfo["RecordId"].isNull())
			filesObject.recordId = valueFilesRecordFileInfo["RecordId"].asString();
		if(!valueFilesRecordFileInfo["StreamUrl"].isNull())
			filesObject.streamUrl = valueFilesRecordFileInfo["StreamUrl"].asString();
		if(!valueFilesRecordFileInfo["JobName"].isNull())
			filesObject.jobName = valueFilesRecordFileInfo["JobName"].asString();
		if(!valueFilesRecordFileInfo["Format"].isNull())
			filesObject.format = valueFilesRecordFileInfo["Format"].asString();
		if(!valueFilesRecordFileInfo["JobId"].isNull())
			filesObject.jobId = valueFilesRecordFileInfo["JobId"].asString();
		files_.push_back(filesObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["SortBy"].isNull())
		sortBy_ = value["SortBy"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListLiveRecordFilesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListLiveRecordFilesResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLiveRecordFilesResult::getSortBy()const
{
	return sortBy_;
}

long ListLiveRecordFilesResult::getPageNo()const
{
	return pageNo_;
}

std::vector<ListLiveRecordFilesResult::RecordFileInfo> ListLiveRecordFilesResult::getFiles()const
{
	return files_;
}

