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

#include <alibabacloud/domain/model/QueryDSRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDSRecordResult::QueryDSRecordResult() :
	ServiceResult()
{}

QueryDSRecordResult::QueryDSRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDSRecordResult::~QueryDSRecordResult()
{}

void QueryDSRecordResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDSRecordList = value["DSRecordList"]["DSRecord"];
	for (auto value : allDSRecordList)
	{
		DSRecord dSRecordListObject;
		if(!value["KeyTag"].isNull())
			dSRecordListObject.keyTag = std::stoi(value["KeyTag"].asString());
		if(!value["Algorithm"].isNull())
			dSRecordListObject.algorithm = std::stoi(value["Algorithm"].asString());
		if(!value["DigestType"].isNull())
			dSRecordListObject.digestType = std::stoi(value["DigestType"].asString());
		if(!value["Digest"].isNull())
			dSRecordListObject.digest = value["Digest"].asString();
		dSRecordList_.push_back(dSRecordListObject);
	}

}

std::vector<QueryDSRecordResult::DSRecord> QueryDSRecordResult::getDSRecordList()const
{
	return dSRecordList_;
}

