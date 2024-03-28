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

#include <alibabacloud/devops/model/ListWorkitemAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkitemAttachmentsResult::ListWorkitemAttachmentsResult() :
	ServiceResult()
{}

ListWorkitemAttachmentsResult::ListWorkitemAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkitemAttachmentsResult::~ListWorkitemAttachmentsResult()
{}

void ListWorkitemAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allattachmentsNode = value["attachments"]["attachment"];
	for (auto valueattachmentsattachment : allattachmentsNode)
	{
		Attachment attachmentsObject;
		if(!valueattachmentsattachment["fileIdentifier"].isNull())
			attachmentsObject.fileIdentifier = valueattachmentsattachment["fileIdentifier"].asString();
		if(!valueattachmentsattachment["fileName"].isNull())
			attachmentsObject.fileName = valueattachmentsattachment["fileName"].asString();
		if(!valueattachmentsattachment["fileSuffix"].isNull())
			attachmentsObject.fileSuffix = valueattachmentsattachment["fileSuffix"].asString();
		if(!valueattachmentsattachment["size"].isNull())
			attachmentsObject.size = valueattachmentsattachment["size"].asString();
		if(!valueattachmentsattachment["url"].isNull())
			attachmentsObject.url = valueattachmentsattachment["url"].asString();
		if(!valueattachmentsattachment["gmtCreate"].isNull())
			attachmentsObject.gmtCreate = std::stol(valueattachmentsattachment["gmtCreate"].asString());
		if(!valueattachmentsattachment["creator"].isNull())
			attachmentsObject.creator = valueattachmentsattachment["creator"].asString();
		attachments_.push_back(attachmentsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListWorkitemAttachmentsResult::Attachment> ListWorkitemAttachmentsResult::getattachments()const
{
	return attachments_;
}

std::string ListWorkitemAttachmentsResult::getRequestId()const
{
	return requestId_;
}

std::string ListWorkitemAttachmentsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListWorkitemAttachmentsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListWorkitemAttachmentsResult::getSuccess()const
{
	return success_;
}

