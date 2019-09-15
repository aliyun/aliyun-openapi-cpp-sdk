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

#include <alibabacloud/aegis/model/ModifyWebLockCreateConfigRequest.h>

using AlibabaCloud::Aegis::Model::ModifyWebLockCreateConfigRequest;

ModifyWebLockCreateConfigRequest::ModifyWebLockCreateConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyWebLockCreateConfig")
{}

ModifyWebLockCreateConfigRequest::~ModifyWebLockCreateConfigRequest()
{}

std::string ModifyWebLockCreateConfigRequest::getLocalBackupDir()const
{
	return localBackupDir_;
}

void ModifyWebLockCreateConfigRequest::setLocalBackupDir(const std::string& localBackupDir)
{
	localBackupDir_ = localBackupDir;
	setCoreParameter("LocalBackupDir", localBackupDir);
}

std::string ModifyWebLockCreateConfigRequest::getExclusiveFile()const
{
	return exclusiveFile_;
}

void ModifyWebLockCreateConfigRequest::setExclusiveFile(const std::string& exclusiveFile)
{
	exclusiveFile_ = exclusiveFile;
	setCoreParameter("ExclusiveFile", exclusiveFile);
}

std::string ModifyWebLockCreateConfigRequest::getExclusiveFileType()const
{
	return exclusiveFileType_;
}

void ModifyWebLockCreateConfigRequest::setExclusiveFileType(const std::string& exclusiveFileType)
{
	exclusiveFileType_ = exclusiveFileType;
	setCoreParameter("ExclusiveFileType", exclusiveFileType);
}

std::string ModifyWebLockCreateConfigRequest::getDir()const
{
	return dir_;
}

void ModifyWebLockCreateConfigRequest::setDir(const std::string& dir)
{
	dir_ = dir;
	setCoreParameter("Dir", dir);
}

std::string ModifyWebLockCreateConfigRequest::getUuid()const
{
	return uuid_;
}

void ModifyWebLockCreateConfigRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string ModifyWebLockCreateConfigRequest::getMode()const
{
	return mode_;
}

void ModifyWebLockCreateConfigRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setCoreParameter("Mode", mode);
}

std::string ModifyWebLockCreateConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebLockCreateConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyWebLockCreateConfigRequest::getLang()const
{
	return lang_;
}

void ModifyWebLockCreateConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ModifyWebLockCreateConfigRequest::getExclusiveDir()const
{
	return exclusiveDir_;
}

void ModifyWebLockCreateConfigRequest::setExclusiveDir(const std::string& exclusiveDir)
{
	exclusiveDir_ = exclusiveDir;
	setCoreParameter("ExclusiveDir", exclusiveDir);
}

std::string ModifyWebLockCreateConfigRequest::getInclusiveFileType()const
{
	return inclusiveFileType_;
}

void ModifyWebLockCreateConfigRequest::setInclusiveFileType(const std::string& inclusiveFileType)
{
	inclusiveFileType_ = inclusiveFileType;
	setCoreParameter("InclusiveFileType", inclusiveFileType);
}

