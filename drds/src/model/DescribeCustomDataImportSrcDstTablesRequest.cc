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

#include <alibabacloud/drds/model/DescribeCustomDataImportSrcDstTablesRequest.h>

using AlibabaCloud::Drds::Model::DescribeCustomDataImportSrcDstTablesRequest;

DescribeCustomDataImportSrcDstTablesRequest::DescribeCustomDataImportSrcDstTablesRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeCustomDataImportSrcDstTables")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCustomDataImportSrcDstTablesRequest::~DescribeCustomDataImportSrcDstTablesRequest()
{}

std::string DescribeCustomDataImportSrcDstTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCustomDataImportSrcDstTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCustomDataImportSrcDstTablesRequest::getImportParam()const
{
	return importParam_;
}

void DescribeCustomDataImportSrcDstTablesRequest::setImportParam(const std::string& importParam)
{
	importParam_ = importParam;
	setParameter("ImportParam", importParam);
}

