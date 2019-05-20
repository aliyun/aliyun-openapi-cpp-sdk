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

#include <alibabacloud/yundun-ds/model/DescribeDataTotalCountRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeDataTotalCountRequest;

DescribeDataTotalCountRequest::DescribeDataTotalCountRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeDataTotalCount")
{}

DescribeDataTotalCountRequest::~DescribeDataTotalCountRequest()
{}

std::string DescribeDataTotalCountRequest::getProductCode()const
{
	return productCode_;
}

void DescribeDataTotalCountRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

long DescribeDataTotalCountRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDataTotalCountRequest::setInstanceId(long instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeDataTotalCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDataTotalCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeDataTotalCountRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeDataTotalCountRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

int DescribeDataTotalCountRequest::getCountType()const
{
	return countType_;
}

void DescribeDataTotalCountRequest::setCountType(int countType)
{
	countType_ = countType;
	setCoreParameter("CountType", std::to_string(countType));
}

std::string DescribeDataTotalCountRequest::getLang()const
{
	return lang_;
}

void DescribeDataTotalCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

