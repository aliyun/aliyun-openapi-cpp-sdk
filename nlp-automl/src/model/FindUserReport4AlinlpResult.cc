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

#include <alibabacloud/nlp-automl/model/FindUserReport4AlinlpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlp_automl;
using namespace AlibabaCloud::Nlp_automl::Model;

FindUserReport4AlinlpResult::FindUserReport4AlinlpResult() :
	ServiceResult()
{}

FindUserReport4AlinlpResult::FindUserReport4AlinlpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindUserReport4AlinlpResult::~FindUserReport4AlinlpResult()
{}

void FindUserReport4AlinlpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["report"];
	for (auto valueDatareport : allDataNode)
	{
		Report dataObject;
		if(!valueDatareport["TotalCount"].isNull())
			dataObject.totalCount = std::stol(valueDatareport["TotalCount"].asString());
		if(!valueDatareport["SuccessCount"].isNull())
			dataObject.successCount = std::stol(valueDatareport["SuccessCount"].asString());
		if(!valueDatareport["FailCount"].isNull())
			dataObject.failCount = std::stol(valueDatareport["FailCount"].asString());
		if(!valueDatareport["QpsMax"].isNull())
			dataObject.qpsMax = std::stoi(valueDatareport["QpsMax"].asString());
		if(!valueDatareport["RptTime"].isNull())
			dataObject.rptTime = valueDatareport["RptTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::vector<FindUserReport4AlinlpResult::Report> FindUserReport4AlinlpResult::getData()const
{
	return data_;
}

std::string FindUserReport4AlinlpResult::getCode()const
{
	return code_;
}

