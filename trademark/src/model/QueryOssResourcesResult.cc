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

#include <alibabacloud/trademark/model/QueryOssResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryOssResourcesResult::QueryOssResourcesResult() :
	ServiceResult()
{}

QueryOssResourcesResult::QueryOssResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryOssResourcesResult::~QueryOssResourcesResult()
{}

void QueryOssResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["TaskList"];
	for (auto value : allData)
	{
		TaskList dataObject;
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["Name"].isNull())
			dataObject.name = value["Name"].asString();
		if(!value["OssUrl"].isNull())
			dataObject.ossUrl = value["OssUrl"].asString();
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<QueryOssResourcesResult::TaskList> QueryOssResourcesResult::getData()const
{
	return data_;
}

