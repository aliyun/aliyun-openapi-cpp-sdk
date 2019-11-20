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

#include <alibabacloud/cas/model/DescribeOSSDownloadInfoRequest.h>

using AlibabaCloud::Cas::Model::DescribeOSSDownloadInfoRequest;

DescribeOSSDownloadInfoRequest::DescribeOSSDownloadInfoRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeOSSDownloadInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOSSDownloadInfoRequest::~DescribeOSSDownloadInfoRequest()
{}

std::string DescribeOSSDownloadInfoRequest::getOssKey()const
{
	return ossKey_;
}

void DescribeOSSDownloadInfoRequest::setOssKey(const std::string& ossKey)
{
	ossKey_ = ossKey;
	setCoreParameter("OssKey", ossKey);
}

std::string DescribeOSSDownloadInfoRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeOSSDownloadInfoRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeOSSDownloadInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeOSSDownloadInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeOSSDownloadInfoRequest::getLang()const
{
	return lang_;
}

void DescribeOSSDownloadInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

