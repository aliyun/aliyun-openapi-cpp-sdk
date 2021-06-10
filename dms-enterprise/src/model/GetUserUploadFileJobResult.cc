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

#include <alibabacloud/dms-enterprise/model/GetUserUploadFileJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetUserUploadFileJobResult::GetUserUploadFileJobResult() :
	ServiceResult()
{}

GetUserUploadFileJobResult::GetUserUploadFileJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserUploadFileJobResult::~GetUserUploadFileJobResult()
{}

void GetUserUploadFileJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto uploadFileJobDetailNode = value["UploadFileJobDetail"];
	if(!uploadFileJobDetailNode["JobKey"].isNull())
		uploadFileJobDetail_.jobKey = uploadFileJobDetailNode["JobKey"].asString();
	if(!uploadFileJobDetailNode["FileName"].isNull())
		uploadFileJobDetail_.fileName = uploadFileJobDetailNode["FileName"].asString();
	if(!uploadFileJobDetailNode["FileSize"].isNull())
		uploadFileJobDetail_.fileSize = std::stol(uploadFileJobDetailNode["FileSize"].asString());
	if(!uploadFileJobDetailNode["FileSource"].isNull())
		uploadFileJobDetail_.fileSource = uploadFileJobDetailNode["FileSource"].asString();
	if(!uploadFileJobDetailNode["UploadType"].isNull())
		uploadFileJobDetail_.uploadType = uploadFileJobDetailNode["UploadType"].asString();
	if(!uploadFileJobDetailNode["UploadURL"].isNull())
		uploadFileJobDetail_.uploadURL = uploadFileJobDetailNode["UploadURL"].asString();
	if(!uploadFileJobDetailNode["UploadedSize"].isNull())
		uploadFileJobDetail_.uploadedSize = std::stol(uploadFileJobDetailNode["UploadedSize"].asString());
	if(!uploadFileJobDetailNode["JobStatus"].isNull())
		uploadFileJobDetail_.jobStatus = uploadFileJobDetailNode["JobStatus"].asString();
	if(!uploadFileJobDetailNode["JobStatusDesc"].isNull())
		uploadFileJobDetail_.jobStatusDesc = uploadFileJobDetailNode["JobStatusDesc"].asString();
	if(!uploadFileJobDetailNode["AttachmentKey"].isNull())
		uploadFileJobDetail_.attachmentKey = uploadFileJobDetailNode["AttachmentKey"].asString();
	auto uploadOSSParamNode = uploadFileJobDetailNode["UploadOSSParam"];
	if(!uploadOSSParamNode["Endpoint"].isNull())
		uploadFileJobDetail_.uploadOSSParam.endpoint = uploadOSSParamNode["Endpoint"].asString();
	if(!uploadOSSParamNode["BucketName"].isNull())
		uploadFileJobDetail_.uploadOSSParam.bucketName = uploadOSSParamNode["BucketName"].asString();
	if(!uploadOSSParamNode["ObjectName"].isNull())
		uploadFileJobDetail_.uploadOSSParam.objectName = uploadOSSParamNode["ObjectName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetUserUploadFileJobResult::UploadFileJobDetail GetUserUploadFileJobResult::getUploadFileJobDetail()const
{
	return uploadFileJobDetail_;
}

std::string GetUserUploadFileJobResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetUserUploadFileJobResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetUserUploadFileJobResult::getSuccess()const
{
	return success_;
}

