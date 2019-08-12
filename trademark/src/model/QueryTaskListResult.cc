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

#include <alibabacloud/trademark/model/QueryTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryTaskListResult::QueryTaskListResult() :
	ServiceResult()
{}

QueryTaskListResult::QueryTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTaskListResult::~QueryTaskListResult()
{}

void QueryTaskListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["TaskList"];
	for (auto value : allData)
	{
		TaskList dataObject;
		if(!value["TaskStatus"].isNull())
			dataObject.taskStatus = value["TaskStatus"].asString();
		if(!value["TaskType"].isNull())
			dataObject.taskType = value["TaskType"].asString();
		if(!value["ErrMsg"].isNull())
			dataObject.errMsg = value["ErrMsg"].asString();
		if(!value["Result"].isNull())
			dataObject.result = value["Result"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<QueryTaskListResult::TaskList> QueryTaskListResult::getData()const
{
	return data_;
}

