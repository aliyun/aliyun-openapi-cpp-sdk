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

#include <alibabacloud/drds/model/SubmitTableShardingKeyModifyRequest.h>

using AlibabaCloud::Drds::Model::SubmitTableShardingKeyModifyRequest;

SubmitTableShardingKeyModifyRequest::SubmitTableShardingKeyModifyRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitTableShardingKeyModify")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitTableShardingKeyModifyRequest::~SubmitTableShardingKeyModifyRequest()
{}

std::string SubmitTableShardingKeyModifyRequest::getTbPartitions()const
{
	return tbPartitions_;
}

void SubmitTableShardingKeyModifyRequest::setTbPartitions(const std::string& tbPartitions)
{
	tbPartitions_ = tbPartitions;
	setParameter("TbPartitions", tbPartitions);
}

bool SubmitTableShardingKeyModifyRequest::getIsShard()const
{
	return isShard_;
}

void SubmitTableShardingKeyModifyRequest::setIsShard(bool isShard)
{
	isShard_ = isShard;
	setParameter("IsShard", isShard ? "true" : "false");
}

std::string SubmitTableShardingKeyModifyRequest::getTbShardingFunction()const
{
	return tbShardingFunction_;
}

void SubmitTableShardingKeyModifyRequest::setTbShardingFunction(const std::string& tbShardingFunction)
{
	tbShardingFunction_ = tbShardingFunction;
	setParameter("TbShardingFunction", tbShardingFunction);
}

std::string SubmitTableShardingKeyModifyRequest::getDbShardingColumnList()const
{
	return dbShardingColumnList_;
}

void SubmitTableShardingKeyModifyRequest::setDbShardingColumnList(const std::string& dbShardingColumnList)
{
	dbShardingColumnList_ = dbShardingColumnList;
	setParameter("DbShardingColumnList", dbShardingColumnList);
}

std::string SubmitTableShardingKeyModifyRequest::getRegionId()const
{
	return regionId_;
}

void SubmitTableShardingKeyModifyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SubmitTableShardingKeyModifyRequest::getTbComputeLength()const
{
	return tbComputeLength_;
}

void SubmitTableShardingKeyModifyRequest::setTbComputeLength(const std::string& tbComputeLength)
{
	tbComputeLength_ = tbComputeLength;
	setParameter("TbComputeLength", tbComputeLength);
}

std::string SubmitTableShardingKeyModifyRequest::getTbRightShiftOffset()const
{
	return tbRightShiftOffset_;
}

void SubmitTableShardingKeyModifyRequest::setTbRightShiftOffset(const std::string& tbRightShiftOffset)
{
	tbRightShiftOffset_ = tbRightShiftOffset;
	setParameter("TbRightShiftOffset", tbRightShiftOffset);
}

std::string SubmitTableShardingKeyModifyRequest::getDbComputeLength()const
{
	return dbComputeLength_;
}

void SubmitTableShardingKeyModifyRequest::setDbComputeLength(const std::string& dbComputeLength)
{
	dbComputeLength_ = dbComputeLength;
	setParameter("DbComputeLength", dbComputeLength);
}

std::string SubmitTableShardingKeyModifyRequest::getSrcTableName()const
{
	return srcTableName_;
}

void SubmitTableShardingKeyModifyRequest::setSrcTableName(const std::string& srcTableName)
{
	srcTableName_ = srcTableName;
	setParameter("SrcTableName", srcTableName);
}

int SubmitTableShardingKeyModifyRequest::getDbRightShiftOffset()const
{
	return dbRightShiftOffset_;
}

void SubmitTableShardingKeyModifyRequest::setDbRightShiftOffset(int dbRightShiftOffset)
{
	dbRightShiftOffset_ = dbRightShiftOffset;
	setParameter("DbRightShiftOffset", std::to_string(dbRightShiftOffset));
}

std::string SubmitTableShardingKeyModifyRequest::getTargetTableName()const
{
	return targetTableName_;
}

void SubmitTableShardingKeyModifyRequest::setTargetTableName(const std::string& targetTableName)
{
	targetTableName_ = targetTableName;
	setParameter("TargetTableName", targetTableName);
}

std::string SubmitTableShardingKeyModifyRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitTableShardingKeyModifyRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitTableShardingKeyModifyRequest::getDbShardingFunction()const
{
	return dbShardingFunction_;
}

void SubmitTableShardingKeyModifyRequest::setDbShardingFunction(const std::string& dbShardingFunction)
{
	dbShardingFunction_ = dbShardingFunction;
	setParameter("DbShardingFunction", dbShardingFunction);
}

std::string SubmitTableShardingKeyModifyRequest::getDbName()const
{
	return dbName_;
}

void SubmitTableShardingKeyModifyRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string SubmitTableShardingKeyModifyRequest::getTbShardingColumnList()const
{
	return tbShardingColumnList_;
}

void SubmitTableShardingKeyModifyRequest::setTbShardingColumnList(const std::string& tbShardingColumnList)
{
	tbShardingColumnList_ = tbShardingColumnList;
	setParameter("TbShardingColumnList", tbShardingColumnList);
}

