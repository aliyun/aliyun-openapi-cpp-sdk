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

#include <alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsCounterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeCloudSiemAssetsCounterResult::DescribeCloudSiemAssetsCounterResult() :
	ServiceResult()
{}

DescribeCloudSiemAssetsCounterResult::DescribeCloudSiemAssetsCounterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudSiemAssetsCounterResult::~DescribeCloudSiemAssetsCounterResult()
{}

void DescribeCloudSiemAssetsCounterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["AssetType"].isNull())
			dataObject.assetType = valueDataDataItem["AssetType"].asString();
		if(!valueDataDataItem["AssetNum"].isNull())
			dataObject.assetNum = std::stoi(valueDataDataItem["AssetNum"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeCloudSiemAssetsCounterResult::getMessage()const
{
	return message_;
}

std::vector<DescribeCloudSiemAssetsCounterResult::DataItem> DescribeCloudSiemAssetsCounterResult::getData()const
{
	return data_;
}

int DescribeCloudSiemAssetsCounterResult::getCode()const
{
	return code_;
}

bool DescribeCloudSiemAssetsCounterResult::getSuccess()const
{
	return success_;
}

