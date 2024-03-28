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

#include <alibabacloud/devops/model/GetWorkitemAttachmentCreatemetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkitemAttachmentCreatemetaResult::GetWorkitemAttachmentCreatemetaResult() :
	ServiceResult()
{}

GetWorkitemAttachmentCreatemetaResult::GetWorkitemAttachmentCreatemetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkitemAttachmentCreatemetaResult::~GetWorkitemAttachmentCreatemetaResult()
{}

void GetWorkitemAttachmentCreatemetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto uploadInfoNode = value["uploadInfo"];
	if(!uploadInfoNode["accessid"].isNull())
		uploadInfo_.accessid = uploadInfoNode["accessid"].asString();
	if(!uploadInfoNode["policy"].isNull())
		uploadInfo_.policy = uploadInfoNode["policy"].asString();
	if(!uploadInfoNode["signature"].isNull())
		uploadInfo_.signature = uploadInfoNode["signature"].asString();
	if(!uploadInfoNode["dir"].isNull())
		uploadInfo_.dir = uploadInfoNode["dir"].asString();
	if(!uploadInfoNode["host"].isNull())
		uploadInfo_.host = uploadInfoNode["host"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();

}

GetWorkitemAttachmentCreatemetaResult::UploadInfo GetWorkitemAttachmentCreatemetaResult::getUploadInfo()const
{
	return uploadInfo_;
}

std::string GetWorkitemAttachmentCreatemetaResult::getRequestId()const
{
	return requestId_;
}

std::string GetWorkitemAttachmentCreatemetaResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkitemAttachmentCreatemetaResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetWorkitemAttachmentCreatemetaResult::getSuccess()const
{
	return success_;
}

