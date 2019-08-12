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

#include <alibabacloud/vod/model/GetAuditHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetAuditHistoryResult::GetAuditHistoryResult() :
	ServiceResult()
{}

GetAuditHistoryResult::GetAuditHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAuditHistoryResult::~GetAuditHistoryResult()
{}

void GetAuditHistoryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHistories = value["Histories"]["History"];
	for (auto value : allHistories)
	{
		History historiesObject;
		if(!value["CreationTime"].isNull())
			historiesObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			historiesObject.status = value["Status"].asString();
		if(!value["Reason"].isNull())
			historiesObject.reason = value["Reason"].asString();
		if(!value["Comment"].isNull())
			historiesObject.comment = value["Comment"].asString();
		if(!value["Auditor"].isNull())
			historiesObject.auditor = value["Auditor"].asString();
		histories_.push_back(historiesObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::string GetAuditHistoryResult::getStatus()const
{
	return status_;
}

long GetAuditHistoryResult::getTotal()const
{
	return total_;
}

std::vector<GetAuditHistoryResult::History> GetAuditHistoryResult::getHistories()const
{
	return histories_;
}

