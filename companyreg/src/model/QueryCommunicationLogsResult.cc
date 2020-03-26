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

#include <alibabacloud/companyreg/model/QueryCommunicationLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

QueryCommunicationLogsResult::QueryCommunicationLogsResult() :
	ServiceResult()
{}

QueryCommunicationLogsResult::QueryCommunicationLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCommunicationLogsResult::~QueryCommunicationLogsResult()
{}

void QueryCommunicationLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TaskList"];
	for (auto valueDataTaskList : allDataNode)
	{
		TaskList dataObject;
		if(!valueDataTaskList["BizId"].isNull())
			dataObject.bizId = valueDataTaskList["BizId"].asString();
		if(!valueDataTaskList["Note"].isNull())
			dataObject.note = valueDataTaskList["Note"].asString();
		if(!valueDataTaskList["PartnerCode"].isNull())
			dataObject.partnerCode = valueDataTaskList["PartnerCode"].asString();
		if(!valueDataTaskList["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataTaskList["UpdateTime"].asString());
		if(!valueDataTaskList["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataTaskList["CreateTime"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<QueryCommunicationLogsResult::TaskList> QueryCommunicationLogsResult::getData()const
{
	return data_;
}

