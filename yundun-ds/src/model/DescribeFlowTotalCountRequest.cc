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

#include <alibabacloud/yundun-ds/model/DescribeFlowTotalCountRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeFlowTotalCountRequest;

DescribeFlowTotalCountRequest::DescribeFlowTotalCountRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeFlowTotalCount")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeFlowTotalCountRequest::~DescribeFlowTotalCountRequest()
{}

std::string DescribeFlowTotalCountRequest::getProductCode()const
{
	return productCode_;
}

void DescribeFlowTotalCountRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

int DescribeFlowTotalCountRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeFlowTotalCountRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string DescribeFlowTotalCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeFlowTotalCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

long DescribeFlowTotalCountRequest::getDepartId()const
{
	return departId_;
}

void DescribeFlowTotalCountRequest::setDepartId(long departId)
{
	departId_ = departId;
	setParameter("DepartId", std::to_string(departId));
}

std::string DescribeFlowTotalCountRequest::getLang()const
{
	return lang_;
}

void DescribeFlowTotalCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

