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

#include <alibabacloud/cloud-siem/model/DoQuickFieldResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DoQuickFieldResult::DoQuickFieldResult() :
	ServiceResult()
{}

DoQuickFieldResult::DoQuickFieldResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DoQuickFieldResult::~DoQuickFieldResult()
{}

void DoQuickFieldResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["QueryMode"].isNull())
		data_.queryMode = std::stoi(dataNode["QueryMode"].asString());
	if(!dataNode["Limited"].isNull())
		data_.limited = std::stol(dataNode["Limited"].asString());
	if(!dataNode["Count"].isNull())
		data_.count = std::stoi(dataNode["Count"].asString());
	if(!dataNode["HasSQL"].isNull())
		data_.hasSQL = dataNode["HasSQL"].asString() == "true";
	if(!dataNode["WhereQuery"].isNull())
		data_.whereQuery = dataNode["WhereQuery"].asString();
	if(!dataNode["PQuery"].isNull())
		data_.pQuery = dataNode["PQuery"].asString();
	if(!dataNode["ProcessedRows"].isNull())
		data_.processedRows = std::stol(dataNode["ProcessedRows"].asString());
	if(!dataNode["CompleteOrNot"].isNull())
		data_.completeOrNot = dataNode["CompleteOrNot"].asString() == "true";
	if(!dataNode["AggQueryd"].isNull())
		data_.aggQueryd = dataNode["AggQueryd"].asString();
		auto allKeys = dataNode["Keys"]["Key"];
		for (auto value : allKeys)
			data_.keys.push_back(value.asString());
		auto allLogs = dataNode["Logs"]["Log"];
		for (auto value : allLogs)
			data_.logs.push_back(value.asString());

}

DoQuickFieldResult::Data DoQuickFieldResult::getData()const
{
	return data_;
}

