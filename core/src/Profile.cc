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

#include <alibabacloud/core/Profile.h>

using namespace AlibabaCloud;

std::string Profile::name() const
{ return name_; }

void Profile::setName(const std::string& value) 
{ name_ = value; }

Credentials Profile::credentials() const 
{ return credentials_; }

void Profile::setCredentials(const Credentials& value) 
{ credentials_ = value; }

std::string Profile::region() const 
{ return region_; }

void Profile::setRegion(const std::string& value) 
{ region_ = value; }

std::string Profile::roleArn() const 
{ return roleArn_; }

void Profile::setRoleArn(const std::string& value) 
{ roleArn_ = value; }

std::string Profile::sourceProfile() const 
{ return sourceProfile_; }

void Profile::setSourceProfile(const std::string& value) 
{ sourceProfile_ = value; }

void Profile::setAllKeyValPairs(const std::map<std::string, std::string>& map)
{
	allKeyValPairs_ = map;
}

std::string Profile::value(const std::string& key)
{
	auto iter = allKeyValPairs_.find(key);
	if (iter == allKeyValPairs_.end()) return "";
	return iter->second;
}