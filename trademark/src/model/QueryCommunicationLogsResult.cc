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

#include <alibabacloud/trademark/model/QueryCommunicationLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

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
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["Note"].isNull())
			dataObject.note = value["Note"].asString();
		if(!value["PartnerCode"].isNull())
			dataObject.partnerCode = value["PartnerCode"].asString();
		if(!value["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(value["UpdateTime"].asString());
		if(!value["CreateTime"].isNull())
			dataObject.createTime = std::stol(value["CreateTime"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<QueryCommunicationLogsResult::TaskList> QueryCommunicationLogsResult::getData()const
{
	return data_;
}

