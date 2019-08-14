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

#include <alibabacloud/emr/model/QueryUserActionsPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

QueryUserActionsPolicyResult::QueryUserActionsPolicyResult() :
	ServiceResult()
{}

QueryUserActionsPolicyResult::QueryUserActionsPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserActionsPolicyResult::~QueryUserActionsPolicyResult()
{}

void QueryUserActionsPolicyResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["policyDTO"];
	for (auto value : allData)
	{
		PolicyDTO dataObject;
		if(!value["Name"].isNull())
			dataObject.name = value["Name"].asString();
		if(!value["GmtCreate"].isNull())
			dataObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["Effect"].isNull())
			dataObject.effect = value["Effect"].asString();
		if(!value["Action"].isNull())
			dataObject.action = value["Action"].asString();
		if(!value["Conditions"].isNull())
			dataObject.conditions = value["Conditions"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";

}

bool QueryUserActionsPolicyResult::getPaging()const
{
	return paging_;
}

std::vector<QueryUserActionsPolicyResult::PolicyDTO> QueryUserActionsPolicyResult::getData()const
{
	return data_;
}

