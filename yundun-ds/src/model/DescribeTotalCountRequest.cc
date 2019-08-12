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

#include <alibabacloud/yundun-ds/model/DescribeTotalCountRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeTotalCountRequest;

DescribeTotalCountRequest::DescribeTotalCountRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeTotalCount")
{}

DescribeTotalCountRequest::~DescribeTotalCountRequest()
{}

std::string DescribeTotalCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeTotalCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

int DescribeTotalCountRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeTotalCountRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", featureType);
}

std::string DescribeTotalCountRequest::getLang()const
{
	return lang_;
}

void DescribeTotalCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

