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

#include <alibabacloud/drds/model/DescribeCustomDataExportSrcDstTablesRequest.h>

using AlibabaCloud::Drds::Model::DescribeCustomDataExportSrcDstTablesRequest;

DescribeCustomDataExportSrcDstTablesRequest::DescribeCustomDataExportSrcDstTablesRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeCustomDataExportSrcDstTables")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCustomDataExportSrcDstTablesRequest::~DescribeCustomDataExportSrcDstTablesRequest()
{}

std::string DescribeCustomDataExportSrcDstTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCustomDataExportSrcDstTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCustomDataExportSrcDstTablesRequest::getExportParam()const
{
	return exportParam_;
}

void DescribeCustomDataExportSrcDstTablesRequest::setExportParam(const std::string& exportParam)
{
	exportParam_ = exportParam;
	setParameter("ExportParam", exportParam);
}

