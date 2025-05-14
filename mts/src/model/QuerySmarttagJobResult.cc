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

#include <alibabacloud/mts/model/QuerySmarttagJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QuerySmarttagJobResult::QuerySmarttagJobResult() :
	ServiceResult()
{}

QuerySmarttagJobResult::QuerySmarttagJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySmarttagJobResult::~QuerySmarttagJobResult()
{}

void QuerySmarttagJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["Data"].isNull())
			resultsObject.data = valueResultsResult["Data"].asString();
		if(!valueResultsResult["Type"].isNull())
			resultsObject.type = valueResultsResult["Type"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["JobStatus"].isNull())
		jobStatus_ = value["JobStatus"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();

}

std::string QuerySmarttagJobResult::getJobStatus()const
{
	return jobStatus_;
}

std::string QuerySmarttagJobResult::getMessage()const
{
	return message_;
}

std::vector<QuerySmarttagJobResult::Result> QuerySmarttagJobResult::getResults()const
{
	return results_;
}

std::string QuerySmarttagJobResult::getUserData()const
{
	return userData_;
}

