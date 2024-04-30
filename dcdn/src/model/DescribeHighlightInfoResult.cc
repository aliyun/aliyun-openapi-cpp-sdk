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

#include <alibabacloud/dcdn/model/DescribeHighlightInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeHighlightInfoResult::DescribeHighlightInfoResult() :
	ServiceResult()
{}

DescribeHighlightInfoResult::DescribeHighlightInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHighlightInfoResult::~DescribeHighlightInfoResult()
{}

void DescribeHighlightInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataModuleNode = value["DataModule"]["DataItem"];
	for (auto valueDataModuleDataItem : allDataModuleNode)
	{
		DataItem dataModuleObject;
		if(!valueDataModuleDataItem["Key"].isNull())
			dataModuleObject.key = valueDataModuleDataItem["Key"].asString();
		if(!valueDataModuleDataItem["Hit"].isNull())
			dataModuleObject.hit = valueDataModuleDataItem["Hit"].asString();
		if(!valueDataModuleDataItem["Raw"].isNull())
			dataModuleObject.raw = valueDataModuleDataItem["Raw"].asString();
		dataModule_.push_back(dataModuleObject);
	}

}

std::vector<DescribeHighlightInfoResult::DataItem> DescribeHighlightInfoResult::getDataModule()const
{
	return dataModule_;
}

