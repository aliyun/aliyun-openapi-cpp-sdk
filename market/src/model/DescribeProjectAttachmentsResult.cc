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

#include <alibabacloud/market/model/DescribeProjectAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeProjectAttachmentsResult::DescribeProjectAttachmentsResult() :
	ServiceResult()
{}

DescribeProjectAttachmentsResult::DescribeProjectAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProjectAttachmentsResult::~DescribeProjectAttachmentsResult()
{}

void DescribeProjectAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ProjectAttachment"];
	for (auto valueResultProjectAttachment : allResultNode)
	{
		ProjectAttachment resultObject;
		if(!valueResultProjectAttachment["FileLinkGmtExpired"].isNull())
			resultObject.fileLinkGmtExpired = std::stol(valueResultProjectAttachment["FileLinkGmtExpired"].asString());
		if(!valueResultProjectAttachment["StepNo"].isNull())
			resultObject.stepNo = std::stoi(valueResultProjectAttachment["StepNo"].asString());
		if(!valueResultProjectAttachment["AttachmentToken"].isNull())
			resultObject.attachmentToken = valueResultProjectAttachment["AttachmentToken"].asString();
		if(!valueResultProjectAttachment["FileName"].isNull())
			resultObject.fileName = valueResultProjectAttachment["FileName"].asString();
		if(!valueResultProjectAttachment["OperatorRole"].isNull())
			resultObject.operatorRole = valueResultProjectAttachment["OperatorRole"].asString();
		if(!valueResultProjectAttachment["NodeName"].isNull())
			resultObject.nodeName = valueResultProjectAttachment["NodeName"].asString();
		if(!valueResultProjectAttachment["OperatorName"].isNull())
			resultObject.operatorName = valueResultProjectAttachment["OperatorName"].asString();
		if(!valueResultProjectAttachment["FileLink"].isNull())
			resultObject.fileLink = valueResultProjectAttachment["FileLink"].asString();
		if(!valueResultProjectAttachment["GmtCreate"].isNull())
			resultObject.gmtCreate = std::stol(valueResultProjectAttachment["GmtCreate"].asString());
		if(!valueResultProjectAttachment["FileSuffix"].isNull())
			resultObject.fileSuffix = valueResultProjectAttachment["FileSuffix"].asString();
		if(!valueResultProjectAttachment["Operator"].isNull())
			resultObject._operator = std::stol(valueResultProjectAttachment["Operator"].asString());
		if(!valueResultProjectAttachment["Content"].isNull())
			resultObject.content = valueResultProjectAttachment["Content"].asString();
		if(!valueResultProjectAttachment["NodeId"].isNull())
			resultObject.nodeId = std::stol(valueResultProjectAttachment["NodeId"].asString());
		if(!valueResultProjectAttachment["AttachmentType"].isNull())
			resultObject.attachmentType = valueResultProjectAttachment["AttachmentType"].asString();
		if(!valueResultProjectAttachment["FileSize"].isNull())
			resultObject.fileSize = std::stol(valueResultProjectAttachment["FileSize"].asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool DescribeProjectAttachmentsResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeProjectAttachmentsResult::ProjectAttachment> DescribeProjectAttachmentsResult::getResult()const
{
	return result_;
}

