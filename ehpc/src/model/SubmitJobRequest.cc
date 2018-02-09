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

#include <alibabacloud/ehpc/model/SubmitJobRequest.h>

using AlibabaCloud::EHPC::Model::SubmitJobRequest;

SubmitJobRequest::SubmitJobRequest() :
	RpcServiceRequest("ehpc", "2017-07-14", "SubmitJob")
{}

SubmitJobRequest::~SubmitJobRequest()
{}

std::string SubmitJobRequest::getStderrRedirectPath()const
{
	return stderrRedirectPath_;
}

void SubmitJobRequest::setStderrRedirectPath(const std::string& stderrRedirectPath)
{
	stderrRedirectPath_ = stderrRedirectPath;
	setParameter("StderrRedirectPath", stderrRedirectPath);
}

std::string SubmitJobRequest::getVariables()const
{
	return variables_;
}

void SubmitJobRequest::setVariables(const std::string& variables)
{
	variables_ = variables;
	setParameter("Variables", variables);
}

std::string SubmitJobRequest::getRunasUserPassword()const
{
	return runasUserPassword_;
}

void SubmitJobRequest::setRunasUserPassword(const std::string& runasUserPassword)
{
	runasUserPassword_ = runasUserPassword;
	setParameter("RunasUserPassword", runasUserPassword);
}

std::string SubmitJobRequest::getRunasUser()const
{
	return runasUser_;
}

void SubmitJobRequest::setRunasUser(const std::string& runasUser)
{
	runasUser_ = runasUser;
	setParameter("RunasUser", runasUser);
}

std::string SubmitJobRequest::getClusterId()const
{
	return clusterId_;
}

void SubmitJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

bool SubmitJobRequest::getReRunable()const
{
	return reRunable_;
}

void SubmitJobRequest::setReRunable(bool reRunable)
{
	reRunable_ = reRunable;
	setParameter("ReRunable", std::to_string(reRunable));
}

int SubmitJobRequest::getPriority()const
{
	return priority_;
}

void SubmitJobRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string SubmitJobRequest::getCommandLine()const
{
	return commandLine_;
}

void SubmitJobRequest::setCommandLine(const std::string& commandLine)
{
	commandLine_ = commandLine;
	setParameter("CommandLine", commandLine);
}

std::string SubmitJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitJobRequest::getArrayRequest()const
{
	return arrayRequest_;
}

void SubmitJobRequest::setArrayRequest(const std::string& arrayRequest)
{
	arrayRequest_ = arrayRequest;
	setParameter("ArrayRequest", arrayRequest);
}

std::string SubmitJobRequest::getPackagePath()const
{
	return packagePath_;
}

void SubmitJobRequest::setPackagePath(const std::string& packagePath)
{
	packagePath_ = packagePath;
	setParameter("PackagePath", packagePath);
}

std::string SubmitJobRequest::getName()const
{
	return name_;
}

void SubmitJobRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string SubmitJobRequest::getStdoutRedirectPath()const
{
	return stdoutRedirectPath_;
}

void SubmitJobRequest::setStdoutRedirectPath(const std::string& stdoutRedirectPath)
{
	stdoutRedirectPath_ = stdoutRedirectPath;
	setParameter("StdoutRedirectPath", stdoutRedirectPath);
}

