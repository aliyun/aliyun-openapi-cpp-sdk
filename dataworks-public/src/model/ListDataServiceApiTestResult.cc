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

#include <alibabacloud/dataworks-public/model/ListDataServiceApiTestResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDataServiceApiTestResult::ListDataServiceApiTestResult() :
	ServiceResult()
{}

ListDataServiceApiTestResult::ListDataServiceApiTestResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataServiceApiTestResult::~ListDataServiceApiTestResult()
{}

void ListDataServiceApiTestResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["TestId"].isNull())
			dataObject.testId = std::stol(valueDataDataItem["TestId"].asString());
		if(!valueDataDataItem["ApiId"].isNull())
			dataObject.apiId = std::stol(valueDataDataItem["ApiId"].asString());
		if(!valueDataDataItem["ParamMap"].isNull())
			dataObject.paramMap = valueDataDataItem["ParamMap"].asString();
		if(!valueDataDataItem["RetCode"].isNull())
			dataObject.retCode = std::stol(valueDataDataItem["RetCode"].asString());
		if(!valueDataDataItem["RetResult"].isNull())
			dataObject.retResult = valueDataDataItem["RetResult"].asString();
		if(!valueDataDataItem["CostTime"].isNull())
			dataObject.costTime = std::stoi(valueDataDataItem["CostTime"].asString());
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataDataItem["CreateTime"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<ListDataServiceApiTestResult::DataItem> ListDataServiceApiTestResult::getData()const
{
	return data_;
}

