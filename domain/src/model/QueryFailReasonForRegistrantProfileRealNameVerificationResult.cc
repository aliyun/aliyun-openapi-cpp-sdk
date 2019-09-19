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

#include <alibabacloud/domain/model/QueryFailReasonForRegistrantProfileRealNameVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryFailReasonForRegistrantProfileRealNameVerificationResult::QueryFailReasonForRegistrantProfileRealNameVerificationResult() :
	ServiceResult()
{}

QueryFailReasonForRegistrantProfileRealNameVerificationResult::QueryFailReasonForRegistrantProfileRealNameVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFailReasonForRegistrantProfileRealNameVerificationResult::~QueryFailReasonForRegistrantProfileRealNameVerificationResult()
{}

void QueryFailReasonForRegistrantProfileRealNameVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["FailRecord"];
	for (auto valueDataFailRecord : allDataNode)
	{
		FailRecord dataObject;
		if(!valueDataFailRecord["Date"].isNull())
			dataObject.date = valueDataFailRecord["Date"].asString();
		if(!valueDataFailRecord["FailReason"].isNull())
			dataObject.failReason = valueDataFailRecord["FailReason"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<QueryFailReasonForRegistrantProfileRealNameVerificationResult::FailRecord> QueryFailReasonForRegistrantProfileRealNameVerificationResult::getData()const
{
	return data_;
}

