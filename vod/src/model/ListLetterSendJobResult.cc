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

#include <alibabacloud/vod/model/ListLetterSendJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListLetterSendJobResult::ListLetterSendJobResult() :
	ServiceResult()
{}

ListLetterSendJobResult::ListLetterSendJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLetterSendJobResult::~ListLetterSendJobResult()
{}

void ListLetterSendJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLetterJobListNode = value["LetterJobList"]["LetterJob"];
	for (auto valueLetterJobListLetterJob : allLetterJobListNode)
	{
		LetterJob letterJobListObject;
		if(!valueLetterJobListLetterJob["CcAddress"].isNull())
			letterJobListObject.ccAddress = valueLetterJobListLetterJob["CcAddress"].asString();
		if(!valueLetterJobListLetterJob["CreateTime"].isNull())
			letterJobListObject.createTime = valueLetterJobListLetterJob["CreateTime"].asString();
		if(!valueLetterJobListLetterJob["UserId"].isNull())
			letterJobListObject.userId = std::stol(valueLetterJobListLetterJob["UserId"].asString());
		if(!valueLetterJobListLetterJob["SendTime"].isNull())
			letterJobListObject.sendTime = valueLetterJobListLetterJob["SendTime"].asString();
		if(!valueLetterJobListLetterJob["ToAddress"].isNull())
			letterJobListObject.toAddress = valueLetterJobListLetterJob["ToAddress"].asString();
		if(!valueLetterJobListLetterJob["Body"].isNull())
			letterJobListObject.body = valueLetterJobListLetterJob["Body"].asString();
		if(!valueLetterJobListLetterJob["DetectionId"].isNull())
			letterJobListObject.detectionId = valueLetterJobListLetterJob["DetectionId"].asString();
		if(!valueLetterJobListLetterJob["BccAddress"].isNull())
			letterJobListObject.bccAddress = valueLetterJobListLetterJob["BccAddress"].asString();
		if(!valueLetterJobListLetterJob["JobId"].isNull())
			letterJobListObject.jobId = valueLetterJobListLetterJob["JobId"].asString();
		if(!valueLetterJobListLetterJob["Title"].isNull())
			letterJobListObject.title = valueLetterJobListLetterJob["Title"].asString();
		if(!valueLetterJobListLetterJob["TemplateId"].isNull())
			letterJobListObject.templateId = valueLetterJobListLetterJob["TemplateId"].asString();
		if(!valueLetterJobListLetterJob["ModifyTime"].isNull())
			letterJobListObject.modifyTime = valueLetterJobListLetterJob["ModifyTime"].asString();
		letterJobList_.push_back(letterJobListObject);
	}

}

std::vector<ListLetterSendJobResult::LetterJob> ListLetterSendJobResult::getLetterJobList()const
{
	return letterJobList_;
}

