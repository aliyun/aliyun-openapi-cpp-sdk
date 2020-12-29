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
{
	setMethod(HttpRequest::Method::Get);
}

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

std::string SubmitJobRequest::getRunasUserPassword()const
{
	return runasUserPassword_;
}

void SubmitJobRequest::setRunasUserPassword(const std::string& runasUserPassword)
{
	runasUserPassword_ = runasUserPassword;
	setParameter("RunasUserPassword", runasUserPassword);
}

std::string SubmitJobRequest::getClockTime()const
{
	return clockTime_;
}

void SubmitJobRequest::setClockTime(const std::string& clockTime)
{
	clockTime_ = clockTime;
	setParameter("ClockTime", clockTime);
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

std::string SubmitJobRequest::getJobQueue()const
{
	return jobQueue_;
}

void SubmitJobRequest::setJobQueue(const std::string& jobQueue)
{
	jobQueue_ = jobQueue;
	setParameter("JobQueue", jobQueue);
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

std::string SubmitJobRequest::getUnzipCmd()const
{
	return unzipCmd_;
}

void SubmitJobRequest::setUnzipCmd(const std::string& unzipCmd)
{
	unzipCmd_ = unzipCmd;
	setParameter("UnzipCmd", unzipCmd);
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

std::string SubmitJobRequest::getMem()const
{
	return mem_;
}

void SubmitJobRequest::setMem(const std::string& mem)
{
	mem_ = mem;
	setParameter("Mem", mem);
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

std::string SubmitJobRequest::getVariables()const
{
	return variables_;
}

void SubmitJobRequest::setVariables(const std::string& variables)
{
	variables_ = variables;
	setParameter("Variables", variables);
}

std::string SubmitJobRequest::getPostCmdLine()const
{
	return postCmdLine_;
}

void SubmitJobRequest::setPostCmdLine(const std::string& postCmdLine)
{
	postCmdLine_ = postCmdLine;
	setParameter("PostCmdLine", postCmdLine);
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
	setParameter("ReRunable", reRunable ? "true" : "false");
}

int SubmitJobRequest::getThread()const
{
	return thread_;
}

void SubmitJobRequest::setThread(int thread)
{
	thread_ = thread;
	setParameter("Thread", std::to_string(thread));
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

int SubmitJobRequest::getGpu()const
{
	return gpu_;
}

void SubmitJobRequest::setGpu(int gpu)
{
	gpu_ = gpu;
	setParameter("Gpu", std::to_string(gpu));
}

int SubmitJobRequest::getNode()const
{
	return node_;
}

void SubmitJobRequest::setNode(int node)
{
	node_ = node;
	setParameter("Node", std::to_string(node));
}

int SubmitJobRequest::getTask()const
{
	return task_;
}

void SubmitJobRequest::setTask(int task)
{
	task_ = task;
	setParameter("Task", std::to_string(task));
}

std::string SubmitJobRequest::getInputFileUrl()const
{
	return inputFileUrl_;
}

void SubmitJobRequest::setInputFileUrl(const std::string& inputFileUrl)
{
	inputFileUrl_ = inputFileUrl;
	setParameter("InputFileUrl", inputFileUrl);
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

std::string SubmitJobRequest::getContainerId()const
{
	return containerId_;
}

void SubmitJobRequest::setContainerId(const std::string& containerId)
{
	containerId_ = containerId;
	setParameter("ContainerId", containerId);
}

