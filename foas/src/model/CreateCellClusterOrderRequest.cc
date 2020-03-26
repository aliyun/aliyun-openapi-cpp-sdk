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

#include <alibabacloud/foas/model/CreateCellClusterOrderRequest.h>

using AlibabaCloud::Foas::Model::CreateCellClusterOrderRequest;

CreateCellClusterOrderRequest::CreateCellClusterOrderRequest() :
	RoaServiceRequest("foas", "2018-11-11")
{
	setResourcePath("/api/v2/realtime-compute/cell/buy");
	setMethod(HttpRequest::Method::Post);
}

CreateCellClusterOrderRequest::~CreateCellClusterOrderRequest()
{}

int CreateCellClusterOrderRequest::getPeriod()const
{
	return period_;
}

void CreateCellClusterOrderRequest::setPeriod(int period)
{
	period_ = period;
	setBodyParameter("Period", std::to_string(period));
}

int CreateCellClusterOrderRequest::getSlaveNum()const
{
	return slaveNum_;
}

void CreateCellClusterOrderRequest::setSlaveNum(int slaveNum)
{
	slaveNum_ = slaveNum;
	setBodyParameter("SlaveNum", std::to_string(slaveNum));
}

std::string CreateCellClusterOrderRequest::getRegionId()const
{
	return regionId_;
}

void CreateCellClusterOrderRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setHeader("RegionId", regionId);
}

std::string CreateCellClusterOrderRequest::getSlaveSpec()const
{
	return slaveSpec_;
}

void CreateCellClusterOrderRequest::setSlaveSpec(const std::string& slaveSpec)
{
	slaveSpec_ = slaveSpec;
	setBodyParameter("SlaveSpec", slaveSpec);
}

std::string CreateCellClusterOrderRequest::getRegion()const
{
	return region_;
}

void CreateCellClusterOrderRequest::setRegion(const std::string& region)
{
	region_ = region;
	setBodyParameter("Region", region);
}

int CreateCellClusterOrderRequest::getMasterNum()const
{
	return masterNum_;
}

void CreateCellClusterOrderRequest::setMasterNum(int masterNum)
{
	masterNum_ = masterNum;
	setBodyParameter("MasterNum", std::to_string(masterNum));
}

std::string CreateCellClusterOrderRequest::getMasterSpec()const
{
	return masterSpec_;
}

void CreateCellClusterOrderRequest::setMasterSpec(const std::string& masterSpec)
{
	masterSpec_ = masterSpec;
	setBodyParameter("MasterSpec", masterSpec);
}

std::string CreateCellClusterOrderRequest::getPayModel()const
{
	return payModel_;
}

void CreateCellClusterOrderRequest::setPayModel(const std::string& payModel)
{
	payModel_ = payModel;
	setBodyParameter("PayModel", payModel);
}

