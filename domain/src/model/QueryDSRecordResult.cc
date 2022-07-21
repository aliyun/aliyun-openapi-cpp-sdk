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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDSRecordListNode = value["DSRecordList"]["DSRecord"];
	for (auto valueDSRecordListDSRecord : allDSRecordListNode)
	{
		DSRecord dSRecordListObject;
		if(!valueDSRecordListDSRecord["DigestType"].isNull())
			dSRecordListObject.digestType = std::stoi(valueDSRecordListDSRecord["DigestType"].asString());
		if(!valueDSRecordListDSRecord["Digest"].isNull())
			dSRecordListObject.digest = valueDSRecordListDSRecord["Digest"].asString();
		if(!valueDSRecordListDSRecord["Algorithm"].isNull())
			dSRecordListObject.algorithm = std::stoi(valueDSRecordListDSRecord["Algorithm"].asString());
		if(!valueDSRecordListDSRecord["KeyTag"].isNull())
			dSRecordListObject.keyTag = std::stoi(valueDSRecordListDSRecord["KeyTag"].asString());
		dSRecordList_.push_back(dSRecordListObject);
	}

}

std::vector<QueryDSRecordResult::DSRecord> QueryDSRecordResult::getDSRecordList()const
{
	return dSRecordList_;
}

