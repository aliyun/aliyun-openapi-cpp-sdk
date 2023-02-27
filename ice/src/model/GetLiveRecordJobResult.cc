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

#include <alibabacloud/ice/model/GetLiveRecordJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetLiveRecordJobResult::GetLiveRecordJobResult() :
	ServiceResult()
{}

GetLiveRecordJobResult::GetLiveRecordJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLiveRecordJobResult::~GetLiveRecordJobResult()
{}

void GetLiveRecordJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto recordJobNode = value["RecordJob"];
	if(!recordJobNode["NotifyUrl"].isNull())
		recordJob_.notifyUrl = recordJobNode["NotifyUrl"].asString();
	if(!recordJobNode["CreateTime"].isNull())
		recordJob_.createTime = recordJobNode["CreateTime"].asString();
	if(!recordJobNode["TemplateId"].isNull())
		recordJob_.templateId = recordJobNode["TemplateId"].asString();
	if(!recordJobNode["TemplateName"].isNull())
		recordJob_.templateName = recordJobNode["TemplateName"].asString();
	if(!recordJobNode["Name"].isNull())
		recordJob_.name = recordJobNode["Name"].asString();
	if(!recordJobNode["JobId"].isNull())
		recordJob_.jobId = recordJobNode["JobId"].asString();
	if(!recordJobNode["Status"].isNull())
		recordJob_.status = recordJobNode["Status"].asString();
	auto streamInputNode = recordJobNode["StreamInput"];
	if(!streamInputNode["Type"].isNull())
		recordJob_.streamInput.type = streamInputNode["Type"].asString();
	if(!streamInputNode["Url"].isNull())
		recordJob_.streamInput.url = streamInputNode["Url"].asString();
	auto recordOutputNode = recordJobNode["RecordOutput"];
	if(!recordOutputNode["Type"].isNull())
		recordJob_.recordOutput.type = recordOutputNode["Type"].asString();
	if(!recordOutputNode["Bucket"].isNull())
		recordJob_.recordOutput.bucket = recordOutputNode["Bucket"].asString();
	if(!recordOutputNode["Endpoint"].isNull())
		recordJob_.recordOutput.endpoint = recordOutputNode["Endpoint"].asString();

}

GetLiveRecordJobResult::RecordJob GetLiveRecordJobResult::getRecordJob()const
{
	return recordJob_;
}

