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

#include <alibabacloud/sas/model/CreateSimilarSecurityEventsQueryTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

CreateSimilarSecurityEventsQueryTaskResult::CreateSimilarSecurityEventsQueryTaskResult() :
	ServiceResult()
{}

CreateSimilarSecurityEventsQueryTaskResult::CreateSimilarSecurityEventsQueryTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSimilarSecurityEventsQueryTaskResult::~CreateSimilarSecurityEventsQueryTaskResult()
{}

void CreateSimilarSecurityEventsQueryTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto createSimilarSecurityEventsQueryTaskResponse1Node = value["CreateSimilarSecurityEventsQueryTaskResponse"];
	if(!createSimilarSecurityEventsQueryTaskResponse1Node["TaskId"].isNull())
		createSimilarSecurityEventsQueryTaskResponse1_.taskId = std::stol(createSimilarSecurityEventsQueryTaskResponse1Node["TaskId"].asString());
	if(!createSimilarSecurityEventsQueryTaskResponse1Node["Status"].isNull())
		createSimilarSecurityEventsQueryTaskResponse1_.status = createSimilarSecurityEventsQueryTaskResponse1Node["Status"].asString();

}

CreateSimilarSecurityEventsQueryTaskResult::CreateSimilarSecurityEventsQueryTaskResponse1 CreateSimilarSecurityEventsQueryTaskResult::getCreateSimilarSecurityEventsQueryTaskResponse1()const
{
	return createSimilarSecurityEventsQueryTaskResponse1_;
}

