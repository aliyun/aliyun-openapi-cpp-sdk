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

#include <alibabacloud/cdn/model/DescribeFCTriggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeFCTriggerResult::DescribeFCTriggerResult() :
	ServiceResult()
{}

DescribeFCTriggerResult::DescribeFCTriggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFCTriggerResult::~DescribeFCTriggerResult()
{}

void DescribeFCTriggerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto fCTriggerNode = value["FCTrigger"];
	if(!fCTriggerNode["TriggerARN"].isNull())
		fCTrigger_.triggerARN = fCTriggerNode["TriggerARN"].asString();
	if(!fCTriggerNode["RoleARN"].isNull())
		fCTrigger_.roleARN = fCTriggerNode["RoleARN"].asString();
	if(!fCTriggerNode["SourceArn"].isNull())
		fCTrigger_.sourceArn = fCTriggerNode["SourceArn"].asString();
	if(!fCTriggerNode["Notes"].isNull())
		fCTrigger_.notes = fCTriggerNode["Notes"].asString();
	if(!fCTriggerNode["EventMetaName"].isNull())
		fCTrigger_.eventMetaName = fCTriggerNode["EventMetaName"].asString();
	if(!fCTriggerNode["EventMetaVersion"].isNull())
		fCTrigger_.eventMetaVersion = fCTriggerNode["EventMetaVersion"].asString();

}

DescribeFCTriggerResult::FCTrigger DescribeFCTriggerResult::getFCTrigger()const
{
	return fCTrigger_;
}

