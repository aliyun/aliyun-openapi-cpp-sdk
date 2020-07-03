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

#include <alibabacloud/airec/model/ListDataSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDataSetResult::ListDataSetResult() :
	ServiceResult()
{}

ListDataSetResult::ListDataSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataSetResult::~ListDataSetResult()
{}

void ListDataSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["InstanceId"].isNull())
			resultObject.instanceId = valueResultResultItem["InstanceId"].asString();
		if(!valueResultResultItem["VersionId"].isNull())
			resultObject.versionId = valueResultResultItem["VersionId"].asString();
		if(!valueResultResultItem["State"].isNull())
			resultObject.state = valueResultResultItem["State"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = std::stol(valueResultResultItem["GmtCreate"].asString());
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = std::stol(valueResultResultItem["GmtModified"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDataSetResult::getMessage()const
{
	return message_;
}

std::string ListDataSetResult::getCode()const
{
	return code_;
}

std::vector<ListDataSetResult::ResultItem> ListDataSetResult::getResult()const
{
	return result_;
}

