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

#include <alibabacloud/ft/model/FtParamListRequest.h>

using AlibabaCloud::Ft::Model::FtParamListRequest;

FtParamListRequest::FtParamListRequest() :
	RpcServiceRequest("ft", "2018-07-13", "FtParamList")
{
	setMethod(HttpRequest::Method::Post);
}

FtParamListRequest::~FtParamListRequest()
{}

std::vector<FtParamListRequest::Disk> FtParamListRequest::getDisk()const
{
	return disk_;
}

void FtParamListRequest::setDisk(const std::vector<Disk>& disk)
{
	disk_ = disk;
	for(int dep1 = 0; dep1!= disk.size(); dep1++) {
		auto diskObj = disk.at(dep1);
		std::string diskObjStr = "Disk." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= diskObj.size.size(); dep2++) {
			setParameter(diskObjStr + ".Size."+ std::to_string(dep2), diskObj.size.at(dep2));
		}
		for(int dep2 = 0; dep2!= diskObj.type.size(); dep2++) {
			setParameter(diskObjStr + ".Type."+ std::to_string(dep2), diskObj.type.at(dep2));
		}
	}
}

std::string FtParamListRequest::getName()const
{
	return name_;
}

void FtParamListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

