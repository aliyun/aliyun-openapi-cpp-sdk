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

#include <alibabacloud/emr/model/ResolveETLJobSqlSchemaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ResolveETLJobSqlSchemaResult::ResolveETLJobSqlSchemaResult() :
	ServiceResult()
{}

ResolveETLJobSqlSchemaResult::ResolveETLJobSqlSchemaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ResolveETLJobSqlSchemaResult::~ResolveETLJobSqlSchemaResult()
{}

void ResolveETLJobSqlSchemaResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["ResolveId"].isNull())
		resolveId_ = value["ResolveId"].asString();

}

std::string ResolveETLJobSqlSchemaResult::getResolveId()const
{
	return resolveId_;
}

