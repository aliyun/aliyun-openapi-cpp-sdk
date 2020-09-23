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

#include <alibabacloud/cs/model/DescribeClusterAttachScriptsRequest.h>

using AlibabaCloud::CS::Model::DescribeClusterAttachScriptsRequest;

DescribeClusterAttachScriptsRequest::DescribeClusterAttachScriptsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]/attachscript");
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterAttachScriptsRequest::~DescribeClusterAttachScriptsRequest()
{}

std::string DescribeClusterAttachScriptsRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterAttachScriptsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeClusterAttachScriptsRequest::getArch()const
{
	return arch_;
}

void DescribeClusterAttachScriptsRequest::setArch(const std::string& arch)
{
	arch_ = arch;
	setBodyParameter("Arch", arch);
}

