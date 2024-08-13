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

#include <alibabacloud/vod/model/DescribeVodTieringStorageRetrievalDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodTieringStorageRetrievalDataResult::DescribeVodTieringStorageRetrievalDataResult() :
	ServiceResult()
{}

DescribeVodTieringStorageRetrievalDataResult::DescribeVodTieringStorageRetrievalDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodTieringStorageRetrievalDataResult::~DescribeVodTieringStorageRetrievalDataResult()
{}

void DescribeVodTieringStorageRetrievalDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRetrievalDataNode = value["RetrievalData"]["RetrievalDataItem"];
	for (auto valueRetrievalDataRetrievalDataItem : allRetrievalDataNode)
	{
		RetrievalDataItem retrievalDataObject;
		if(!valueRetrievalDataRetrievalDataItem["TimeStamp"].isNull())
			retrievalDataObject.timeStamp = valueRetrievalDataRetrievalDataItem["TimeStamp"].asString();
		if(!valueRetrievalDataRetrievalDataItem["Region"].isNull())
			retrievalDataObject.region = valueRetrievalDataRetrievalDataItem["Region"].asString();
		if(!valueRetrievalDataRetrievalDataItem["StorageClass"].isNull())
			retrievalDataObject.storageClass = valueRetrievalDataRetrievalDataItem["StorageClass"].asString();
		if(!valueRetrievalDataRetrievalDataItem["RetrievalData"].isNull())
			retrievalDataObject.retrievalData = std::stol(valueRetrievalDataRetrievalDataItem["RetrievalData"].asString());
		if(!valueRetrievalDataRetrievalDataItem["CAStdRetrievalData"].isNull())
			retrievalDataObject.cAStdRetrievalData = std::stol(valueRetrievalDataRetrievalDataItem["CAStdRetrievalData"].asString());
		if(!valueRetrievalDataRetrievalDataItem["CABulkRetrievalData"].isNull())
			retrievalDataObject.cABulkRetrievalData = std::stol(valueRetrievalDataRetrievalDataItem["CABulkRetrievalData"].asString());
		if(!valueRetrievalDataRetrievalDataItem["CAHighPriorRetrievalData"].isNull())
			retrievalDataObject.cAHighPriorRetrievalData = std::stol(valueRetrievalDataRetrievalDataItem["CAHighPriorRetrievalData"].asString());
		retrievalData_.push_back(retrievalDataObject);
	}

}

std::vector<DescribeVodTieringStorageRetrievalDataResult::RetrievalDataItem> DescribeVodTieringStorageRetrievalDataResult::getRetrievalData()const
{
	return retrievalData_;
}

