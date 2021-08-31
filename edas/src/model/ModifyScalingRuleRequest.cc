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

#include <alibabacloud/edas/model/ModifyScalingRuleRequest.h>

using AlibabaCloud::Edas::Model::ModifyScalingRuleRequest;

ModifyScalingRuleRequest::ModifyScalingRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/app/scaling_rules");
	setMethod(HttpRequest::Method::Post);
}

ModifyScalingRuleRequest::~ModifyScalingRuleRequest()
{}

int ModifyScalingRuleRequest::getInStep()const
{
	return inStep_;
}

void ModifyScalingRuleRequest::setInStep(int inStep)
{
	inStep_ = inStep;
	setParameter("InStep", std::to_string(inStep));
}

int ModifyScalingRuleRequest::getOutInstanceNum()const
{
	return outInstanceNum_;
}

void ModifyScalingRuleRequest::setOutInstanceNum(int outInstanceNum)
{
	outInstanceNum_ = outInstanceNum;
	setParameter("OutInstanceNum", std::to_string(outInstanceNum));
}

int ModifyScalingRuleRequest::getOutRT()const
{
	return outRT_;
}

void ModifyScalingRuleRequest::setOutRT(int outRT)
{
	outRT_ = outRT;
	setParameter("OutRT", std::to_string(outRT));
}

int ModifyScalingRuleRequest::getInInstanceNum()const
{
	return inInstanceNum_;
}

void ModifyScalingRuleRequest::setInInstanceNum(int inInstanceNum)
{
	inInstanceNum_ = inInstanceNum;
	setParameter("InInstanceNum", std::to_string(inInstanceNum));
}

std::string ModifyScalingRuleRequest::getVSwitchIds()const
{
	return vSwitchIds_;
}

void ModifyScalingRuleRequest::setVSwitchIds(const std::string& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
	setParameter("VSwitchIds", vSwitchIds);
}

std::string ModifyScalingRuleRequest::getTemplateInstanceId()const
{
	return templateInstanceId_;
}

void ModifyScalingRuleRequest::setTemplateInstanceId(const std::string& templateInstanceId)
{
	templateInstanceId_ = templateInstanceId;
	setParameter("TemplateInstanceId", templateInstanceId);
}

bool ModifyScalingRuleRequest::getAcceptEULA()const
{
	return acceptEULA_;
}

void ModifyScalingRuleRequest::setAcceptEULA(bool acceptEULA)
{
	acceptEULA_ = acceptEULA;
	setParameter("AcceptEULA", acceptEULA ? "true" : "false");
}

int ModifyScalingRuleRequest::getOutStep()const
{
	return outStep_;
}

void ModifyScalingRuleRequest::setOutStep(int outStep)
{
	outStep_ = outStep;
	setParameter("OutStep", std::to_string(outStep));
}

int ModifyScalingRuleRequest::getOutCPU()const
{
	return outCPU_;
}

void ModifyScalingRuleRequest::setOutCPU(int outCPU)
{
	outCPU_ = outCPU;
	setParameter("OutCPU", std::to_string(outCPU));
}

std::string ModifyScalingRuleRequest::getKeyPairName()const
{
	return keyPairName_;
}

void ModifyScalingRuleRequest::setKeyPairName(const std::string& keyPairName)
{
	keyPairName_ = keyPairName;
	setParameter("KeyPairName", keyPairName);
}

std::string ModifyScalingRuleRequest::getPassword()const
{
	return password_;
}

void ModifyScalingRuleRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

int ModifyScalingRuleRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void ModifyScalingRuleRequest::setTemplateVersion(int templateVersion)
{
	templateVersion_ = templateVersion;
	setParameter("TemplateVersion", std::to_string(templateVersion));
}

std::string ModifyScalingRuleRequest::getInCondition()const
{
	return inCondition_;
}

void ModifyScalingRuleRequest::setInCondition(const std::string& inCondition)
{
	inCondition_ = inCondition;
	setParameter("InCondition", inCondition);
}

int ModifyScalingRuleRequest::getInRT()const
{
	return inRT_;
}

void ModifyScalingRuleRequest::setInRT(int inRT)
{
	inRT_ = inRT;
	setParameter("InRT", std::to_string(inRT));
}

int ModifyScalingRuleRequest::getInCpu()const
{
	return inCpu_;
}

void ModifyScalingRuleRequest::setInCpu(int inCpu)
{
	inCpu_ = inCpu;
	setParameter("InCpu", std::to_string(inCpu));
}

int ModifyScalingRuleRequest::getOutDuration()const
{
	return outDuration_;
}

void ModifyScalingRuleRequest::setOutDuration(int outDuration)
{
	outDuration_ = outDuration;
	setParameter("OutDuration", std::to_string(outDuration));
}

std::string ModifyScalingRuleRequest::getMultiAzPolicy()const
{
	return multiAzPolicy_;
}

void ModifyScalingRuleRequest::setMultiAzPolicy(const std::string& multiAzPolicy)
{
	multiAzPolicy_ = multiAzPolicy;
	setParameter("MultiAzPolicy", multiAzPolicy);
}

int ModifyScalingRuleRequest::getOutLoad()const
{
	return outLoad_;
}

void ModifyScalingRuleRequest::setOutLoad(int outLoad)
{
	outLoad_ = outLoad;
	setParameter("OutLoad", std::to_string(outLoad));
}

int ModifyScalingRuleRequest::getInLoad()const
{
	return inLoad_;
}

void ModifyScalingRuleRequest::setInLoad(int inLoad)
{
	inLoad_ = inLoad;
	setParameter("InLoad", std::to_string(inLoad));
}

std::string ModifyScalingRuleRequest::getGroupId()const
{
	return groupId_;
}

void ModifyScalingRuleRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string ModifyScalingRuleRequest::getResourceFrom()const
{
	return resourceFrom_;
}

void ModifyScalingRuleRequest::setResourceFrom(const std::string& resourceFrom)
{
	resourceFrom_ = resourceFrom;
	setParameter("ResourceFrom", resourceFrom);
}

bool ModifyScalingRuleRequest::getOutEnable()const
{
	return outEnable_;
}

void ModifyScalingRuleRequest::setOutEnable(bool outEnable)
{
	outEnable_ = outEnable;
	setParameter("OutEnable", outEnable ? "true" : "false");
}

std::string ModifyScalingRuleRequest::getTemplateId()const
{
	return templateId_;
}

void ModifyScalingRuleRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string ModifyScalingRuleRequest::getScalingPolicy()const
{
	return scalingPolicy_;
}

void ModifyScalingRuleRequest::setScalingPolicy(const std::string& scalingPolicy)
{
	scalingPolicy_ = scalingPolicy;
	setParameter("ScalingPolicy", scalingPolicy);
}

std::string ModifyScalingRuleRequest::getOutCondition()const
{
	return outCondition_;
}

void ModifyScalingRuleRequest::setOutCondition(const std::string& outCondition)
{
	outCondition_ = outCondition;
	setParameter("OutCondition", outCondition);
}

int ModifyScalingRuleRequest::getInDuration()const
{
	return inDuration_;
}

void ModifyScalingRuleRequest::setInDuration(int inDuration)
{
	inDuration_ = inDuration;
	setParameter("InDuration", std::to_string(inDuration));
}

bool ModifyScalingRuleRequest::getInEnable()const
{
	return inEnable_;
}

void ModifyScalingRuleRequest::setInEnable(bool inEnable)
{
	inEnable_ = inEnable;
	setParameter("InEnable", inEnable ? "true" : "false");
}

std::string ModifyScalingRuleRequest::getAppId()const
{
	return appId_;
}

void ModifyScalingRuleRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string ModifyScalingRuleRequest::getVpcId()const
{
	return vpcId_;
}

void ModifyScalingRuleRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ModifyScalingRuleRequest::getTemplateInstanceName()const
{
	return templateInstanceName_;
}

void ModifyScalingRuleRequest::setTemplateInstanceName(const std::string& templateInstanceName)
{
	templateInstanceName_ = templateInstanceName;
	setParameter("TemplateInstanceName", templateInstanceName);
}

