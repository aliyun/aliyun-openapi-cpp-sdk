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

#include <alibabacloud/vcs/model/UploadFileRequest.h>

using AlibabaCloud::Vcs::Model::UploadFileRequest;

UploadFileRequest::UploadFileRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UploadFile")
{
	setMethod(HttpRequest::Method::Post);
}

UploadFileRequest::~UploadFileRequest()
{}

std::string UploadFileRequest::getFileType()const
{
	return fileType_;
}

void UploadFileRequest::setFileType(const std::string& fileType)
{
	fileType_ = fileType;
	setBodyParameter("FileType", fileType);
}

std::string UploadFileRequest::getCorpId()const
{
	return corpId_;
}

void UploadFileRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UploadFileRequest::getFileAliasName()const
{
	return fileAliasName_;
}

void UploadFileRequest::setFileAliasName(const std::string& fileAliasName)
{
	fileAliasName_ = fileAliasName;
	setBodyParameter("FileAliasName", fileAliasName);
}

std::string UploadFileRequest::getFileName()const
{
	return fileName_;
}

void UploadFileRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setBodyParameter("FileName", fileName);
}

std::string UploadFileRequest::getFilePath()const
{
	return filePath_;
}

void UploadFileRequest::setFilePath(const std::string& filePath)
{
	filePath_ = filePath;
	setBodyParameter("FilePath", filePath);
}

std::string UploadFileRequest::getFileContent()const
{
	return fileContent_;
}

void UploadFileRequest::setFileContent(const std::string& fileContent)
{
	fileContent_ = fileContent;
	setBodyParameter("FileContent", fileContent);
}

std::string UploadFileRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void UploadFileRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setBodyParameter("DataSourceId", dataSourceId);
}

std::string UploadFileRequest::getMD5()const
{
	return mD5_;
}

void UploadFileRequest::setMD5(const std::string& mD5)
{
	mD5_ = mD5;
	setBodyParameter("MD5", mD5);
}

