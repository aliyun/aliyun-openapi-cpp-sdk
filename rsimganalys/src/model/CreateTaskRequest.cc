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

#include <alibabacloud/rsimganalys/model/CreateTaskRequest.h>

using AlibabaCloud::Rsimganalys::Model::CreateTaskRequest;

CreateTaskRequest::CreateTaskRequest() :
	RpcServiceRequest("rsimganalys", "2019-08-01", "CreateTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTaskRequest::~CreateTaskRequest()
{}

float CreateTaskRequest::getConfidence()const
{
	return confidence_;
}

void CreateTaskRequest::setConfidence(float confidence)
{
	confidence_ = confidence;
	setParameter("Confidence", std::to_string(confidence));
}

long CreateTaskRequest::getFilterValue()const
{
	return filterValue_;
}

void CreateTaskRequest::setFilterValue(long filterValue)
{
	filterValue_ = filterValue;
	setParameter("FilterValue", std::to_string(filterValue));
}

std::string CreateTaskRequest::getDescription()const
{
	return description_;
}

void CreateTaskRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateTaskRequest::getShpFilter()const
{
	return shpFilter_;
}

void CreateTaskRequest::setShpFilter(const std::string& shpFilter)
{
	shpFilter_ = shpFilter;
	setParameter("ShpFilter", shpFilter);
}

std::string CreateTaskRequest::getProductType()const
{
	return productType_;
}

void CreateTaskRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string CreateTaskRequest::getZoneList()const
{
	return zoneList_;
}

void CreateTaskRequest::setZoneList(const std::string& zoneList)
{
	zoneList_ = zoneList;
	setParameter("ZoneList", zoneList);
}

std::string CreateTaskRequest::getSrcImageId()const
{
	return srcImageId_;
}

void CreateTaskRequest::setSrcImageId(const std::string& srcImageId)
{
	srcImageId_ = srcImageId;
	setParameter("SrcImageId", srcImageId);
}

std::string CreateTaskRequest::getAppkey()const
{
	return appkey_;
}

void CreateTaskRequest::setAppkey(const std::string& appkey)
{
	appkey_ = appkey;
	setParameter("Appkey", appkey);
}

std::string CreateTaskRequest::getDstImageId()const
{
	return dstImageId_;
}

void CreateTaskRequest::setDstImageId(const std::string& dstImageId)
{
	dstImageId_ = dstImageId;
	setParameter("DstImageId", dstImageId);
}

std::string CreateTaskRequest::getJobName()const
{
	return jobName_;
}

void CreateTaskRequest::setJobName(const std::string& jobName)
{
	jobName_ = jobName;
	setParameter("JobName", jobName);
}

