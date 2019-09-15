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

#include <alibabacloud/aegis/model/OperateSuspiciousTargetConfigRequest.h>

using AlibabaCloud::Aegis::Model::OperateSuspiciousTargetConfigRequest;

OperateSuspiciousTargetConfigRequest::OperateSuspiciousTargetConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "OperateSuspiciousTargetConfig")
{}

OperateSuspiciousTargetConfigRequest::~OperateSuspiciousTargetConfigRequest()
{}

std::string OperateSuspiciousTargetConfigRequest::getTargetType()const
{
	return targetType_;
}

void OperateSuspiciousTargetConfigRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setCoreParameter("TargetType", targetType);
}

std::string OperateSuspiciousTargetConfigRequest::getType()const
{
	return type_;
}

void OperateSuspiciousTargetConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string OperateSuspiciousTargetConfigRequest::getTargetOperations()const
{
	return targetOperations_;
}

void OperateSuspiciousTargetConfigRequest::setTargetOperations(const std::string& targetOperations)
{
	targetOperations_ = targetOperations;
	setCoreParameter("TargetOperations", targetOperations);
}

std::string OperateSuspiciousTargetConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void OperateSuspiciousTargetConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string OperateSuspiciousTargetConfigRequest::getLang()const
{
	return lang_;
}

void OperateSuspiciousTargetConfigRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

