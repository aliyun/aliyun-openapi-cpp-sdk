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

#include <alibabacloud/cusanalytic_sc_online/model/GetPersonInStore5MinResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cusanalytic_sc_online;
using namespace AlibabaCloud::Cusanalytic_sc_online::Model;

GetPersonInStore5MinResult::GetPersonInStore5MinResult() :
	ServiceResult()
{}

GetPersonInStore5MinResult::GetPersonInStore5MinResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPersonInStore5MinResult::~GetPersonInStore5MinResult()
{}

void GetPersonInStore5MinResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPersonInStoresNode = value["PersonInStores"]["PersonInStore"];
	for (auto valuePersonInStoresPersonInStore : allPersonInStoresNode)
	{
		PersonInStore personInStoresObject;
		if(!valuePersonInStoresPersonInStore["Number"].isNull())
			personInStoresObject.number = std::stoi(valuePersonInStoresPersonInStore["Number"].asString());
		if(!valuePersonInStoresPersonInStore["Time"].isNull())
			personInStoresObject.time = std::stol(valuePersonInStoresPersonInStore["Time"].asString());
		personInStores_.push_back(personInStoresObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();

}

std::string GetPersonInStore5MinResult::getMsg()const
{
	return msg_;
}

std::vector<GetPersonInStore5MinResult::PersonInStore> GetPersonInStore5MinResult::getPersonInStores()const
{
	return personInStores_;
}

bool GetPersonInStore5MinResult::getSuccess()const
{
	return success_;
}

