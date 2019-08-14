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

#include <alibabacloud/sddp/model/DeleteRuleRequest.h>

using AlibabaCloud::Sddp::Model::DeleteRuleRequest;

DeleteRuleRequest::DeleteRuleRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DeleteRule")
{}

DeleteRuleRequest::~DeleteRuleRequest()
{}

std::string DeleteRuleRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteRuleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DeleteRuleRequest::getFeatureType()const
{
	return featureType_;
}

void DeleteRuleRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

long DeleteRuleRequest::getId()const
{
	return id_;
}

void DeleteRuleRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string DeleteRuleRequest::getLang()const
{
	return lang_;
}

void DeleteRuleRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

