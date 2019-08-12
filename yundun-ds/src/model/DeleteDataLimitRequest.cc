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

#include <alibabacloud/yundun-ds/model/DeleteDataLimitRequest.h>

using AlibabaCloud::Yundun_ds::Model::DeleteDataLimitRequest;

DeleteDataLimitRequest::DeleteDataLimitRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DeleteDataLimit")
{}

DeleteDataLimitRequest::~DeleteDataLimitRequest()
{}

std::string DeleteDataLimitRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteDataLimitRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DeleteDataLimitRequest::getFeatureType()const
{
	return featureType_;
}

void DeleteDataLimitRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

long DeleteDataLimitRequest::getId()const
{
	return id_;
}

void DeleteDataLimitRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DeleteDataLimitRequest::getLang()const
{
	return lang_;
}

void DeleteDataLimitRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

