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

#include <alibabacloud/sas/model/ModifyWebLockUpdateConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyWebLockUpdateConfigRequest;

ModifyWebLockUpdateConfigRequest::ModifyWebLockUpdateConfigRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyWebLockUpdateConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyWebLockUpdateConfigRequest::~ModifyWebLockUpdateConfigRequest()
{}

std::string ModifyWebLockUpdateConfigRequest::getLocalBackupDir()const
{
	return localBackupDir_;
}

void ModifyWebLockUpdateConfigRequest::setLocalBackupDir(const std::string& localBackupDir)
{
	localBackupDir_ = localBackupDir;
	setParameter("LocalBackupDir", localBackupDir);
}

std::string ModifyWebLockUpdateConfigRequest::getExclusiveFile()const
{
	return exclusiveFile_;
}

void ModifyWebLockUpdateConfigRequest::setExclusiveFile(const std::string& exclusiveFile)
{
	exclusiveFile_ = exclusiveFile;
	setParameter("ExclusiveFile", exclusiveFile);
}

std::string ModifyWebLockUpdateConfigRequest::getExclusiveFileType()const
{
	return exclusiveFileType_;
}

void ModifyWebLockUpdateConfigRequest::setExclusiveFileType(const std::string& exclusiveFileType)
{
	exclusiveFileType_ = exclusiveFileType;
	setParameter("ExclusiveFileType", exclusiveFileType);
}

std::string ModifyWebLockUpdateConfigRequest::getDir()const
{
	return dir_;
}

void ModifyWebLockUpdateConfigRequest::setDir(const std::string& dir)
{
	dir_ = dir;
	setParameter("Dir", dir);
}

std::string ModifyWebLockUpdateConfigRequest::getUuid()const
{
	return uuid_;
}

void ModifyWebLockUpdateConfigRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string ModifyWebLockUpdateConfigRequest::getMode()const
{
	return mode_;
}

void ModifyWebLockUpdateConfigRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string ModifyWebLockUpdateConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebLockUpdateConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ModifyWebLockUpdateConfigRequest::getId()const
{
	return id_;
}

void ModifyWebLockUpdateConfigRequest::setId(int id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyWebLockUpdateConfigRequest::getLang()const
{
	return lang_;
}

void ModifyWebLockUpdateConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyWebLockUpdateConfigRequest::getInclusiveFile()const
{
	return inclusiveFile_;
}

void ModifyWebLockUpdateConfigRequest::setInclusiveFile(const std::string& inclusiveFile)
{
	inclusiveFile_ = inclusiveFile;
	setParameter("InclusiveFile", inclusiveFile);
}

std::string ModifyWebLockUpdateConfigRequest::getExclusiveDir()const
{
	return exclusiveDir_;
}

void ModifyWebLockUpdateConfigRequest::setExclusiveDir(const std::string& exclusiveDir)
{
	exclusiveDir_ = exclusiveDir;
	setParameter("ExclusiveDir", exclusiveDir);
}

std::string ModifyWebLockUpdateConfigRequest::getInclusiveFileType()const
{
	return inclusiveFileType_;
}

void ModifyWebLockUpdateConfigRequest::setInclusiveFileType(const std::string& inclusiveFileType)
{
	inclusiveFileType_ = inclusiveFileType;
	setParameter("InclusiveFileType", inclusiveFileType);
}

std::string ModifyWebLockUpdateConfigRequest::getDefenceMode()const
{
	return defenceMode_;
}

void ModifyWebLockUpdateConfigRequest::setDefenceMode(const std::string& defenceMode)
{
	defenceMode_ = defenceMode;
	setParameter("DefenceMode", defenceMode);
}

