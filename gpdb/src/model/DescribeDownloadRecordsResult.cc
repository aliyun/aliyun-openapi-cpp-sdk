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

#include <alibabacloud/gpdb/model/DescribeDownloadRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDownloadRecordsResult::DescribeDownloadRecordsResult() :
	ServiceResult()
{}

DescribeDownloadRecordsResult::DescribeDownloadRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDownloadRecordsResult::~DescribeDownloadRecordsResult()
{}

void DescribeDownloadRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["Item"];
	for (auto valueRecordsItem : allRecordsNode)
	{
		Item recordsObject;
		if(!valueRecordsItem["DownloadId"].isNull())
			recordsObject.downloadId = std::stol(valueRecordsItem["DownloadId"].asString());
		if(!valueRecordsItem["ExceptionMsg"].isNull())
			recordsObject.exceptionMsg = valueRecordsItem["ExceptionMsg"].asString();
		if(!valueRecordsItem["FileName"].isNull())
			recordsObject.fileName = valueRecordsItem["FileName"].asString();
		if(!valueRecordsItem["Status"].isNull())
			recordsObject.status = valueRecordsItem["Status"].asString();
		if(!valueRecordsItem["DownloadUrl"].isNull())
			recordsObject.downloadUrl = valueRecordsItem["DownloadUrl"].asString();
		records_.push_back(recordsObject);
	}

}

std::vector<DescribeDownloadRecordsResult::Item> DescribeDownloadRecordsResult::getRecords()const
{
	return records_;
}

