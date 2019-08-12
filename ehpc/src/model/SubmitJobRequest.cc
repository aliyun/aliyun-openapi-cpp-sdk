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
	RpcServiceRequest("ehpc", "2018-04-12", "SubmitJob")
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
	setCoreParameter("StderrRedirectPath", stderrRedirectPath);
}

std::string SubmitJobRequest::getVariables()const
{
	return variables_;
}

void SubmitJobRequest::setVariables(const std::string& variables)
{
	variables_ = variables;
	setCoreParameter("Variables", variables);
}

std::string SubmitJobRequest::getRunasUserPassword()const
{
	return runasUserPassword_;
}

void SubmitJobRequest::setRunasUserPassword(const std::string& runasUserPassword)
{
	runasUserPassword_ = runasUserPassword;
	setCoreParameter("RunasUserPassword", runasUserPassword);
}

std::string SubmitJobRequest::getPostCmdLine()const
{
	return postCmdLine_;
}

void SubmitJobRequest::setPostCmdLine(const std::string& postCmdLine)
{
	postCmdLine_ = postCmdLine;
	setCoreParameter("PostCmdLine", postCmdLine);
}

std::string SubmitJobRequest::getRunasUser()const
{
	return runasUser_;
}

void SubmitJobRequest::setRunasUser(const std::string& runasUser)
{
	runasUser_ = runasUser;
	setCoreParameter("RunasUser", runasUser);
}

std::string SubmitJobRequest::getClusterId()const
{
	return clusterId_;
}

void SubmitJobRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

bool SubmitJobRequest::getReRunable()const
{
	return reRunable_;
}

void SubmitJobRequest::setReRunable(bool reRunable)
{
	reRunable_ = reRunable;
	setCoreParameter("ReRunable", reRunable ? "true" : "false");
}

int SubmitJobRequest::getPriority()const
{
	return priority_;
}

void SubmitJobRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

std::string SubmitJobRequest::getCommandLine()const
{
	return commandLine_;
}

void SubmitJobRequest::setCommandLine(const std::string& commandLine)
{
	commandLine_ = commandLine;
	setCoreParameter("CommandLine", commandLine);
}

std::string SubmitJobRequest::getJobQueue()const
{
	return jobQueue_;
}

void SubmitJobRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setCoreParameter("JobQueue", jobQueue);
}

std::string SubmitJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SubmitJobRequest::getArrayRequest()const
{
	return arrayRequest_;
}

void SubmitJobRequest::setArrayRequest(const std::string& arrayRequest)
{
	arrayRequest_ = arrayRequest;
	setCoreParameter("ArrayRequest", arrayRequest);
}

std::string SubmitJobRequest::getUnzipCmd()const
{
	return unzipCmd_;
}

void SubmitJobRequest::setUnzipCmd(const std::string& unzipCmd)
{
	unzipCmd_ = unzipCmd;
	setCoreParameter("UnzipCmd", unzipCmd);
}

std::string SubmitJobRequest::getPackagePath()const
{
	return packagePath_;
}

void SubmitJobRequest::setPackagePath(const std::string& packagePath)
{
	packagePath_ = packagePath;
	setCoreParameter("PackagePath", packagePath);
}

std::string SubmitJobRequest::getInputFileUrl()const
{
	return inputFileUrl_;
}

void SubmitJobRequest::setInputFileUrl(const std::string& inputFileUrl)
{
	inputFileUrl_ = inputFileUrl;
	setCoreParameter("InputFileUrl", inputFileUrl);
}

std::string SubmitJobRequest::getName()const
{
	return name_;
}

void SubmitJobRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string SubmitJobRequest::getStdoutRedirectPath()const
{
	return stdoutRedirectPath_;
}

void SubmitJobRequest::setStdoutRedirectPath(const std::string& stdoutRedirectPath)
{
	stdoutRedirectPath_ = stdoutRedirectPath;
	setCoreParameter("StdoutRedirectPath", stdoutRedirectPath);
}

std::string SubmitJobRequest::getContainerId()const
{
	return containerId_;
}

void SubmitJobRequest::setContainerId(const std::string& containerId)
{
	containerId_ = containerId;
	setCoreParameter("ContainerId", containerId);
}

