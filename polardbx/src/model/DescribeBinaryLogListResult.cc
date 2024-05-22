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

#include <alibabacloud/polardbx/model/DescribeBinaryLogListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeBinaryLogListResult::DescribeBinaryLogListResult() :
	ServiceResult()
{}

DescribeBinaryLogListResult::DescribeBinaryLogListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBinaryLogListResult::~DescribeBinaryLogListResult()
{}

void DescribeBinaryLogListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogListNode = value["LogList"]["LogListItem"];
	for (auto valueLogListLogListItem : allLogListNode)
	{
		LogListItem logListObject;
		if(!valueLogListLogListItem["EndTime"].isNull())
			logListObject.endTime = valueLogListLogListItem["EndTime"].asString();
		if(!valueLogListLogListItem["ModifiedTime"].isNull())
			logListObject.modifiedTime = valueLogListLogListItem["ModifiedTime"].asString();
		if(!valueLogListLogListItem["UploadHost"].isNull())
			logListObject.uploadHost = valueLogListLogListItem["UploadHost"].asString();
		if(!valueLogListLogListItem["UploadStatus"].isNull())
			logListObject.uploadStatus = std::stoi(valueLogListLogListItem["UploadStatus"].asString());
		if(!valueLogListLogListItem["DownloadLink"].isNull())
			logListObject.downloadLink = valueLogListLogListItem["DownloadLink"].asString();
		if(!valueLogListLogListItem["BeginTime"].isNull())
			logListObject.beginTime = valueLogListLogListItem["BeginTime"].asString();
		if(!valueLogListLogListItem["LogSize"].isNull())
			logListObject.logSize = std::stol(valueLogListLogListItem["LogSize"].asString());
		if(!valueLogListLogListItem["FileName"].isNull())
			logListObject.fileName = valueLogListLogListItem["FileName"].asString();
		if(!valueLogListLogListItem["CreatedTime"].isNull())
			logListObject.createdTime = valueLogListLogListItem["CreatedTime"].asString();
		if(!valueLogListLogListItem["PurgeStatus"].isNull())
			logListObject.purgeStatus = std::stoi(valueLogListLogListItem["PurgeStatus"].asString());
		if(!valueLogListLogListItem["Id"].isNull())
			logListObject.id = std::stol(valueLogListLogListItem["Id"].asString());
		logList_.push_back(logListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNumber"].isNull())
		totalNumber_ = std::stoi(value["TotalNumber"].asString());

}

std::vector<DescribeBinaryLogListResult::LogListItem> DescribeBinaryLogListResult::getLogList()const
{
	return logList_;
}

int DescribeBinaryLogListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBinaryLogListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeBinaryLogListResult::getTotalNumber()const
{
	return totalNumber_;
}

