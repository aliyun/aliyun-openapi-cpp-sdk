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

#include <alibabacloud/aegis/model/ModifySasAssetStatisticsColumnRequest.h>

using AlibabaCloud::Aegis::Model::ModifySasAssetStatisticsColumnRequest;

ModifySasAssetStatisticsColumnRequest::ModifySasAssetStatisticsColumnRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifySasAssetStatisticsColumn")
{}

ModifySasAssetStatisticsColumnRequest::~ModifySasAssetStatisticsColumnRequest()
{}

std::string ModifySasAssetStatisticsColumnRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifySasAssetStatisticsColumnRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string ModifySasAssetStatisticsColumnRequest::getStatisticsColumn()const
{
	return statisticsColumn_;
}

void ModifySasAssetStatisticsColumnRequest::setStatisticsColumn(const std::string& statisticsColumn)
{
	statisticsColumn_ = statisticsColumn;
	setCoreParameter("StatisticsColumn", std::to_string(statisticsColumn));
}

