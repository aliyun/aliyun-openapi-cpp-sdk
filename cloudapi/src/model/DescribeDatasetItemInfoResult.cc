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

#include <alibabacloud/cloudapi/model/DescribeDatasetItemInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeDatasetItemInfoResult::DescribeDatasetItemInfoResult() :
	ServiceResult()
{}

DescribeDatasetItemInfoResult::DescribeDatasetItemInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatasetItemInfoResult::~DescribeDatasetItemInfoResult()
{}

void DescribeDatasetItemInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto datasetItemInfoNode = value["DatasetItemInfo"];
	if(!datasetItemInfoNode["DatasetId"].isNull())
		datasetItemInfo_.datasetId = datasetItemInfoNode["DatasetId"].asString();
	if(!datasetItemInfoNode["DatasetItemId"].isNull())
		datasetItemInfo_.datasetItemId = datasetItemInfoNode["DatasetItemId"].asString();
	if(!datasetItemInfoNode["Value"].isNull())
		datasetItemInfo_.value = datasetItemInfoNode["Value"].asString();
	if(!datasetItemInfoNode["ExpiredTime"].isNull())
		datasetItemInfo_.expiredTime = datasetItemInfoNode["ExpiredTime"].asString();
	if(!datasetItemInfoNode["ModifiedTime"].isNull())
		datasetItemInfo_.modifiedTime = datasetItemInfoNode["ModifiedTime"].asString();
	if(!datasetItemInfoNode["CreatedTime"].isNull())
		datasetItemInfo_.createdTime = datasetItemInfoNode["CreatedTime"].asString();
	if(!datasetItemInfoNode["Description"].isNull())
		datasetItemInfo_.description = datasetItemInfoNode["Description"].asString();

}

DescribeDatasetItemInfoResult::DatasetItemInfo DescribeDatasetItemInfoResult::getDatasetItemInfo()const
{
	return datasetItemInfo_;
}

