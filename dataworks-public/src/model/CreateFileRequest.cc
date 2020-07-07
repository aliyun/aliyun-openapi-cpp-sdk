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

#include <alibabacloud/dataworks-public/model/CreateFileRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateFileRequest;

CreateFileRequest::CreateFileRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateFile")
{
	setMethod(HttpRequest::Method::Post);
}

CreateFileRequest::~CreateFileRequest()
{}

int CreateFileRequest::getFileType()const
{
	return fileType_;
}

void CreateFileRequest::setFileType(int fileType)
{
	fileType_ = fileType;
	setBodyParameter("FileType", std::to_string(fileType));
}

std::string CreateFileRequest::getDependentNodeIdList()const
{
	return dependentNodeIdList_;
}

void CreateFileRequest::setDependentNodeIdList(const std::string& dependentNodeIdList)
{
	dependentNodeIdList_ = dependentNodeIdList;
	setBodyParameter("DependentNodeIdList", dependentNodeIdList);
}

std::string CreateFileRequest::getContent()const
{
	return content_;
}

void CreateFileRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string CreateFileRequest::getProjectIdentifier()const
{
	return projectIdentifier_;
}

void CreateFileRequest::setProjectIdentifier(const std::string& projectIdentifier)
{
	projectIdentifier_ = projectIdentifier;
	setBodyParameter("ProjectIdentifier", projectIdentifier);
}

long CreateFileRequest::getProjectId()const
{
	return projectId_;
}

void CreateFileRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

long CreateFileRequest::getStartEffectDate()const
{
	return startEffectDate_;
}

void CreateFileRequest::setStartEffectDate(long startEffectDate)
{
	startEffectDate_ = startEffectDate;
	setBodyParameter("StartEffectDate", std::to_string(startEffectDate));
}

std::string CreateFileRequest::getCycleType()const
{
	return cycleType_;
}

void CreateFileRequest::setCycleType(const std::string& cycleType)
{
	cycleType_ = cycleType;
	setBodyParameter("CycleType", cycleType);
}

std::string CreateFileRequest::getOwner()const
{
	return owner_;
}

void CreateFileRequest::setOwner(const std::string& owner)
{
	owner_ = owner;
	setBodyParameter("Owner", owner);
}

int CreateFileRequest::getAutoRerunIntervalMillis()const
{
	return autoRerunIntervalMillis_;
}

void CreateFileRequest::setAutoRerunIntervalMillis(int autoRerunIntervalMillis)
{
	autoRerunIntervalMillis_ = autoRerunIntervalMillis;
	setBodyParameter("AutoRerunIntervalMillis", std::to_string(autoRerunIntervalMillis));
}

std::string CreateFileRequest::getInputList()const
{
	return inputList_;
}

void CreateFileRequest::setInputList(const std::string& inputList)
{
	inputList_ = inputList;
	setBodyParameter("InputList", inputList);
}

std::string CreateFileRequest::getRerunMode()const
{
	return rerunMode_;
}

void CreateFileRequest::setRerunMode(const std::string& rerunMode)
{
	rerunMode_ = rerunMode;
	setBodyParameter("RerunMode", rerunMode);
}

std::string CreateFileRequest::getParaValue()const
{
	return paraValue_;
}

void CreateFileRequest::setParaValue(const std::string& paraValue)
{
	paraValue_ = paraValue;
	setBodyParameter("ParaValue", paraValue);
}

int CreateFileRequest::getAutoRerunTimes()const
{
	return autoRerunTimes_;
}

void CreateFileRequest::setAutoRerunTimes(int autoRerunTimes)
{
	autoRerunTimes_ = autoRerunTimes;
	setBodyParameter("AutoRerunTimes", std::to_string(autoRerunTimes));
}

std::string CreateFileRequest::getCronExpress()const
{
	return cronExpress_;
}

void CreateFileRequest::setCronExpress(const std::string& cronExpress)
{
	cronExpress_ = cronExpress;
	setBodyParameter("CronExpress", cronExpress);
}

long CreateFileRequest::getEndEffectDate()const
{
	return endEffectDate_;
}

void CreateFileRequest::setEndEffectDate(long endEffectDate)
{
	endEffectDate_ = endEffectDate;
	setBodyParameter("EndEffectDate", std::to_string(endEffectDate));
}

std::string CreateFileRequest::getFileName()const
{
	return fileName_;
}

void CreateFileRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setBodyParameter("FileName", fileName);
}

bool CreateFileRequest::getStop()const
{
	return stop_;
}

void CreateFileRequest::setStop(bool stop)
{
	stop_ = stop;
	setBodyParameter("Stop", stop ? "true" : "false");
}

std::string CreateFileRequest::getDependentType()const
{
	return dependentType_;
}

void CreateFileRequest::setDependentType(const std::string& dependentType)
{
	dependentType_ = dependentType;
	setBodyParameter("DependentType", dependentType);
}

std::string CreateFileRequest::getFileFolderPath()const
{
	return fileFolderPath_;
}

void CreateFileRequest::setFileFolderPath(const std::string& fileFolderPath)
{
	fileFolderPath_ = fileFolderPath;
	setBodyParameter("FileFolderPath", fileFolderPath);
}

std::string CreateFileRequest::getFileDescription()const
{
	return fileDescription_;
}

void CreateFileRequest::setFileDescription(const std::string& fileDescription)
{
	fileDescription_ = fileDescription;
	setBodyParameter("FileDescription", fileDescription);
}

