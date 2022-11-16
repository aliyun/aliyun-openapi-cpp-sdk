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

#include <alibabacloud/cloudapi/model/DescribeDatasetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeDatasetInfoResult::DescribeDatasetInfoResult() :
	ServiceResult()
{}

DescribeDatasetInfoResult::DescribeDatasetInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatasetInfoResult::~DescribeDatasetInfoResult()
{}

void DescribeDatasetInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto datasetInfoNode = value["DatasetInfo"];
	if(!datasetInfoNode["DatasetId"].isNull())
		datasetInfo_.datasetId = datasetInfoNode["DatasetId"].asString();
	if(!datasetInfoNode["DatasetName"].isNull())
		datasetInfo_.datasetName = datasetInfoNode["DatasetName"].asString();
	if(!datasetInfoNode["DatasetType"].isNull())
		datasetInfo_.datasetType = datasetInfoNode["DatasetType"].asString();
	if(!datasetInfoNode["ModifiedTime"].isNull())
		datasetInfo_.modifiedTime = datasetInfoNode["ModifiedTime"].asString();
	if(!datasetInfoNode["CreatedTime"].isNull())
		datasetInfo_.createdTime = datasetInfoNode["CreatedTime"].asString();

}

DescribeDatasetInfoResult::DatasetInfo DescribeDatasetInfoResult::getDatasetInfo()const
{
	return datasetInfo_;
}

