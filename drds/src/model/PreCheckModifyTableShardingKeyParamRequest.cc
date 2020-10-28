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

#include <alibabacloud/drds/model/PreCheckModifyTableShardingKeyParamRequest.h>

using AlibabaCloud::Drds::Model::PreCheckModifyTableShardingKeyParamRequest;

PreCheckModifyTableShardingKeyParamRequest::PreCheckModifyTableShardingKeyParamRequest() :
	RpcServiceRequest("drds", "2019-01-23", "PreCheckModifyTableShardingKeyParam")
{
	setMethod(HttpRequest::Method::Post);
}

PreCheckModifyTableShardingKeyParamRequest::~PreCheckModifyTableShardingKeyParamRequest()
{}

std::string PreCheckModifyTableShardingKeyParamRequest::getTbPartitions()const
{
	return tbPartitions_;
}

void PreCheckModifyTableShardingKeyParamRequest::setTbPartitions(const std::string& tbPartitions)
{
	tbPartitions_ = tbPartitions;
	setParameter("TbPartitions", tbPartitions);
}

bool PreCheckModifyTableShardingKeyParamRequest::getIsShard()const
{
	return isShard_;
}

void PreCheckModifyTableShardingKeyParamRequest::setIsShard(bool isShard)
{
	isShard_ = isShard;
	setParameter("IsShard", isShard ? "true" : "false");
}

std::string PreCheckModifyTableShardingKeyParamRequest::getTbShardingFunction()const
{
	return tbShardingFunction_;
}

void PreCheckModifyTableShardingKeyParamRequest::setTbShardingFunction(const std::string& tbShardingFunction)
{
	tbShardingFunction_ = tbShardingFunction;
	setParameter("TbShardingFunction", tbShardingFunction);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getDbShardingColumnList()const
{
	return dbShardingColumnList_;
}

void PreCheckModifyTableShardingKeyParamRequest::setDbShardingColumnList(const std::string& dbShardingColumnList)
{
	dbShardingColumnList_ = dbShardingColumnList;
	setParameter("DbShardingColumnList", dbShardingColumnList);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckModifyTableShardingKeyParamRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getTbComputeLength()const
{
	return tbComputeLength_;
}

void PreCheckModifyTableShardingKeyParamRequest::setTbComputeLength(const std::string& tbComputeLength)
{
	tbComputeLength_ = tbComputeLength;
	setParameter("TbComputeLength", tbComputeLength);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getTbRightShiftOffset()const
{
	return tbRightShiftOffset_;
}

void PreCheckModifyTableShardingKeyParamRequest::setTbRightShiftOffset(const std::string& tbRightShiftOffset)
{
	tbRightShiftOffset_ = tbRightShiftOffset;
	setParameter("TbRightShiftOffset", tbRightShiftOffset);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getDbComputeLength()const
{
	return dbComputeLength_;
}

void PreCheckModifyTableShardingKeyParamRequest::setDbComputeLength(const std::string& dbComputeLength)
{
	dbComputeLength_ = dbComputeLength;
	setParameter("DbComputeLength", dbComputeLength);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getSrcTableName()const
{
	return srcTableName_;
}

void PreCheckModifyTableShardingKeyParamRequest::setSrcTableName(const std::string& srcTableName)
{
	srcTableName_ = srcTableName;
	setParameter("SrcTableName", srcTableName);
}

int PreCheckModifyTableShardingKeyParamRequest::getDbRightShiftOffset()const
{
	return dbRightShiftOffset_;
}

void PreCheckModifyTableShardingKeyParamRequest::setDbRightShiftOffset(int dbRightShiftOffset)
{
	dbRightShiftOffset_ = dbRightShiftOffset;
	setParameter("DbRightShiftOffset", std::to_string(dbRightShiftOffset));
}

std::string PreCheckModifyTableShardingKeyParamRequest::getTargetTableName()const
{
	return targetTableName_;
}

void PreCheckModifyTableShardingKeyParamRequest::setTargetTableName(const std::string& targetTableName)
{
	targetTableName_ = targetTableName;
	setParameter("TargetTableName", targetTableName);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void PreCheckModifyTableShardingKeyParamRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getDbShardingFunction()const
{
	return dbShardingFunction_;
}

void PreCheckModifyTableShardingKeyParamRequest::setDbShardingFunction(const std::string& dbShardingFunction)
{
	dbShardingFunction_ = dbShardingFunction;
	setParameter("DbShardingFunction", dbShardingFunction);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getDbName()const
{
	return dbName_;
}

void PreCheckModifyTableShardingKeyParamRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string PreCheckModifyTableShardingKeyParamRequest::getTbShardingColumnList()const
{
	return tbShardingColumnList_;
}

void PreCheckModifyTableShardingKeyParamRequest::setTbShardingColumnList(const std::string& tbShardingColumnList)
{
	tbShardingColumnList_ = tbShardingColumnList;
	setParameter("TbShardingColumnList", tbShardingColumnList);
}

