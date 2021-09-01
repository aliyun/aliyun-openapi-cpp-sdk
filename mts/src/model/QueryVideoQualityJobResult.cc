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

#include <alibabacloud/mts/model/QueryVideoQualityJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryVideoQualityJobResult::QueryVideoQualityJobResult() :
	ServiceResult()
{}

QueryVideoQualityJobResult::QueryVideoQualityJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryVideoQualityJobResult::~QueryVideoQualityJobResult()
{}

void QueryVideoQualityJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobNode = value["Job"];
	if(!jobNode["Status"].isNull())
		job_.status = jobNode["Status"].asString();
	if(!jobNode["JobId"].isNull())
		job_.jobId = jobNode["JobId"].asString();
	if(!jobNode["UserId"].isNull())
		job_.userId = std::stol(jobNode["UserId"].asString());
	if(!jobNode["VideoQualityResults"].isNull())
		job_.videoQualityResults = jobNode["VideoQualityResults"].asString();
	if(!jobNode["Message"].isNull())
		job_.message = jobNode["Message"].asString();
	if(!jobNode["Output"].isNull())
		job_.output = jobNode["Output"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string QueryVideoQualityJobResult::getMessage()const
{
	return message_;
}

QueryVideoQualityJobResult::Job QueryVideoQualityJobResult::getJob()const
{
	return job_;
}

std::string QueryVideoQualityJobResult::getCode()const
{
	return code_;
}

